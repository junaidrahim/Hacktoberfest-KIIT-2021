import discord
import pymongo
from os import environ
from datetime import datetime

TOKEN = environ['DiscordToken']
USER = environ['user']
PASSWORD = environ['pass']

client = discord.Client()

clients = pymongo.MongoClient("mongodb+srv://{}:{}@cluster0.xy11h.mongodb.net/notes?retryWrites=true&w=majority".format(USER, PASSWORD))
db = clients.notes

@client.event
async def on_ready():
    print('We are go for launch')

@client.event
async def on_message(message):
    msg = message.content.strip()
    if not msg.startswith('?notes'):
        print('Not me')
        return
    else:
        print('BOT command')
        user = message.author
        command = msg.split(' ')
        if msg == '?notes help':
            response = '**Notes Bot**\n> *here are list of things i can understand*\n> `?notes personal <note> ` =>  Adds note to your personal list\n> `?notes personal list` =>  Shows your personal list\n> `?notes <note> ` =>  Adds note to server\'s list\n> `?notes list` =>  Shows server\'s list\n'
        elif command[1] == 'personal':
            if command[2] == 'list':
                response = getList(author=user)
            else:
                note = ' '
                note = note.join(command[2:])
                createNote(note, author = user)
                response = "**Notes Bot**\n> Note added"
        else:
            if command[1] == 'list':
                response = getList(author=user, hasserver=True, server=message.author.guild.id)
            else:
                note = ' '
                note = note.join(command[1:])
                createNote(note, author = user, hasserver=True, server=message.author.guild)
                response = "**Notes Bot**\n> Note added"
        await message.channel.send(response)

def createNote(note: str, author: str = None, hasserver: bool = False, server: str = None):
    date = datetime.now()
    if hasserver:
        doc = db['users'].find_one({
            '_id': server.id
        })
        if doc == None:
            cre = db['users'].insert_one({
                '_id': server.id,
                'name': server.name,
                'notes': [
                    {
                        'time': date.strftime("%d/%m @ %H:%M"),
                        'author': author.name,
                        'message': note
                    }
                ]
            })
            return cre
        else:
            temp = doc['notes']
            temp.append({
                'time': date.strftime("%d/%m @ %H:%M"),
                'message': note,
                'author': author.name
            })
            cre = db['users'].update_one({
                '_id': server.id
            }, {
                "$set": {
                    'notes': temp
                }
            })
            return cre
    else:
        if author != None:
            doc = db['users'].find_one({
                '_id': author.id
            })
            if doc == None:
                cre = db['users'].insert_one({
                    '_id': author.id,
                    'name': author.name,
                    'notes': [
                        {
                            'time': date.strftime("%d/%m @ %H:%M"),
                            'message': note
                        }
                    ]
                })
                return cre
            else:
                temp = doc['notes']
                temp.append({
                    'time': date.strftime("%d/%m @ %H:%M"),
                    'message': note
                })
                cre = db['users'].update_one({
                    '_id': author.id
                }, {
                    "$set": {
                        'notes': temp
                    }
                })
                return cre

def getList(author: str = None, hasserver: bool = False, server: str = None):
    if hasserver:
        doc = db['users'].find_one({
            '_id': server
        })
        if doc == None or len(doc['notes']) == 0:
            return 'No notes found'
        else:
            notes = '**your list**\n'
            for i in doc['notes']:
                notes += '> ({} by {})      {}\n'.format(i['time'], i['author'], i['message'])
            return notes
    else:
        doc = db['users'].find_one({
            '_id': author.id
        })
        if doc == None or len(doc['notes']) == 0:
            return 'No notes found'
        else:
            notes = '**your list**\n'
            for i in doc['notes']:
                notes += '> ({})      {}\n'.format(i['time'], i['message'])
            return notes

client.run(TOKEN)
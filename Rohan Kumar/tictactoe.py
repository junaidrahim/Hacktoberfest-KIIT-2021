def display_board(board):
    print(board[7]+'|'+board[8]+'|'+board[9])
    print('-|-|-')
    print(board[4]+'|'+board[5]+'|'+board[6])
    print('-|-|-')
    print(board[1]+'|'+board[2]+'|'+board[3])

def player_input():
    marker = ''
    while marker != 'X' and marker != 'O':
        marker = input('player 1, chose X or O: ')
    player1 = marker
    if player1 == 'X':
        player2 = 'O'
    else:
        player2 = 'X'
    return(player1,player2)

def place_marker(board, marker, position):
    board[position] = marker

def win_check(board, mark):
    return ((board[1]==mark and board[2]==mark and board[3]==mark) or 
            (board[4]==mark and board[5]==mark and board[6]==mark) or
            (board[7]==mark and board[8]==mark and board[9]==mark) or
            (board[1]==mark and board[4]==mark and board[7]==mark) or
            (board[2]==mark and board[5]==mark and board[8]==mark) or
            (board[3]==mark and board[6]==mark and board[9]==mark) or
            (board[1]==mark and board[5]==mark and board[9]==mark) or
            (board[3]==mark and board[5]==mark and board[7]==mark))

import random

def choose_first():
    if random.randint(0,1) == 0:
        return 'Player 1'
    else:
        return 'Player 2'

def space_check(board, position):
    
    return board[position] == ' '

def full_board_check(board):
    for i in range(1,10):
        if space_check(board, i):
            return False
    return True

def player_choice(board):
    position = 0
    while position not in [1,2,3,4,5,6,7,8,9] or not space_check(board, position):
        position = int(input('Chose your position from 1-9: '))
    return position

def replay():
    response = input('Do you want to play again? Enter Yes or No:')
    if response.lower()[0] == 'y':
        return True
    elif response.lower()[0] == 'n':
        return False

print('Welcome to Tic Tac Toe!')
print('The board is in the format of a number pad')
print('7|8|9')
print('-|-|-')
print('4|5|6')
print('-|-|-')
print('1|2|3')
while True:
    brd = [' ']*10
    player1_marker, player2_marker = player_input()
    turn = choose_first()
    print(turn+' will go first.')
    
    play_game = input('Are you ready? Yes or No :')
    if play_game.lower()[0]=='y':
        game_on = True
    else:
        game_on = False
    
    while game_on:
        if turn == 'Player 1':
            # Player1's turn.
            display_board(brd)
            position = player_choice(brd)
            place_marker(brd,player1_marker,position)
            if win_check(brd, player1_marker):
                display_board(brd)
                print('Player 1 has won the game!')
                game_on = False
            else:
                if full_board_check(brd):
                    display_board(brd)
                    print('The game is a draw!')
                    break
                else:
                    turn = 'Player 2'        
        else:
            # Player2's turn.
            display_board(brd)
            position = player_choice(brd)
            place_marker(brd, player2_marker, position)

            if win_check(brd, player2_marker):
                display_board(brd)
                print('Player 2 has won the game!')
                game_on = False
            else:
                if full_board_check(brd):
                    display_board(brd)
                    print('The game is a draw!')
                    break
                else:
                    turn = 'Player 1'

    if not replay():
        break
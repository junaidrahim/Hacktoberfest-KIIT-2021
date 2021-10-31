package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"

	"log"
	"net/http"

	tgbotapi "github.com/go-telegram-bot-api/telegram-bot-api"
)

func getCompliment() (string, error) {
	resp, err := http.Get("https://complimentr.com/api")
	if err != nil {
		return "", err
	}

	defer resp.Body.Close()

	body, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		return "", err
	}

	m := make(map[string]string)

	err = json.Unmarshal(body, &m)
	if err != nil {
		return "", err
	}

	return m["compliment"], nil
}

func main() {

	bot, err := tgbotapi.NewBotAPI("<inset_bot_api_here_from_telegram>")
	if err != nil {
		log.Panic(err)
	}

	bot.Debug = true

	log.Printf("Authorized on account %s", bot.Self.UserName)

	u := tgbotapi.NewUpdate(0)
	u.Timeout = 60

	updates, err := bot.GetUpdatesChan(u)

	for update := range updates {
		if update.Message == nil { // ignore any non-Message Updates
			continue
		}

		log.Printf("[%s] %s", update.Message.From.UserName, update.Message.Text)

		c, err := getCompliment()
		if err != nil {
			fmt.Println("Error while getting compliment")
			continue
		}

		msg := tgbotapi.NewMessage(update.Message.Chat.ID, c)
		msg.ReplyToMessageID = update.Message.MessageID

		bot.Send(msg)
	}
}

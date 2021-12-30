import random

rand = random.randint(1, 20)
attempts = 1
money = 500

print("Welcome to the Guessing Game! You have £500!")
confirmation = input("\nDo you want to play the Guessing Game? ")
if confirmation == "Yes":
  game = True
  while money >= 500 and game:
    if attempts <= 5:
      guess = int(input("Enter a number between 1 and 20: "))
      if guess == rand:
        money -= 500
        attempts += 1
        print("Congratulations! You guessed it in " + str(attempts - 1) + " attempts!")
        money += 1000
        print("You now have £" + str(money) + "\n")
        continueGame = input("Do you want to continue playing the game? ")
        if continueGame == "Yes":
          rand = random.randint(1, 20)
          attempts = 1
        else:
          print("See you later!")
          game = False
      elif guess > rand:
        attempts += 1
        print("Your guess was bigger than the number!")
      elif guess < rand:
        attempts += 1
        print("Your guess was smaller than the number!")
    else:
      money -= 500
      print("Sorry you used up all your attempts, the right number was " + str(rand))
      continueGame2 = input("Do you want to continue playing the game? ")
      if continueGame == "Yes":
        rand = random.randint(1, 20)
        attempts = 1
      else:
        print("See you later!")
        game = False

# Paste your code into this box
print('Please think of a number between 0 and 100!')
guess = 50
low = 0
high = 100
while True:
    print('Is your secret number ' + str(guess) + '?')
    print("Enter 'h' to indicate the guess is too high. Enter 'l' to indicate the guess is too low."),
    ina = raw_input("Enter 'c' to indicate I guessed correctly.")
    if ina == 'h':
        high = guess
    elif ina == 'l':
        low = guess
    elif ina == 'c':
        break
    else:
        print("Sorry, I did not understand your input.")
    guess = (high + low )/2
print("Game over. Your secret number was: " + str(guess))
        
    
    

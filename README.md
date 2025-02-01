# NUMBER GUESSING GAME
Description
The Number Guessing Game is a simple C program that prompts the user to enter a number repeatedly until they guess an odd number. The program provides feedback on the user's guess and ends when the correct condition is met.

Features
Prompts the user to enter a number.
Checks if the entered number is odd.
Congratulates the user if they guess an odd number.
Continues to prompt the user until they guess correctly.
How It Works
The program starts by displaying a welcome message.
It enters a do-while loop that continuously prompts the user to enter a number.
The program reads the input and displays the entered number.
It checks if the number is odd:
If the number is odd (i.e., n % 2 != 0), it prints a congratulatory message and breaks out of the loop.
If the number is even, the loop continues, prompting the user to guess again.
After the user guesses an odd number, the program thanks them for playing the game.

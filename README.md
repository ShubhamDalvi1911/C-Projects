# C-Projects

# Guess Game 1 to 100
  A simple C program where two players compete to guess a randomly generated number between 1 and 100. The player who guesses the number with fewer attempts wins the game!

# Features

  Random number generation for a fun and fair game.<br>
  Player vs. Player mode.<br>
  Feedback to help players guess the number (higher/lower hints).<br>
  Displays the winner or declares a tie based on the number of guesses.<br>

# How to Play

  Run the program.<br>
  Choose an option from the menu:<br>
    1. START: Begin a new game.<br>
    2. PLAY Again: Play another round.<br>
    3. EXIT: Exit the game.<br>
  Each player takes turns guessing the number between 1 and 100.<br>
  After each guess, the program provides feedback:<br>
    "Guess the LOWER number" if the guess is too high.<br>
    "Guess the HIGHER number" if the guess is too low.<br>
  The player who guesses the number in fewer attempts wins.<br>
  If both players take the same number of attempts, it's a tie!<br>

# Example
  ====GUESS GAME 1 TO 100====<br>
  1.START<br>
  2.PLAY Again<br>
  3.EXIT<br>
  Enter your choice(1,2,3): 1<br>
  
  =>PLAYER 1 it's your turn!<br>
  Guess the number: 50<br>
  Guess the LOWER number please:)<br>
  Guess the number: 25<br>
  Guess the HIGHER number please:)<br>
  Guess the number: 30<br>
  Congrats:) You guessed it!<br>
  
  Player 1 guessed the number in 3 guesses.<br>
  
  =>PLAYER 2 it's your turn!<br>
  Guess the number: 60<br>
  Guess the LOWER number please:)<br>
  Guess the number: 40<br>
  Congrats:) You guessed it!<br>
  
  Player 2 guessed the number in 2 guesses.<br>
  
  ***PLAYER 2 is the winner! Congrats:)***<br>


# Tic-Tac-Toe Game in C

# Overview
  A simple two-player Tic-Tac-Toe game implemented in C. Players take turns marking a 3x3 grid with X or O. The first to align three marks in a row, column, or diagonal wins.

# Features
  Two-player mode.<br>
  Console-based board display.<br>
  Validates inputs.<br>
  Detects wins or draws.<br>

# How to Play
  Enter a number (1-9) corresponding to a grid cell:<br>

     1 | 2 | 3
    -----------
     4 | 5 | 6
    -----------
     7 | 8 | 9

  The board updates after each move.<br>
  Win by aligning three marks or draw if all cells are filled.<br>

# Key Functions
  main(): Runs the game loop, processes moves, and checks game status.<br>
  printBoard(): Displays the game board.<br>
  checkWin(): Determines if there’s a winner or draw.<br>

# Notes
  Replace system("cls") with system("clear") for Linux systems.<br>
  Input must be a number between 1 and 9.<br>

Color Combinations Project

## Description

This program asks the user to input a filename. If the user enters "badcolorcombos.txt", the program will display a file showing color combinations to avoid, or an error message if the file does not exist. Afterwards, the program will prompt the user to enter one of four color choices, and output the corresponding color that is often confused with the choice that the user entered. Finally, the user is asked if they want to repeat the program again.

#v0.2 updates

The program asks the user to either take a colorblind test, enter a vector of colors, or quit. The colorblind test asks the user to identify the number from an image, and determines if it is correct or not. The second option asks the user to enter numbers until they enter Q, and deletes any instances of red and green in the vector if they are entered. Then, the program will show the list of colors the user entered, excluding red and green.

## Developer

Yifan Wang

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hello, what would you like to do?
Options:
(T)ake a colorblind test for red-green colorblindness
(F)ind out if your colors are colorblind compatible
(Q)uit
t
Open colortest.png, and type in the number you see.
74
Correct. You are not colorblind
Options:
(T)ake a colorblind test for red-green colorblindness
(F)ind out if your colors are colorblind compatible
(Q)uit
f
Enter colors in lowercase, or Q to quit
yellow
Enter colors in lowercase, or Q to quit
red
Enter colors in lowercase, or Q to quit
green
Enter colors in lowercase, or Q to quit
blue
Enter colors in lowercase, or Q to quit
Q
red is not a suitable color.
green is not a suitable color.

Suitable colors:
yellow
blue
Q



Options:
(T)ake a colorblind test for red-green colorblindness
(F)ind out if your colors are colorblind compatible
(Q)uit
Q
```

## C++ Guide

### Variables and Data Types

"choice" is used in the main function to determine what action the user wants the program to take. "num" is an integer that the user enters for the colorblind test, and "input" is used to store the colors that the user chooses to enter into the vector.

### Input and Output

The user is prompted 3 choices in the main function. the first choice will open up a colorblind test to determine if the user is colorblind, the second choice calls function "addColor", which prompts the user to enter colors, and deletes unsuitable colors accordingly.

### Decisions

An if/else statement is used for the file input, where the program displays the contents of "badcolorcombos.txt" if the user enters that filename, else the program will display a warning that the file does not exist. In addition, a switch statement is used for the variable "choice" to be tested against 4 different cases, each listing a corresponding color.

### Iteration

A for loop is used in the showColors function to iterate through the list of colors that the user entered(excluding unsuitable colors), and prints them out. A do-while loop is used in the showColors function to get the user to keep entering colors until they enter "Q", and a do-while loop is also used in the main function to repeat the program.

### File Input and Output


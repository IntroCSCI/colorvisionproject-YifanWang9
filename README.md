Color Combinations Project

## Description

This program asks the user to input a filename. If the user enters "badcolorcombos.txt", the program will display a file showing color combinations to avoid, or an error message if the file does not exist. Afterwards, the program will prompt the user to enter one of four color choices, and output the corresponding color that is often confused with the choice that the user entered. Finally, the user is asked if they want to repeat the program again.

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
Enter the file you want to open:
badcolorcombos.txt
Here are some color combinations you should avoid:
Green & Red
Green & Brown
Blue & Purple
Green & Blue
Light Green & Yellow
Blue & Grey
Green & Grey
Green & Black

Enter a color choice
P=Pink,B=Blue,G=Green,R=Red
P
Pink is often confused with gray.
Do you want to run this program again? y=yes, n=no
y
Enter the file you want to open:
badcolorcombos.txt
Here are some color combinations you should avoid:
Green & Red
Green & Brown
Blue & Purple
Green & Blue
Light Green & Yellow
Blue & Grey
Green & Grey
Green & Black

Enter a color choice
P=Pink,B=Blue,G=Green,R=Red
B
Blue is often confused with purple.
Do you want to run this program again? y=yes, n=no
n
```

## C++ Guide

### Variables and Data Types

The variables "again" and "choice" are both of char type. "again" is used to decide whether or not the user wants to repeat the entire program again, while "choice" is used in a switch statement to determine the corresponding color that is often confused with the color that the user enters. In addition, "filename" is used as a type string to get the name of the file that the user wants to open.

### Input and Output

The user is first asked to input a filename, which prompts the program to display the contents of a file listing bad color combinations(or an error message if the file doesn't exist). Then, the user is asked to enter the first letter of one out of four color choices, and the program displays the corresponding color. Finally, the user is asked if they want to repeat the program. Any input other than "n" will repeat the program. 

### Decisions

An if/else statement is used for the file input, where the program displays the contents of "badcolorcombos.txt" if the user enters that filename, else the program will display a warning that the file does not exist. In addition, a switch statement is used for the variable "choice" to be tested against 4 different cases, each listing a corresponding color.

### Iteration

The program is contained in a do-while loop, which allows input from the user to see if they want to repeat the program once it completes. The program will loop if the user enters anything except "n". A while statement is used after the program opens the file "badcolorcombos.txt", allowing the program to output each line of the file while it reads the file.

### File Input and Output

The user is asked to enter a filename, which displays bad color combinations one line at a time if the user enters "badcolorcombos.txt".
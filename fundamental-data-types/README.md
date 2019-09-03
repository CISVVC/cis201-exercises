1. Write a program that displays the dimensions of a letter-size (8.5 × 11 inches) sheet of paper in millimeters. There are 25.4 millimeters per inch. Use constants and comments in your program.
2. Write a program that computes and displays the circumference of a letter-size (8.5 × 11 inches) sheet of paper and the length of its diagonal.
3. Write a program that reads a number and displays the square, cube, and fourth power. Use the pow function only for the fourth power.
4. Write a program that prompts the user for two integers and then prints
    * The sum
    * The difference
    * The product
    * The average
5. Write a program that prompts the user for two integers and then prints
    * The distance (absolute value of the difference)
    * The maximum (the larger of the two)
    * The minimum (the smaller of the two)
<p>Hint: The max and min functions are defined in the <algorithm> header.</p>
6. Write a program that prompts the user for a measurement in meters and then converts it to miles, feet, and inches.
7. Write a program that prompts the user for a radius and then prints
•The area and circumference of a circle with that radius
•The volume and surface area of a sphere with that radius

Write a program that asks the user for the lengths of the sides of a rectangle and then prints
•The area and perimeter of the rectangle
•The length of the diagonal (use the Pythagorean theorem)

mprove the program discussed in How To 2.1 to allow input of quarters in addition to bills.

Write a program that asks the user to input
•The number of gallons of gas in the tank
•The fuel efficiency in miles per gallon
•The price of gas per gallon
Then print the cost per 100 miles and how far the car can go with the gas in the tank.

File names and extensions. Write a program that prompts the user for the drive letter (C), the path (\Windows\System), the file name (Readme), and the extension (txt). Then print the complete file name C:\Windows\System\Readme.txt. (If you use UNIX or a Macintosh, skip the drive name and use / instead of \ to separate directories.)

Write a program that reads a number between 1,000 and 999,999 from the user and prints it with a comma separating the thousands. Here is a sample dialog; the user input is in color:

Please enter an integer between 1000 and 999999: 23456
23,456

Write a program that reads a number between 1,000 and 999,999 from the user, where the user enters a comma in the input. Then print the number without a comma. Here is a sample dialog; the user input is in color:
Please enter an integer between 1,000 and 999,999: 23,456
23456
Hint: Read the input as a string. Measure the length of the string. Suppose it contains n characters. Then extract substrings consisting of the first n – 4 characters and the last three characters.

Printing a grid. Write a program that prints the following grid to play tic-tac-toe.
+--+--+--+
|  |  |  |
+--+--+--+
|  |  |  |
+--+--+--+
|  |  |  |
+--+--+--+
Of course, you could simply write seven statements of the form
cout << "+--+--+--+";
You should do it the smart way, though. Define string variables to hold two kinds of patterns: a comb-shaped pattern
+--+--+--+
|  |  |  |
and the bottom line. Print the comb three times and the bottom line once.

Write a program that reads an integer and breaks it into a sequence of individual digits. For example, the input 16384 is displayed as
1 6 3 8 4
You may assume that the input has no more than five digits and is not negative.

Write a program that reads two times in military format (0900, 1730) and prints the number of hours and minutes between the two times. Here is a sample run. User input is in color.
Please enter the first time: 0900
Please enter the second time: 1730
8 hours 30 minutes
Extra credit if you can deal with the case where the first time is later than the second:
Please enter the first time: 1730
Please enter the second time: 0900
15 hours 30 minutes

Writing large letters. A large letter H can be produced like this:
*   *
*   *
*****
*   *
*   *
It can be defined as a string constant like this:
const string LETTER_H =
  "*   *\n*   *\n*****\n*   *\n*   *\n";
(The \n character is explained in Special Topic 1.1.) Do the same for the letters E, L, and O. Then write the message
H
E
L
L
O
in large letters.

Write a program that transforms numbers 1, 2, 3, …, 12 into the corresponding month names January, February, March, …, December. Hint: Make a very long string "January February March ...", in which you add spaces such that each month name has the same length. Then use substr to extract the month you want.

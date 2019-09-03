/**
 * Write a program that displays the dimensions of a letter-size (8.5 × 11
 * inches) sheet of paper in millimeters. There are 25.4 millimeters per inch.
 * Use constants and comments in your program.
 *
 **/
#include<iostream>

const double MM_PER_INCH = 25.4;
int main()
{
   double width = 8.5;
   double height = 11.0;

   std::cout << "The dimensions for " << width << " x " << height << " in inches" << std::endl;
   std::cout << "Is " << (width * MM_PER_INCH) << "mm x " << (height * MM_PER_INCH) << "mm" << std::endl;

   return 0;
}

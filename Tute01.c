/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int sub1, sub2;// Declaration of variables
  float avg = 0;//Declaration of variables

  printf("Enter the marks of subject 1:");//prompt enter the sub 1 marks
  scanf("%d", &sub1);//read sub1 marks

  printf("Enter the marks of subject 2:");//prompt enter the sub 2 marks
  scanf("%d", &sub2);//read sub1 marks

  avg = ( sub1 + sub2)/2.0;

  printf("average mark is %.2f" ,avg);//display average

  return 0;
}//end the main function
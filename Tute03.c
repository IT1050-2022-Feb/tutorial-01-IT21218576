/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int i, range;//Declaration of variables

  int sum = 0;//Declaration of variables


  printf( "Enter the range:");//display range
  scanf( "%d" ,&range);//read range

  for (i = 0; i <= range; i++)//for loop
  {
    sum = sum + i;//calculation
  }
  printf("sum is%d", sum);//display the sum
  
  return 0;//end the main function
}


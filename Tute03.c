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
  
  int i,n,sum=0;
  
  printf("Enter number(1-n) : ");
  scanf("%d",&n);
  
  for(1 = 1; 1 <= n; i++)
  {
    sum = sum + i;
  }
  
  printf("sum of numbers : %d",sum);
  
  return 0;
}



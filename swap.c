#include<stdio.h>
//program to swap two numbers
int main()
{
  int num1,num2,temp;
  //Read the values of two numbers
  printf("Enter first number : ");
  scanf("%d",&num1);
  printf("Enter second number : ");
  scanf("%d",&num2);
  //lets swap using temporary variable
  temp=num1;
  num1=num2;
  num2=temp;
  //Display the values after swapping
  printf("Values after swapping");
  printf("\nFirst number : %d",num1);
  printf("\nSecond number : %d",num2);
  return 0;
 }

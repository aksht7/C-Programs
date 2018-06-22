               //This program allows you to reverse a number
#include <stdio.h> //for standard input output
int main()
{
  long num, rem, rev=0;
  printf("Enter a Number : ");
  scanf("%ld",&num); 
  //algorithm to reverse a number
  while(num)
  {
  	rem=num%10;
  	rev=rev*10+rem;
  	num/=10;   //it is equal to num=num/10
  }
  printf("Reversed number is : %ld",rev);
  return 0;     //Happy Coding :)
}

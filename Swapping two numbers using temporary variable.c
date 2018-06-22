/* This program shows swapping of two numbers using a temporary variable*/

#include<stdio.h>               /*for standard input/output*/

int main()                      /*Main Driving Program*/
{
  
    int num1,num2,temp;

    printf("Enter Two Numbers\n");

    scanf("%d %d",&num1,&num2);     /*Entered two numbers*/

    printf("The Entered numbers are %d and %d\n",num1,num2);

    temp=num1;                          /*Swapping Operation/Algorithm*/
                           
    num1=num2;                    //temp variable is used to store the value of num1. Therefore value of num2 is stored at the address of num1.
                                  //Then value of num1 is stored at address of num2 which is present in temp. This cause swapping.
    num2=temp;

    printf("Numbers after swapping are %d and %d\n",num1,num2);

    return 0;

}

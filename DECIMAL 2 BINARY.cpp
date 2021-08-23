//program to convert decimal to binary number using *recursion*

#include <stdio.h>
#include<conio.h>

int binary(int n)
{
    if (n==0)
        return 0;
    else
        return ((n%2)+10*binary(n/2));
}

int main()
{
   int decimal_number; 
   printf("Enter a decimal number: ");
   scanf("%d",&decimal_number);
   printf("The binary value of the decimal number %d : %d ",decimal_number,binary(decimal_number));
   return 0;
}

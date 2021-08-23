//program to find the sum of digits using *recursion*

#include <stdio.h>
#include<conio.h>
 
int Sum(int num);
 
int main()
{
    int n,sum;    
    printf("Enter the number: ");
    scanf("%d", &n);
    sum=Sum(n);
    printf("The Sum of digits = %d\n",sum);
    return 0;
}

int Sum(int n)
{
    if(n==0)
    {
	    return 0;
    }
    return((n%10)+Sum(n/10));
}


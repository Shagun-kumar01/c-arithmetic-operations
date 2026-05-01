#include<stdio.h>

int main()
{
    int a, b, result;
    printf(" Enter the first value");
    scanf(" %d",&a);

    printf("Enter the second the value");
    scanf("%d",&b);

    result = a | b;
    printf("Bitwise or result = %d",result);

    return 0;
}

/* how to get answer

first and second value is 6 and 5

now we get binary value of 6
now, 
6/2 remainder is 0 and quotient is 3

now, 
3/2 remainder is 1 and quotient is 1

now,
1/2 remainder is 1 and quotient is 1 

binary digit of first value is 110

and we apply same condition and we get the binary value of 5 is 101


1           1           0
1           0           1
now we get answer 

1           1           1

111 decimal value is 7 

" our final answer is 7"*/

#include<stdio.h>

int main(){
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    result = a & b;   // Bitwise AND

    printf("Bitwise AND result = %d", result);

    return 0;
}

/*
use of bitwise '&'

what the binary digit of 6
6/2 remainder = 0 and get quotient is 3

3/2 remainder = 1 and get quotient is 1

1/2 remainder = 1 because 1 is smaller than 2
" always remember that binary written in reverse form like below"
6 (decimal)= 110(binary)

what the binary digit of 5
5/2 remainder is 1
now get 2 is quotient

2/2 remainder is 0
but quotient is 1

now, 1/2 and remainder is 1

now we got binary digit of (5) is 101

how to get answer 
6 binary digit is 110
5 binary digit is 101

now apply condition, bit by bit.

bit by bit means like below
1&1= (1)
0&1=  (0)

same here, 
1               1               0
1               0               1
1               0               0

now we got answer is 100 

100 value is decimal form 4

final answer is 4
*/

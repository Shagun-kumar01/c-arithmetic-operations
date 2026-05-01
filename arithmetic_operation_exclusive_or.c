#include<stdio.h>

int main(){
    int a, b, result;

    printf(" enter first value");
    scanf("%d", &a);

    printf("enter second value");
    scanf("%d", &b);

    result = a ^ b;
    
    printf("bitwise xor result %d", result);
    
    return 0;
}

/*
how to get answer
first value is 4, 
Binary digit of 4 is 
4/2 remainder is 0 and quitient is 2

now,
2/2 remainder is 0 and quotient is 1

now,
1/2 remainder is 1

now we get binary digit of 4 is 100

same condition apply in 6 and get binary digit of 6 is 110

always remember this rule 

same bit 0 
different bit 1

binary value of 4 and 6
1       0       0
1       1       0

output is 

0       1       0

decimal of 010 is 2 

final answer is 2 */

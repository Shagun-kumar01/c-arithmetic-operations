#include<stdio.h>

int main()
{

printf(" Enter the first value : ");
scanf("%d", &a);

printf(" After the value of increment : ");
scanf(" %d \n", --a);      // --a means here first decreae then use

printf(" Final answer is : ");
scanf(" %d \n", a); 

return 0;
}

// output is --
// Enter the first value : 45
// After the value of increment : 44
// Final answer is : 44 

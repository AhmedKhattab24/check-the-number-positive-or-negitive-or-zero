#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
printf("Enter the number:");
scanf("%i",&num);
if (num>0)
{
    printf("the number is positive");
}
else if(num<0)
{
    printf("the number is negitive");
}
else
{
    printf("the number is zero");
}

    return 0;
}

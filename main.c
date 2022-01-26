#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a,sum=0;

    for(a=1; a<=100; a++)
    {
        sum=sum+(a*a);
    }
    printf("1^2+2^2+3^2+4^2+5^2+........+100^2 = %d",sum);


    getch();
    return 0;
}

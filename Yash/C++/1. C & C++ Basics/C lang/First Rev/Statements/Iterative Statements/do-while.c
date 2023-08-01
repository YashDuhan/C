/*To chec if any number between those number is divisble by 2 or not*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int m=1,n=20;
    
    do
    {
        if(m%2==0)
        {
            printf("\n %d is divisible by 2",m);
        }
        else
        {
            printf("\n %d is not divisble by 2",m);
        }
        m++;
    }
    while(m<=n);
    return 0;
}
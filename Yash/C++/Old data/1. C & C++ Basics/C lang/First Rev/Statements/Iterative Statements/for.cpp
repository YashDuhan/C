#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a positive number : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;++i)
    {
        sum=sum+1; /*sum+=1*/
    }
    printf("Sum = %d",sum);
    return 0;
}
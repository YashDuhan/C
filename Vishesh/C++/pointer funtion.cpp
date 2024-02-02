#include<stdio.h>
int add()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	return a+b;
}
int main()
{
	int c,(*p)();
	p=add;
	c=p();
	printf("the sum  of two numbers is %d",c);
	
}


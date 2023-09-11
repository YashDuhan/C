#include<stdio.h>
void display(); //function prototype

int main()
{
    printf("initializing display function\n");
    display();  // function call
    printf("display function finished its work\n");
    return 0;
}

// function definition
void display()
{
    printf("this is display\n");
}

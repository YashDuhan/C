#include<stdio.h>

// write a function to convert celcius temperature into farenheit
// (0 C * 9/5) + 32 = 32 F

float convert(float a);

int main()
{
    float c,f;
    printf("Enter temperature in celcius = ");
    scanf("%f",&c);
    convert(c);

    printf("The temperature in Fahrenheit is %.2f\n",convert(c));
    return 0;
}

float convert(float a)
{
    float f;
    f = ((a * 9 /5)+32);
    return f;
}


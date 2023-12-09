#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit;
    double celsius,kelvin;
    printf("Enter The Degree Of Temperature In Fahrenheit:\n ");
    scanf("%s",&fahrenheit);
    fahrenheit = (int) fahrenheit;
    celsius = (fahrenheit-32)* 5/9;
    kelvin  = celsius + 273.15;
    printf("Temperature In Celsius = %f C\n", celsius );
    printf("Temperature In Kelvin = %f K\n",kelvin);

    return 0;
}

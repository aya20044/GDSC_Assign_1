#include <stdio.h>
#include <stdlib.h>

int main()
{

   unsigned int hours,mins,seconds,input;
    printf("Enter The Number Of Duration: \n");
    scanf("%d",&input);
    mins = input/60;
    seconds = input % 60;
    hours = mins /60;
    mins = mins%60;
    printf("%d %d %d ",hours,mins,seconds);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Your Input Size: \n");
    scanf("%d",&size);
    char str [size];
    printf("Enter Your Input:");
    scanf("%s",&str);
    for(int i = size-1; i>=0;i--)
    {
        printf("%c",str[i]);
    }


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int var1,var2,temp;
    printf("Enter First Value: \n");
    scanf("%d",&var1);
    printf("Enter Second Value: \n");
    scanf("%d",&var2);
    printf("You Entered The Values: %d and %d\n",var1,var2);
    // swapping without using third variable
    var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    // print after swapping
    printf("After Swapping The First Value Is= %d\n",var1);
    printf("The Second Value Is= %d\n",var2);


    return 0;
}

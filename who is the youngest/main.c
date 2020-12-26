/* If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.
Author Majid Mujahid Hussain dated 23 December 2020.  */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Ram = 0, Shyam = 0 , Ajay = 0;
    printf("Hello world!\n");

    printf("\n Please enter the age of Ajay \n");
    scanf("%d", &Ajay);

    printf("\n Please enter the age of Shyam \n");
    scanf("%d", &Shyam);

    printf("\n Please enter the age of Ram \n");
    scanf("%d", &Ram);

    if(Ajay < Shyam && Ajay < Ram)
    {
        printf("Ajay is the youngest of all");
    }
    else if(Shyam < Ajay && Shyam < Ram)
    {
        printf("Shyam is the youngest of all.");
    }
    else
    {
        printf("Ram is youngest of all");
    }

    return 0;
}

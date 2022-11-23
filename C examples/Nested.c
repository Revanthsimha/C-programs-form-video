#include<stdio.h>

int main () {
    int number ;
    printf ("enter the number: ");
    scanf ("%d", &number);

    if (number >= 30) {
        printf("positive \n");
        if (number % 2 == 0) {
            printf ("even \n");
        } else {
            printf ("odd \n");
        }
        
        } else {
                printf ("Negative \n");
        }
        return 0;

}
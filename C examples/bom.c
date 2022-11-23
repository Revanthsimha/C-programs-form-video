#include <stdio.h>

int main () {
    int age ;
    printf("enter the age : ");
    scanf ("%d", &age);

    if (age >= 18 ) {
        printf ("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
   
    else if (age > 13 && age < 18) {
        printf("teeenager \n");
        
    }

    else {
        printf("child");
    }
    
    return 0;
}   


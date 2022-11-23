    #include <stdio.h>
    #include <math.h>

    int main () {
    int marks ;
    printf ("enter the number (0-100) :");
    scanf ("%d", &marks);

        if (marks <= 30) {
            printf ("C \n");
        }else if (marks >= 30 && marks < 70 ) {
            printf("b \n");
        } else if (marks >= 70 && marks < 90 ) {
            printf("A \n");
        }
        else if (marks >=100 && marks >=100) {
        printf("not valid number \n");
        }
         
        else
        {
            printf("A+ \n");
        }
        
       
     
       return 0;
}
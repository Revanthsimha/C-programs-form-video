#include<stdio.h>
    int main () {
        int n;
        printf("enter the number : ");
        scanf("%d", &n);

        int fact = 1 ;
        for (int i=1; i<=n; i++) {
            fact = fact * i;
        }
        printf("final factorial is %d", fact);

        return 0;
    }


// #include<stdio.h>
//     int main () {
//         int n;
//         printf("enter the number : ");
//         scanf("%d", &n);

       
//         for (int i=10; i>=1; i--) {
//             printf ("%d\n", n* i);
//         }
//         return 0;
//     }


// #include<stdio.h>
//     int main () {
//         int sum = 0;
//         for (int i=5; i<=50; i++) {
//             sum += i;
//         }
//     printf ("sum is % d", sum);
      
//     }
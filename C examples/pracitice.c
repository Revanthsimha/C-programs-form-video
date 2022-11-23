#include<stdio.h>
#include<math.h>
    int main () {
      char ch ;
      printf("enter character : ");
      scanf ("%C" , &ch);

        if (ch >= 'A' && ch <= 'Z') {
            printf ("upper case");
        } 
        else if ( ch >= 'a' && ch <= 'z') {
            printf ("lower case");
        }
        else
        {
            printf ("not emglish letter \n");
        }
        
        return 0;
    }
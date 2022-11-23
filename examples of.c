// #include <stdio.h>
// #include <math.h>
 
// int main() {
//     int x;
//     printf("enter a number : ");
//     scanf("%d", &x);
//     printf("%d", x % 2 == 0);
//     return 0;
// }
// #include <stdio.h>
 
// int main () {
//     int age ;
//     printf("enter the age : ");
//     scanf ("%d", &age);
 
//     if (age >= 18 ) {
//         printf ("adult \n");
//         printf("they can vote \n");
//         printf("they can drive \n");
//     }
   
//     else if (age > 13 && age < 18) {
//         printf("teeenager \n");
       
//     }
 
//     else {
//         printf("child");
//     }
   
//     return 0;
// }  
 
 
// // #include<stdio.h>
// //     int main () {
// //         for (int i = 1; i<=5; i++) {
// //             if (i == 4) {
// //              break;
// //             }
// //            printf("%d \n" , i);
// //         }
             
// //            printf("end");
 
// //     return 0;
// //     }
 
 
 
// // #include<stdio.h>
// //     int main () {
// //         int n;
// //        do {
// //         printf("enter the number : ");
// //         scanf("%d" , &n);
// //         printf("%d \n", n);
 
// //         if (n % 2 !=0) {
// //             break;
// //         }
 
// //        }while (1);
// //        printf("thank you");
       
// //        return 0;
// //        }
 
 
 
 
//     //    #include<stdio.h>
//     //     int main () {
//     //     int n;
//     //    do {
//     //     printf("enter the number : ");
//     //     scanf("%d" , &n);
//     //     printf("%d \n", n);
 
//     //     if (n % 7 ==0) {
//     //         break;
//     //     }
 
//     //    }while (1);
//     //    printf("thank you");
       
//     //    return 0;
//     //    }
 
 
 
// #include<stdio.h>
//     int main () {
//         for (int i = 0; i<=50; i++) {
//             if (i % 2 !=0 ) {
//                 printf("%d\n", i);
//             }
//         }
 
//      return 0;  
//     }
 
 
// //write a function to convert celsius to fahrenheit.
 
// #include<stdio.h>
 
// float converttemp(float celius);
 
//     int main(){
//     float far = converttemp(37);
//     printf("far : %f", far);
//         return 0;
//     }
 
//     float converttemp(float celsius){
//         float far = celsius * (9.0/5.0) + 32;
//         return far;
//     }
// #include <stdio.h>
// #include <math.h>
 
// int main () {
// int isMonday = 0 ;
// int isRanning = 1 ;
// printf("%d /n" , isMonday && isRanning );
// return 0;
// }
 
 
// #include<stdio.h>
//     int main () {
//         int n;
//         printf("enter the number : ");
//         scanf("%d", &n);
 
//         int fact = 1 ;
//         for (int i=1; i<=n; i++) {
//             fact = fact * i;
//         }
//         printf("final factorial is %d", fact);
 
//         return 0;
//     }
 
 
// // #include<stdio.h>
// //     int main () {
// //         int n;
// //         printf("enter the number : ");
// //         scanf("%d", &n);
 
       
// //         for (int i=10; i>=1; i--) {
// //             printf ("%d\n", n* i);
// //         }
// //         return 0;
// //     }
 
 
// // #include<stdio.h>
// //     int main () {
// //         int sum = 0;
// //         for (int i=5; i<=50; i++) {
// //             sum += i;
// //         }
// //     printf ("sum is % d", sum);
     
// //     }
// #include<stdio.h>
 
// int fact(int n);
 
// int main(){
//     printf("factorial is : %d", fact(5));
//     return 0;
// }
 
// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
 
// }    
// // #include <stdio.h>
   
// //     int main () {
// //         for (int i=1; i<=5; i++) {
// //             printf("GODUGU REVANTH SIMHA \n");
// //         }
// //         return 0;
// // }
 
// //     #include<stdio.h>
 
// //     int main () {
 
// //        for (float i = 1.0; i<=5.0; i++) {
// //         printf("%f \n" , i);
// //        }
 
// //     for (char ch='a'; ch<='z'; ch++){
// //         printf("%c \n" , ch);
// //     }
   
// //     return 0;
// // }  
 
// // // }
// // #include <stdio.h>
// //     int main () {
// //         int i=1;
// //         while (i<=5) {
// //             printf("%d \n", i);
// //             i++;
 
// //         }
// //         return 0;
// //     }
 
// // #include<stdio.h>
// //     voidmain () {
// //     int n,i=0;
// //     printf("enter number : ") ;
// //     scanf("%d", &n);
 
   
// //     while (i <= n)
// //     {
// //         printf("%d \n", i );
// //         i++;
// //     }
// //     return 0;
// // }
// // // //
// // // <
// // // #include<stdio.h>
// // //     int main () {
// // //         int n ;
// // //         printf ("enter the number : ");
// // //         scanf ("%d", &n);
         
// // //         int sum = 0 ;
// // //         for (int j=n ; j>=1; j--) {
// // //             sum = sum + j ;
// // //             printf("%d \n" , j);
// // //         }
// // //         printf ("sum is %d \n", sum);
 
// // //         // for (int i = n; i >= 1; i--) {
// // //         //     printf("%d \n" , i);
// // //         // }
 
       
// //         return 0;
// //     }
 
// #include<stdio.h>
 
//     int main() {
//     int n ;
//     printf("enter the number: ");
//     scanf("%d", &n);
 
//     for (int i = 1; i <= 10; i++) {
   
//         printf("%d \n" , n*i);
//     }
   
//     return 0;
//     }
   
// // //write a function to calculate parcentage of a student from marks in sciemce,math & sanskrit.
 
// // #include<stdio.h>
 
// // int calcparcentage (int science, int math, int sanskrit);
 
// //     int main(){
// //   int sc = 98;
// //   int math = 95;
// //   int sanskrit = 99;
 
// //   printf("parcentage is : %d", calcparcentage(sc,math,sanskrit));
// //   return 0;
// //     }
 
// // int calcparcentage (int science, int math, int sanskrit){
// //     return ((science + math + sanskrit) / 3);
// // }
 
// //write a function to print n terms of the fibonacc sequence.
 
// #include<stdio.h>
 
// int fid (int n);
 
//     int main(){
//     printf("%d",fib(6));
//     return 0;
// }
// int fib (int n) {
//     // if (n == 0 || n == 1){
//         if (n == 0){
//             return 0;
//         }
//         if (n == 1){
//             return 1;
//         }
   
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     // printf ("fib of %d is : %d \n", n , fibN);
//     return fibN;
// }
 
// #include<stdio.h>
// void printhello(); //declaration/prototype
 
//     int main() {
//     printhello();
//     printhello();
//     printhello(); //function call
//         return 0;
//     }
//     void printhello() {
//         printf("hello!\n");
//         printf("REVANTH SIMHA\n");   //function definition
//     }
// //write 2 functions-one to print "hello" & second to prinr "good bye".
 
// // #include<stdio.h>
// // void printHello();
// // void printGoodbye();
 
// //     int main(){
// //         printHello();
// //         printGoodbye();
// //         printHello();
// //          return 0;
// //     }
 
// //     void printHello() {
// //         printf("Hello\n");
// //     }
 
// //     void printGoodbye() {
// //         printf("Goodbye:\n");
// //     }
 
 
// //write a function that prints Namaste if user is indian & Bonjour if the user is French.
 
//  #include<stdio.h>
//  void namaste();
//  void bonjour();
 
//     int main () {
//         printf("enter f for french & i for india :");
//         char ch;
//         scanf ("%c",&ch);
       
//         namaste();
//         // if(ch == 'i') {
//         // namaste ();
//         // } else {
//         //     bonjour();
//         // }
//         // return 0;
//     }
 
//     void namaste (){
//         printf("Namaste\n");
//         bonjour();
//     }
 
//     void bonjour() {
//         printf("bonjour\n");
//     }
// # include <stdio.h>
// # include<math.h>
 
// int main() {
     
//    int a = 5 * 2 - 2 * 3;
//    printf("%d \n", a);
 
//     int b = 5 * 2 / 2 * 3;
//    printf("%d \n", b);
 
//     int c = 5 * 2 / 2 * 3;
//    printf("%d \n", c);
 
//     int d = 5 + 2 / 2 * 3;
//    printf("%d \n", d);
// }
 
 
   
//     #include <stdio.h>
//     #include <math.h>
 
//     int main () {
//     int marks ;
//     printf ("enter the number (0-100) :");
//     scanf ("%d", &marks);
 
//         if (marks <= 30) {
//             printf ("C \n");
//         }else if (marks >= 30 && marks < 70 ) {
//             printf("b \n");
//         } else if (marks >= 70 && marks < 90 ) {
//             printf("A \n");
//         }
//         else if (marks >=100 && marks >=100) {
//         printf("not valid number \n");
//         }
         
//         else
//         {
//             printf("A+ \n");
//         }
       
       
     
//        return 0;
// }
//     #include<stdio.h>
 
//     int sum(int n);
 
//     int main(){
//         printf("sum is : %d", sum(5));
//         return 0;
 
//     }
//     //recursive function
//     int sum(int n) {
//         if (n == 0) {
//             return 1;
//         }
//         int sumNm1 = sum(n-1); //sim of 1 to n
//         int sumN = sumNm1 + n;
//         return sumN;
//     }
// //out put is not comming it showing 1 exidevalue in code so i will solve the later
// #include<stdio.h>
 
// int main () {
//     int number ;
//     printf ("enter the number: ");
//     scanf ("%d", &number);
 
//     if (number >= 30) {
//         printf("positive \n");
//         if (number % 2 == 0) {
//             printf ("even \n");
//         } else {
//             printf ("odd \n");
//         }
       
//         } else {
//                 printf ("Negative \n");
//         }
//         return 0;
 
// }
// //write function to calculate area of a square,a circle & a rectangle.
 
 
// #include<stdio.h>
// #include<math.h>
 
//     float squarearea(float side);
//     float circle(float rad);
//     float rectanglearea(float a, float b);
 
//     int main (){
//         float a = 5.0;
//         float b = 10.0;
 
//     printf("area is : %f", rectanglearea (a, b));
 
//         return 0;
 
//     }
//     float squarearea (float side){
//         return side * side;
//     }
 
//     float ciclearea (float rad){
//         return 3.14 * rad * rad;
//     }
//     float rectanglearea(float a, float b){
//         return a * b;
//     }
// #include<stdio.h>
// #include<math.h>
//     int main () {
//       char ch ;
//       printf("enter character : ");
//       scanf ("%C" , &ch);
 
//         if (ch >= 'A' && ch <= 'Z') {
//             printf ("upper case");
//         }
//         else if ( ch >= 'a' && ch <= 'z') {
//             printf ("lower case");
//         }
//         else
//         {
//             printf ("not emglish letter \n");
//         }
       
//         return 0;
//     }
// //use library function to calculate the square of a number given by user.
// #include<stdio.h>
// #include<math.h>
 
// void calculateprice(float value);
 
//     int main() {
//     // float value = 100.0;
//     // calculateprice(value);
//     // printf("value is : %f",value);
   
//     int n = 4;
//     printf("%f", pow(n, 2));
 
//     return 0;
 
//     }
 
//     void calculateprice(float value) {
//         value = value + (0.18 * value);
//         printf("final price is : %f \n",value);
//     }
// //Recursion example QS 32 print "Hello World" 5 times.
// // #include<stdio.h>
 
// // void printHW(int count);
 
// //     int main(){
// //         printHW (5);
// //         return 0;
 
// //     }
 
// //     //recursive function
// //     void printHW(int count) {
// //         if(count == 0) {
// //             return ;
// //         }
 
// //         printf("hello world\n");
// //         printHW(count-1);
// //     }
 
 
 
 
// // sum of first n natural numbers.
 
// #include<stdio.h>
 
// int sum(int n);
 
//     int main(){
//         printf("sum is : %d",sum(5));
//         return 0;
 
//     }
//     //recursive function
//     int sum(int n) {
//         if (n == 1) {
//             return 1;
//         }
//     int sumNm1 = sum(n-1); //sim of 1 to n
//     int sumN = sumNm1 + n;
//     return sumN;
//     }
 
// #include<stdio.h>
 
// int sum(int a, int b);
//     int main () {
//         int a, b;
//         printf("enter the first number :");
//         scanf("%d",&a);
//         printf("enter the first number :");
//         scanf("%d",&b);
     
//         int s = sum (a, b);
//         printf("sum is %d: ",s);
//         return 0;
//     }
 
//     int sum(int a, int b) {
//         return a + b;
//     }
// // #include<stdio.h>
 
// // int sum(int a, int b);
// // void printtable(int n);
// //     int main () {
// //         int n;
// //         printf("enter the first number :");
// //         scanf("%d",&n);
       
// //         printtable(n); //argument/actual parmeter
 
// //         return 0;
// //     }
 
// //     int sum(int a, int b) {
// //         return a + b;
// //     }
// //     void printtable(int n){ //parameter/formal parmenter
// //         for (int i=1; i<=10; i++){
// //             printf("%d\n",i*n);
// //         }
// //     }
 
// #include<stdio.h>
 
// void calculateprice(float value);
 
//     int main() {
//     float value = 100.0;
//     calculateprice(value);
//     printf("value is : %f",value);
   
//     return 0;
 
//     }
 
//     void calculateprice(float value) {
//         value = value + (0.18 * value);
//         printf("final price is : %f \n",value);
//     }
// #include <stdio.h>
 
// int main () {
//     char day;
//     printf ("enter the day (1-7) : ");
//     scanf ("%s",&day );
 
//     switch (day) {
//         case 'm' : printf ("monday");
//                  break;
 
//          case 't' : printf ("tuesday");
//                  break;
//          case 'w' : printf ("wednesday");
//                  //break;
 
//          case 'T' : printf ("thursday");
//                  break;
       
//          case 'f' : printf ("friday");
//                  break;
       
//          case 's' : printf ("saturday");
//                  break;
 
//          case 'S' : printf ("sunday");
//                  break;
 
//         default : printf ("not a valid day \n") ;  
//     }
 
// }
// #include <stdio.h>
 
// int main () {
//     int age ;
//     printf("enter the age : ");
//     scanf ("%d", &age);
 
//     age >= 18 ? printf("adult \n") : printf ("not adult \n") ;
   
//     return 0;
// }  
 
 
// #include<stdio.h>
// #include<conio.h>
//     int main()
//     {
//         int s_id;
//         char s_name[20];
//         float s_percentage;
//         printf("Enter student ID:");
//         scanf ("%d",&s_id);
//         printf("Enter student Name:");
//         scanf("%s",&s_name);
//         printf("Enter student percentage:");
//         scanf("%f",&s_percentage);
//         printf("\n The student Detailes are :");
//         printf("\nStudent id:%d\nStudent Name:%s\nStudent percentage:%f",s_id,s_name,s_percentage);
//         return 0;
//     }
   

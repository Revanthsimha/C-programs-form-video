// i have lost the data of all the c and c++ program when push the data in to github
//this another one  

// #include<iostream>
// using namespace std;

// string getDayofWeek(int dayNum){
//     string dayName;

//     switch (dayNum){
//     case 0:
//         dayName = "Sunday";
//         break;

//     case 1:
//         dayName = "Monday";
//         break;
//     case 2:
//         dayName = "Tuesday";
//         break;
//     case 3:
//         dayName = "Wednesday";
//         break;
//     case 4:
//         dayName = "Thursday";
//         break;
//     case 5:
//         dayName = "Friday";
//         break;
//     case 6:
//         dayName = "Saturady";
//         break;
//     default:
//         dayName = "Invalid Day Number";
     
//         break;
//     }

//     return dayName;
// }

//     int main (){

//         cout << getDayofWeek(10);

//         return 0;
//     }

//building a better calculator

// #include<iostream>
// using namespace std;

//     int main(){
//         int num1,num2;
//         char op;

//         cout <<"Enter first number: ";
//         cin >> num1;
//         cout <<"Enter the operator: ";
//         cin >> op;
//         cout <<"Enter second number: ";
//         cin >> num2;
//         int result ;
//         if (op == '+'){
//             result = num1 + num2;
//         } else if (op == '-'){
//             result = num1 - num2;
//         }
//         else if (op == '/'){
//             result = num1 / num2;
//         }
//         else if (op == '*'){
//             result = num1 * num2;
//         } else {
//             cout << "Invalid Operator";
//         }
        
//         cout << result;
//     }

//while loop

// #include<iostream>
// using namespace std;

//     int main(){

//         int index = 1;
//         while(index <= 5){
//             cout << index << endl;
//             index++;
//         }
//     return 0;
//     }
// #include<iostream>
// using namespace std;

//     int main(){

//         int index = 1;
//         do{
//             cout <<index << endl;
//             index++;
//         }
//         while(index <= 5);
           
//     return 0;
//     }

//bulding gussing game

// #include<iostream>
// using namespace std;

//     int main(){
    
//         int secretNum = 7;
//         int guss;

//         while(secretNum !=guss){
//             cout << "Emter guss ";
//             cin >> guss;
//         }

//         cout << "You Win!";

//     return 0;
//     }


// #include<iostream>
// using namespace std;

//     int main(){
    
//         int secretNum = 7;
//         int guess;
//         int guessCount = 0; 
//         int guessLimit = 3;
//         bool outofGuesses = false;

//         while(secretNum != guess && !outofGuesses){
//             if (guessCount < guessLimit){
//             cout << "Enter guess: ";
//             cin >> guess;
//             guessCount++;
//          } else {
//             outofGuesses = true;
//          }
//         }
//         if(outofGuesses){
//             cout << "you Lose";
//         }else {
//             cout << "You Win!";
//         }
         
        
//     return 0;
//     }

//for loop
// #include<iostream>
// using namespace std;

//     int main(){
    
//     int index = 1;
//     while (index <=5) {
//         cout << index << endl;
//         index++; 
//     }

//     for(int i = 1; index <= 5; i++){
//         cout << index << endl;
//     }
        
//     return 0;
//     }

// #include<iostream>
// using namespace std;

//     int main(){
    
    
//     for(int i = 1; i <= 5; i++){
//         cout << i << endl;
//     }
        
//     return 0;
//     }

// #include<iostream>
// using namespace std;

//     int main(){
//         int nums[] ={1,2,5,7,3};
//         for (int i = 0; i < 5; i++){
//             cout << nums[i] << endl;
//         }
//         return 0;
//     }
//Exponent Function
// #include<iostream>
// using namespace std;


// int power(int baseNum, int powNum){
//     int result = 1;
//     for(int i = 0; i< powNum;i++){
//         result = result * baseNum;
//     }

//     return result;
// }
//     int main(){
//         cout << power(4,2);
//         return 0;
//     }

//2d arrays & Nested loops
// #include<iostream>
// using namespace std;


// int power(int baseNum, int powNum){
//     int result = 1;
//     for(int i = 0; i< powNum;i++){
//         result = result * baseNum;
//     }

//     return result;
// }
//     int main(){
//        int numberGrid[3][2] = {
//                              {1,2},
//                              {3,4},
//                              {5,6}
                           
                            
//                          };
//     cout << numberGrid[0][1];
//         return 0;
//     }

// #include<iostream>
// using namespace std;


// int power(int baseNum, int powNum){
//     int result = 1;
//     for(int i = 0; i< powNum;i++){
//         result = result * baseNum;
//     }

//     return result;
// }
//     int main(){
//        int numberGrid[3][2] = {
//                              {1,2},
//                              {3,4},
//                              {5,6}
                           
                            
//                          };
//     for(int i = 0; i< 3; i++){
//         for(int j=0; j<2; j++){
//             cout << numberGrid[i][j];
//         }
//     }
//     cout << endl;
//         return 0;
//     }

///pointer
// #include<iostream>
// using namespace std;


//     int main(){
//     int age = 19;
//     double gpa = 2.7;
//     string name = "Mike";

//     cout << "Age:" << &age << endl;
//     cout << "Gpa:" << &gpa << endl;
//     cout << "Name:" << &name << endl;
//     //This output of program is a pointer 

//     return 0;
//     }

// #include<iostream>
// using namespace std;


//     int main(){
    
//     int age = 19;
//     int *pAge = &age;
//     double gpa = 2.7;
//     double *pGpa = &gpa;
//     string name = "Mike";
//     string *pName = &name;

//     cout << *pAge;//I put the Asterix hear,we're derefrerencing the ponter.so we jest get 19.
//     cout << *&gpa;//or the we can use cout << &*&gpa
//     return 0;
//     }

//clesses & objects (vey im)

// #include<iostream>
// using namespace std;

// class Book {
//     public:
//         string title;
//         string author;
//         int pages;
// };
//     int main(){
    
//     Book book1;
//     book1.title = "Harry potter";
//     book1.author = "Jk Rowling";
//     book1.pages = 500;

//     Book book2;
//     book2.title = "Lord og the Rings";
//     book2.author = "Tolkein";
//     book2.pages = 800;

//     cout << book2.author;
    
    
//     return 0;
//     }

//Constructor Functions
// #include<iostream>
// using namespace std;

// class Book {
//     public:
//         string title;
//         string author;
//         int pages;
//         Book(string name){
//             cout << name << endl;
//         }
// };
//     int main(){
    
//     Book book1("Harry potter");
//     book1.title = "Harry potter";
//     book1.author = "Jk Rowling";
//     book1.pages = 500;

//     Book book2("Lord of the Rings"); 
//     book2.title = "Lord of the Rings";
//     book2.author = "Tolkein";
//     book2.pages = 800;

//     cout << book2.author;
    
//     return 0;
    
//     }

// #include<iostream>
// using namespace std;

// class Book {
//     public:
//         string title;
//         string author;
//         int pages;

//         Book(string aTitle, string aAuthor,int aPages){
//             title = aTitle;
//             author = aAuthor;
//             pages = aPages;
//         }
// };
//     int main(){
    
//     Book book1("Harry potter","Jk Rowling",500);
//     Book book2("Lord of the Rings","Tolkein",800); 
    
//     cout << book2.title;
    
//     return 0;
    
//     }

//Object functions

// #include<iostream>
// using namespace std;

// class student {
//     public:
//         string name;
//         string major;
//         double gpa;
//         student(string aName,string aMajor,double aGpa){
//             name = aName;
//             major = aMajor;
//             gpa = aGpa;
//         }

//         bool hasHonors() {
//             if(gpa >= 2.0) {
//                 return true;
//             }
//             return false;
//         } 
// };
//     int main(){

//         student student1("Ravi","Business",2.4);
//         student student2("Pam","Art",3.6);

//         cout << student2.hasHonors();

//         return 0;
//     }

//getters & setters

// #include<iostream>
// using namespace std;

// class movie {
//     private:
//         string rating;
//     public:
//         string title;
//         string director;
         
//         movie(string aTitle,string aDirector,string aRating){
//             title = aTitle;
//             director = aDirector;
//             rating = aRating;
//             setRating(aRating);
//         }

//         void setRating(string aRating){
//             if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
//                 rating = aRating;
//             } else {
//                 rating = "NR";
//             }
//         }
//         string getRating(){
//             return rating;
//         }

// };
//     int main (){

//         movie avengers ("The Avengers","Joss whedon","PG-13");
//         //avengers.setRating("dog");
        
//         cout << avengers.getRating();
//         return 0;
//     }

//Inheritance

#include<iostream>
using namespace std;

class chef { //we call it superclass
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makesalad(){
            cout << "The chef makes salad" << endl;
        }
        void makespecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class Italianchef : public chef{ //we will call it subclass
    public:
    void makepasta (){
        cout << "The chef makes pasta" << endl;
    }
    void makespecialDish(){
        cout << "The chef makes chicken parm" << endl;
    }
};

    int main(){

        chef chef;
        chef.makespecialDish();
        
        Italianchef italianchef;
        italianchef.makespecialDish();

        return 0;
    }
// what is constructor

// // inialise a memory of your object


// it is special type of function 
// constructor is use to allocated a memory of object
// constructor doent have any return type



//  there are three type of constructor
//  1. default
//         the class having consturctor which is below a public specifie


//  2. parametrized



//  3. copy constructor  
 
//                         1.shallow copy
//                         2.deep copy






//  1. default
//         the class having consturctor which is below a public specifie

// Examle of/)

// #include<iostream>
// using namespace std;
// class defaulti {
//     public: defaulti(){
//         cout<<"hellow \n";
//     }
//     void sum (){
//         cout<<"not show \n";
//     }
// };
// int main(){
//     defaulti i;
// }


//  2. parametrized  
// when you pass a parameter in the constructor parametrized 

// // example
// #include<iostream>
// using namespace std;
// class para{
//     public:para(int a,int b ,int c ){
//         cout<<"a b and c sum "<<a+b+c<<"\n";
//     }
// };
// int main(){
//     para on(1,2,3);
// }




// // in constructor have a overloading   
// #include<iostream>
// using namespace std;
// class para{
//     public:para(int a,int b ,int c ){
//         cout<<"a b and c sum "<<a+b+c<<"\n";
//     }
//     para(int a){
//         cout<<"print a value of a:"<<a<<"\n";
//     }
// };
// int main(){
//     para on(1,2,3);
//     para k(8);
// }




// THIS POINTER
// this pointer is when you function argement is same name and your class data member is same name that time we use it this pointer

// #include<iostream>
// using namespace std;
// class student {
//     int roll;
//     public:student(int roll){
//         this->roll=roll;
//     }
//     void show(){
//         cout<<"rollnumber:"<<roll;
//     }
// };
// int main(){
//     student f(101);
//     f.show();
// }


// Copy constructor(when you assing it first object in second object is called ) 

// shadow copy
// you can copy one object  in second object this is called a shadow copy 
                        // but when you can change it second object does not change it in first object
// #include<iostream>
// using namespace std;
// class student {
//     public: int a;
//     public :student(int a){
//         this->a=a;
//     }
//     void show(){
//         cout<<"a"<<a<<"\n";
//     }
// };
// int main(){
//     student s1(101);
//     s1.show();
//     student s2(s1);
//     s2.show();
//     s2.a=100;
//     student s3(s1);
//     s3.show();

// }



// 

// #include<iostream>
// #include<string.h>
// using namespace std;
// class student {
//     char *c;
//     public:
//     student(char *s){
//         c=new char[20];
//         strcpy(c,s);
//     }
//     void show(){
//         cout<< "\n name"<<c<<"\n";
//     }
//     void surname(char *h){
//         strcat(c,h);
//     }
// };
// int main(){
//     student ju("bipin");
//     ju.show();
//     student hn(ju);
//     hn.show();
//     ju.surname("singh");
//     ju.show();
//     hn.show();

// }



// Deep shadow
// When you create a new memory in that deep copy




#include<iostream>
#include<string.h>
using namespace std;
class student {
    char *c;
    public:
    student(char *s){
        c=new char[20];
        strcpy(c,s);
    }
    student (student &on){
        c=new char [20];
        strcpy(c,on.c);
    }
    void show(){
        cout<< "\n name"<<c<<"\n";
    }
    void surname(char *h){
        strcat(c,h);
    }
};
int main(){
    student ju("bipin");
    ju.show();
    student hn(ju);
    hn.surname("singh");
    ju.show();
    hn.show();

}
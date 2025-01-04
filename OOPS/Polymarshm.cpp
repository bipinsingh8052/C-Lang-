// Polymorehism
// more then one form is called polymorehism
// many form

// there are two types 
// 1.compile time 
// 2.Run time 

// Compile __TIME__
// 1.Function Overloading
// 2.operator Overloading
// 3.Normal Object
// 3.Multiple Function



// Run time 
// 1.Function Overiding
// 2.Virtual function 
// Pure virtual function
// 3.super class
// 4.Abstract class
// 5.pointer Object 
// normal object



// what is super class
// Where you can used in virutal Function is called a Super class

// what is Pointer Object
// Where you can create it * object is called pointer object 



// Exmple of super class and pointer object
#include<iostream>
using namespace std;
class RBI{
    public :virtual void loan(){
        cout<<"Rbi loan";
    }

    virtual void show(){
        cout<<"Rbi show";
    }
};
class SBI :public RBI{
    public :void loan(){
        cout<<"SBI loan:";
    }
    void show(){
        cout<<"SBI show";
    }
};
class AXIS :public SBI{
    public : void loan(){
        cout<<"AXIS loan";
    }
    void show(){

        cout<<"AXIS Show";
    }
};
int main(){
    RBI *r;
    SBI s;
    AXIS a;
    r=&a;
    r->show();
    r->loan();
    r=&s;
    r->loan();
    r->show();

}
// pointer
// 
#include<iostream>
using namespace std;
int main()
{

    // reference data type
    int a;
    cout<<"Enter the a";
    cin>>a;
    int b=a;
    int &c=a;
    c=90;
    cout<<"a:"<<a<<"\t"<<"b:"<<b<<"\t"<<"c:"<<c<<"\n";


    // pointer

    // it refer the memory address of any variable 


    // you can not asign a value in pointer
    // pointer the void of data type 
    // when you see the any variable address then you also create a same data type in pointer data type
    int *u;
    // its show the addres of u
    cout<<u<<"\n";
    int *k=&c;
    // it is show of the address of  c
    cout<<"Value of k:"<<k<<"\n";

    cout<<*k<<"\n";
    // it is print the value of that pointer assign variable value
    // we can also say it dereference



// pointer take it by default taken by 8 Byte store memory 
// type of pointer
// 7 types are
// 1.wild pointer  ex: int *p;
//                   it have a drowback we can't use it 
// 2. Null pointer      ex: int *p=NULL;
                        //  when you assign the any location of variable 
                        //  p=&a;
                        //  its show the address of a variable;


    // 3.Char pointer      ex: char *k="carrom";
    //                    cout<<*k;  output:c
    //                    cout<<*(k+1)  output:a




    return 0;

}
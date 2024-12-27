// What is Opertor Overloading
// when you define nature opertor in non-primitive data type(user define data type )  when you use it is called opertor Overloading 

// there are two type of Opertor Overloading

// 1.Unary opertor Overloading (where you can apply it ++,-- like this )
// 2. binary operator Overloading


// // Example of Unary operator Overloading

// #include<iostream>
// using namespace std;
// class top
// {
//     int a=10;
//     public:operator++(){
//         a++;
//         cout<<"a:"<<a<<"\n";
//     };
//     public:operator--(){
//         a--;
//         cout<<"a:"<<a<<"\n";
//     }

// };
// int main(){
//     top p;
//     ++p;
//     --p;
// }



// BInary Opreator Overloading

// W.a.p to find the How much Complex sum
#include<iostream>
using namespace std;
class Top{
    int a=1000;
    public: Top(int b ){
        a=b;
    }
    operator-(Top & obj){
        a=obj.a-a;
        cout<<"a:"<<a<<"\n";
    }
};
int main(){
    Top a1(1200);
    Top a2(2000);
    a1-(a2);

}
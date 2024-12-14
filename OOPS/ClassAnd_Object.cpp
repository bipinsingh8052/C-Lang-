// #include<iostream>
// using namespace std;
// class bipin{
// char h;
// int k;
// };
// int main(){
//     bipin g;
//     cout<<sizeof(g);

    //  . is called data opertor access the class data member 

    // when you access the data member of class when you declare a function in the class  




    // Access Specifeier  (when you declare a data member in the class by the help of access Specifeier)
    // 1.public
    // 2.private  (by default private  when you )
    // 3.Projected


    // by default it taken by 1 byte
    // When you declear a (int a,int b int c)many data type add it and give all size 12 byte.

// }



#include<iostream>
using namespace std;
class bipin{
char h;
int k;
int a =10;
public:void show(){
    cout<<a;
}

};
int main(){
    bipin g;
    cout<<sizeof(g);
    g.show();
}
#include<iostream>
using namespace std;
class top
{
    int a=10;
    public:operator++(){
        a++;
        cout<<"a:"<<a<<"\n";
    };
    public:operator--(){
        a--;
        cout<<"a:"<<a<<"\n";
    }

};
    // Operating_overloading(/* args */);
    // ~Operating_overloading();};

// Operating_overloading::Operating_overloading(/* args */)
// {
// }

// Operating_overloading::~Operating_overloading()
// {
// }

int main(){
    top p;
    ++p;
    --p;
}
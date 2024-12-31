#include<iostream>
using namespace std;

class RBI{
int t;
public:RBI(){
    cout<<"\nRBI memory\n";
}
~RBI(){
    cout<<"\nRBI memory realeased";
}
public:void show(){
    cout<<"\nRBI class\n";
}

};
class SBI:public RBI{
int a;
public:SBI(){
    cout<<"\nsbi memory";
}
~SBI(){
    cout<<"\nsbi memory released\n";
}
public: void show(){
cout<<"\n sbi class\n";
}
};
int main(){
    SBI s;
    s.show();
    cout<<"size of sbi="<<sizeof(s);
}
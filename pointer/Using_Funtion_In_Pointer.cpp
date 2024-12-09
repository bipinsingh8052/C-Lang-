#include<iostream>
using namespace std;
int axia(int u ,int n){
    return 500;
}
int sbi(int u,int n){
    return 800;
}
int main(){
    // this is pointer  function  
    int (*Atm) (int ,int);
    // int     (depend on the function return );
    // (*ATM)   (it is function name);
    // (int ,int) (this is pointer function passing a argument you cant write it variable name)


    Atm=sbi;
    // in this line you can assign the normal function in pointer function
    int balance=Atm(9,6);
    cout<<"Amount:"<<balance<<"\n";
    int balance_second=Atm(9,7);
    cout<<"Amount second"<<balance_second<<"\n";

}
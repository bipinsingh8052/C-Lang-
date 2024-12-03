// // call by refercence
// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a:";
//     cin>>a;
//     cout<<"Enter the value of b:"<<"\n";
//     cin>>b;
//     swap(a,b);
//     cout<<"Enter the value of a:"<<a<<"\n";
//     cout<<"Enter the value of b:"<<b<<"\n";
// }


// // call by the value
// #include<iostream>
// using namespace std;
// void swap(int a,int b){
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"Enter the value of a:"<<a<<"\n";
//     cout<<"Enter the value of b:"<<b<<"\n";
// }
// int main(){
//     int a,b;
//     cout<<"Enter the value of a:";
//     cin>>a;
//     cout<<"Enter the value of b:"<<"\n";
//     cin>>b;
//     swap(a,b);
// }


// // print the table 
// #include <iostream>
// using namespace std;
// void table(int a){
//     for(int i=1;i<=10;i++){
//         cout<<a*i<<"\n";
//     }
// }
// int main(){
//     int a;
//     cout<<"Enter the value of a:";
//     cin>>a;
//     table(a);
// }


// // print the table from return 
#include <iostream>
using namespace std;
int table(int a,int ta[]){
    int j=1;
    for(int i=0;i<=10;i++){
        ta[i]=a*j;
        j++;
    }   
}

int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    int ta[10];
    int s=sizeof(ta)/sizeof(ta[0]);
    table(a,ta);
    for(int i=0;i<=s-1;i++){
        cout<<ta[i]<<"\t";
    }
}
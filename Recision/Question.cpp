// factirol in recision
// #include<iostream>
// using namespace std;
// int fact(int a){
//     if(a==0){
//         return 1;
//     }
//     return (a*fact(a-1));
// }
// int main(){
//     int a=0;
//     cout<<"Enter the number:";
//     cin>>a;
//     cout<<fact(a);
// }




// fibnocie serice
#include<iostream>
using namespace std;
int fabi(int a,int r){
    if(a==0){
        return 1;
    }
    r =fabi(a-1,r)+fabi(a-2,r);
    return r;
}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    cout<<fabi(a,0);

}
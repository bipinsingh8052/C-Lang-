// [] supscript 
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5][2]={{1,2},{3,1},{3,1},{3,1},{3,1}};
//     cout<<sizeof(a);
    
// }


#include<iostream>
using namespace std;
int main(){
    int a[]={1,23,13,3,13,1};
    cout<<sizeof(a)/sizeof(a[0])<<"\n";
    char b[]={'a','b','k'};
    cout<<sizeof(b)/sizeof(b[0])<<"\n";
    int size=sizeof(b)/sizeof(b[0]);
    cout<<size;
    
}
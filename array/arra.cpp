// [] supscript 
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5][2]={{1,2},{3,1},{3,1},{3,1},{3,1}};
//     cout<<sizeof(a);
    
// }




// w.a.p lenth of n  array
#include<iostream>
using namespace std;
int main(){
    int a[]={1,23,13,3,13,1,};
    cout<<sizeof(a)/sizeof(a[0])<<"\n";
    char b[]={'a','b','k',};
    cout<<sizeof(b)/sizeof(b[0])<<"\n";
    int size=sizeof(b)/sizeof(b[0]);
    cout<<size;

// forward traveling
    for(int i=0 ;i<=size-1;i++){
        cout<<a[i];
    }
    // backward travelling
    for(int i=size-1;i>=0;i--){
        cout<<a[i];
    }
    //  important topic
    cout<<4[a]; //they give it index value number of 4
    cout<<a[4];  //they  give you garbage value
    cout<<-4[a]; //this is also give you index value but its converd in negative
    
    
}
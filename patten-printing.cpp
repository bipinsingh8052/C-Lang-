#include<iostream>
using namespace std;
int main(){
    // char a;
    // cout<<"Enter the any char :";
    // cin>>a;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);

        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";

// A
// AB
// ABC

    for(int i=1;i<=3;i++){
        for(int j=i;j>0;j--){
            cout<<char(j+96);

        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";

    // a
    // ba
    // cba

    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            cout<<char(i+96);

        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";
    // a
    // bb
    // ccc

    for(int i=65;i<=67;i++){
        for(int j=65;j<=i;j++){
            cout<<char(i);

        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";

    for(int i=65;i<=67;i++){
        for(int j=65;j<=i;j++){
            cout<<char(j);

        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";

    // int start=0;
    // cout<<"Enter the number :";
    // cin >>start;
    int end =0;
    cout<<"ENter the end :";
    cin >>end;
    for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){

            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";

    //    8
    //   88
    //  888
    for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){

            cout<<k;
        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";


int count=0;
for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            count++;
            cout<<count;
        }
        cout<<"\n";
    }

    cout<<"patten number:";
    cout<<"\n";



    for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){

            cout<<i;
        }
        cout<<"\n";
    }

    cout<<"patten number:";
    cout<<"\n";

    for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){

            cout<<char(i+64);
        }
        cout<<"\n";
    }

    cout<<"patten number:";
    cout<<"\n";

int nu=0;
    for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            nu++;
            cout<<char(nu+64);
        }
        cout<<"\n";
    }


   cout<<"patten number:";
    cout<<"\n";


    
    for(int i=1;i<=end;i++){
        for(int j=end;j>i;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            
            cout<<char(k+64);
        }
        cout<<"\n";
    }
    cout<<"patten number:";
    cout<<"\n";

for(int i=1;i<=end;i++){
    for(int j=end;j>i;j--){
        cout<<" ";
    }
    for(int k=i;k>0;k--){
        cout<<"* ";
    }
    cout<<"\n";
}

cout<<"patten number:";
    cout<<"\n";
//   *
//  * *
//*  *   *



    return 0;
}
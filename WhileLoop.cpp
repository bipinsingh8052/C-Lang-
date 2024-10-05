// 10. *Pick the odd one out* - Write a program to accept four numbers from user and print the odd one among them.
//     - Number can be odd among others in following scenario:
//       - if three numbers are equal, then the different one is odd one among them.
//       - if three number are even, then the different one is odd one among them.
//       - if three number are odd, then the different one is odd one among them.
//     - if all are different, even or odd, then print no number is odd one among them.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int Number;
//     int Number2;
//     int Number3;
//     int Number4;
//     cin>>Number>>Number2>>Number3>>Number4;
//    if(Number2 % 2 ==0)
//    {
//    }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number;";
    cin>>a;
    int i=1;
    int total=0;
    // while(i<a){
    //     if(a%i==0){
    //         total=total+i;
    //     }
    //     i++;
    // }
    // if(a==total){
    //     cout<<" perfect number:";
    // }
    // else{
    //     cout<<"not prefect number:";
    // }
    // total=0;
    // i=0;
    // while(i<=a){
    //     if(a%i==0){
    //         total++;
    //     }
    //     i++;
    // }
    // if(total==2){
    //     cout<<"prime number:";
    // }
    // else{
    //     cout<<"Not a prime number:";
    // }
    // while(a!=0){
    //     int digit=a%10;
    //     total++;
    //     a=a/10;
    // }
    // while(a!=0){
    //     int digit=a%10;
    //     total=total+digit;
    //     a=a/10;
    // }
    // cout<<total;
    // int fact=1;
    // while(a!=0){
    //     fact=fact*a;
    //     a--;
    // }
    // cout<<fact;
    int rev=0;
    while(a!=0){
        int digit=a%10;
         a=a/10;
        rev=rev*10+digit;
        // rev=rev+digit*10;

       
    }
    cout<<rev;
    // int j=09;
    // cout<<j;
}
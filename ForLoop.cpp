// #include<iostream>
// using namespace std;
// int main()
// {
//     int i =9;
//     for(;i<11;)
//     {
//         cout<<"Hello world";
//         i++;
//     }
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int NumberMax = 0;
//     for(int i=1;i <=5 ;i++)
//     {
//         int Number1;
//         cout<< "Enter the number :";
//         cin >> Number1 ;
//         if(NumberMax < Number1)
//         {
//             NumberMax = Number1;
//         }

//     }
//     cout << NumberMax;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int MIN ;
//     int NUmber=0;
//     cout<< "Enter the number";
//     cin>>NUmber;
//      MIN = NUmber;
//     for(int i=1;i<5;i++)
//     {
//         cout<< "Enter the number";
//         cin>>NUmber;
//         if(MIN > NUmber)
//         {
//             MIN = NUmber;
//         }
//     }
//     cout <<MIN;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number:";
//     cin>>a;
//     a%2==0?cout<<"Even number:":cout<<"Odd number";
//     int b;
//     cout<<"Enter the number:";
//     cin>> b;
    

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"Enter the number:";
//     cin>>a;
//     int c=(-1)*a;
//     cout<<c;
// }

// w.a.p to count the no of digits
#include<iostream>
using namespace std;
int main()
{
    // int a;
    // cout<<"Enter the number:";
    // cin>>a;
    // int digit=0;
    // int total=0;
    // while(a>0){
    // int sum=a%10;
    // total=total+sum;
    //     a=a/10;
    //     digit++;
    // }
    // cout<<digit;
    // cout<<total;
    // if((a%4==0 )&&(a%100!=0)||a%400==0)
    // {
    //     cout<<"Leap year:";
    // }
    // else{
    //     cout<<"NOt leap year:";
    // }



// int count=0;
//     while(a!=0){
//         a=a/10;
//         count++;
//     }
//     cout<<count;

    // int b =23 |51;
    // cout<<b;

    // Xor operater
    // b=19^8;
    // b=-12;
    // b=123456<<6;
    // cout << b;
    // b=1234>>2;
    // cout<<b;
    // for(int i=10;i>0;i--){
    //     cout<<i<<"\n";
    // }
    // int b=0;
    // cout<<"ENter the power:";
    // cin >>b;
    // int c=1;
    // for(int i=1;i<=b;i++){
    //     c=c*a;
    // }
    // cout<<c;


    // for(int i=100;i<=999;i++){
    //     for(int j=1;j<=i;j++){

    //     }
    // }
    // int d,e,f,g;
    // if(a>=100&&a<=999){
       
        
    // }

    // else{
    //     cout<<"Invalid no:";
    // }

    //  d=a%10;
    //     a=a/10;
    //     e=a%10;
    //     a=a/10;
    //     f=a%10;
    //     a=a/10;
    //     g=f*f*f+d*d*d+e*e*e;
    // cout<<d<<"\n";
    // cout<<e<<"\n";
    // cout<<f<<"\n";
    // cout<<g;



    // int a=34521;
    // int last=a%10;
    // int first=0;
    // int total=0;
    // while(a!=0){
    //     first=a%10;
    //     int digit=a%10;
    //     total=total*10+digit;
    //     a=a/10;
    // }

    // cout<<first<<"nu:"<<last<<"no"<<"\n";
    // int sum=first+last;
    // cout<<sum<<"\n";
    // cout<<total;
    // cout<<36/60;

//  // ARMSTRONG NUMBER FIND
//     int a;
//     cout<<"Enter the no:";
//     cin>>a;
//     int b=a;
//     int c=0;
//     if(a>99&&a<=999){
//        for(;a!=0;){
//         int digit=a%10;
//         c=c+digit*digit*digit;
//         a=a/10; 
//         }
//         if(b==c){
//         cout<<"Armstrong number:";
//         }
//         else{
//             cout<<"not armstrong no:";
//         }
//     }
//     else{
//         cout<<"invalid no:";
//     }



// digit number find the first no and last no and sum:
 int a;
 cout<<"Enter the number :";

 cin>>a;
 int first=0;
 int last=0;
 int counter=0;
 while(a>0){
    int digit =a%10;
    counter++;
    if(counter==1){
        last=digit;
    }
    first=digit;
    a=a/10;
 }
 cout<<"f"<<first<<"\n";
 cout<<"l"<<last<<"\n";




    
}
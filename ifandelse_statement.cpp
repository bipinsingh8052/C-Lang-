// // Conditional operater
// #include<iostream>
// using namespace std;
// int main()
// {
//     int maths_marks;
//     cout<<"Enter the Maths marks:";
//     cin>>maths_marks;

//     int science_marks;
//     cout<<"Enter the  Science marks:";
//     cin>>science_marks;

//     int social_science_marks;
//     cout<<"Enter the   Social_Science marks:";
//     cin>>social_science_marks;
//     int Gk_marks;
//     cout<<"Enter the   Gk marks:";
//     cin>>Gk_marks;

//     int English_marks;
//     cout<<"Enter the  English marks:";
//     cin>>English_marks;

//     int total=0;
//     total=maths_marks+English_marks+social_science_marks+science_marks+Gk_marks;
//      cout<<"THis is total marks"<<total<<"\n";
//     float percentage=0;
//     percentage=total/5.0;
//     cout<<"this is percentage"<<percentage<<"\n";
//     int count=0;
//     if(maths_marks>=60){
//       count++;

//     }
//     else if(science_marks>=60){
//       count++;

//     }
//     else if(social_science_marks>=60){
//       count++;

//     }
//     else if(Gk_marks>=60){
//       count++;

//     } 
//      else if(English_marks>=60){
//       count++;

//     }
//     else{
//         cout<<"this student is fail";
//     }
    
//     return 0;
// }


// WAP to accept the nuumber by user and check it number is positive ya negative and print it

// #include<iostream>
// using namespace std;
// int main()
// {
//   int number;
//   cout << "enter the number:";
//   cin >> number;
//   if( number > 0 ){
//     cout << "positive number:";
//   }
//   else
//   {
//     cout << "negative number";
//   }
//   return 0;
// }



// WAP accept the number by the user and Whether it this number is divided by 7 if yes then print and also print it this is not divided by 7???? 

// #include<iostream>
// using namespace std;
// int main()
// {
//   int  Number ;
//   cout << "Enter the number:";
//   cin >>  Number;
//   if(Number % 7 == 0)
//   {
//     cout << "this number is Divided by 7";
//   }
//   else{
//     cout <<  "This number is not Divided by 7";
//   }
// }

// divides 2 and not print divided by 2,7s

// #include<iostream>
// using namespace std;
// int main()
// { 
//     int Number;
//     cout <<"Enter the Number:";
//     cin >> Number;
//     if ( Number % 7 == 0 && Number % 2 == 0){
//         cout << "Your number divided by 2 and 7 :";
//     }
//     else if (Number % 7 == 0)
//     {
//         cout << "Your given number is divided by 7 :" << Number ;
//     }
//     else if (Number % 2 == 0)
//     {
//         cout << "Your given number is divided by 2 :" << Number ;
//     }
//     else{
//         cout <<" Your given number is not divided by 2 and 7";
//     }
    
//     return 0;
  
// }




// #include<iostream>
// using namespace std;
// int main ()
// {
//     int Number1;
//     int Number2;
//     int Number3;
//     cout<<"Enter the THree number :";
//     cin >> Number1 >>  Number2 >> Number3;
//     if ( Number1 > Number2 )
//     {
//         if(Number1 > Number3){
//             cout << "This  1 Number is grater then :" ;
//         }
//        else {
//                 cout << "This  3 is grater then :" ;
//             }
//     }
    
//     else{
//         if ( Number2 > Number3 ){
//            cout << "Number 2 is grater then ";
//         }
//         else{
//             cout << "This  3 is grater then :" ;
//         }
//     }
// }



// #include<iostream>
// using namespace std;
// int main ()
// {
//    int start ;
//    cout << "Enter the starting point:";
//    cin >> start;
//    int end ;
//    cout << "Enter the ending point:";
//    cin >> end;
//    int total=0;
//    int count=0;
//    for ( int i=5 ; i<=100; i+=5){
//    cout<<i;
    
//    }
//    cout<<total<<"/n";
//    cout<<count;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//    int number;
//    cout << "Enter the number:";
//    cin >> number;
//    int number2 ;
//    cout<<"Enter the number2:";
//    cin>> number2;
//    if(  (number%2==0&& number2% 2== 0) &&(number==number2))
//    {
//       int number3 =0;
//       cout << "Enter the third number :";
//       cin >> number3;
//       if(number3 < 0)
//       {
//           number3 = number3 * (-1);
//          cout<<"number the positive:" << number3;
//       }
      
//    }
//    else {
//       cout << "THis calcution is not possible:";
//    }
   
   
//    return 0;

// }

// // w.a.p to accept two numbeer form user .if the number is positive check wheater the no div 
// #include<iostream>
// using namespace std;
// int main()
// {
//    int Number =0;
//    cout <<"Enter the number :";
//    cin >>Number ;
//    if(Number > 0 )
//    {
//       if(Number % 3== 0 && Number % 5 ==0)
//       {
//          int num2 = Number / 3;
//          int Num5 = Number / 5;
//          cout << num2<< Num5;
//       }
//       else {
//           int num2 = Number % 3;
//          int Num5 = Number % 5;
//          cout << num2<< Num5;
//       }
//    }
//    else{
//       cout << "Caclution is not possible:";
//    }
//    return 0;
// }

 





// #include<iostream>
// using namespace std;
// int main()
// {
//     float p;
//     cout<<"Enter the physic Subject number:";
//     cin>>p;
//     float c;
//     cout<<"Enter the chemistry Subject number:";
//     cin>>c;
//     float m;
//     cout<<"Enter the maths Subject number:";
//     cin>>m;
//     float total= p+c+m;
//         float per =total/3;
//         cout<<per;
// //    int per =60;

//     if((p>=35&&m>=35&&c>=35&&c<=100)){
//        if(per<=100&&per>=60){
//         cout<<"First division";
//         }
//         else if(per<=59&&per>=50)
//         {
//             cout<<"Second division";
//         }
//         else if(per<=49&&per >=35 ){
//             cout<<"THird division";
//         }
//         else{
//             cout<<"Fail";
//         }
//     }
//     else{
//         cout<<"you got a supply :";
//     }
      
// }



// w.a.p to display how many currercy we need to make a current amount.
#include<iostream>
using namespace std;
int main()

{
   
    // cout<<"hellow";
    // goto hb;
    // cout<<"normal";
    //  hb:
    // // return 0;
    // for(int i=0;i<=5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         cout<<"*";
           
    //     }
    //     cout<<"\n";
    // }
    // int i,number;
    // i=0;
    // cout<<"Enter the number :";
    // cin>>number;
    // hm:
    // cout<<number*i<<"\n";
    // i++;
    // if(i<=10)
    // {
    //     goto hm;
    // }
    int j=10;
    jk:
    cout<<j<<"\n";
    j--;
    if(j>=0)
    {
        goto jk;
    }
    

}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=1 ;j <=a ;j++)
//         {
//             cout << "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=i;j>0 ;j--)
//         {
//             cout << "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=a-i; j>=0 ;j--)
//         {
//             cout << "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j= i ;j>0 ;j--)
//         {
//             cout <<" ";
//         }
//         for(int k=i ;k<=a ;k++)
//         {
//             cout<< "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j =a ;j >=i ;j--)
//         {
//             cout <<" ";
//         }
//         for(int k=1 ;k<=i ;k++)
//         {
//             cout<< "*";
//         }
//         cout <<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for (int j=1 ;j<=9 ;j++)
//         {

//             if(i==1|| j==5 || 
//             (i==2&&j==2)||(i==2 && j==3)||(i==2&& j==4)||(i==2&& j==6)||(i==2&& j==7)||(i==2&& j==8)||
//             (i==3&& j==3)||(i==3&& j==4)||(i==3&& j==6)||(i==3&& j==7)||
//             (i==4&& j==4)||(i==4&& j==6))
//             {
//                 cout<<"*";
//             }

//             else{
//                 cout<<" ";
//             }
//         }
//         cout <<"\n";
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {

//             cout<<"*";
//         }
//         cout<<"\n";
//     }

//     cout<<"\n";
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=4 ;j>=i;j--)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }


//     cout<<"\n";

//     for(int i=1;i<=4;i++)
//     {
//         for(int j=4;j>=i;j--)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=4-i;k>=0;k--)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//      for(int i=1;i<=4;i++)
//     {
//         for(int j=4;j>=i;j--)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//    for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=4-i;k>=0;k--)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//     for(int i=1;i<=8;i++)
//     {
//         for(int j=1;j<4;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=4-i;k>=0;k--)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     int Rows=0;
//     cout<< " Enter the rows:";
//     cin >> Rows;
//     for(int i=0;i<Rows;i++)
//     {
//         for(int j=i ;j >=0 ;j--)
//         {
//             cout << "*";
//         }
//         cout<<"\n";
//     }

//     cout<<"\n";
//     for(int i=0;i<Rows;i++)
//     {
//         for(int j=0; j<Rows-i ;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//     for(int i=0;i<Rows;i++)
//     {
//         for(int j=0; j<Rows-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=i ;k>=0;k--)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//     for(int i=0;i<Rows;i++)
//     {
//         for(int j=i;j>=0;j--)
//         {
//             cout<<" ";
//         }
//         for(int k=0;k<Rows-i;k++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//     for(int i=0;i<Rows;i++)
//     {
//         for(int j=i;j>=0;j--)
//         {
//             cout<<" ";
//         }
//         for(int k=0;k<Rows-i;k++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//      for(int i=0;i<Rows;i++)
//     {
//         for(int j=0; j<Rows-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=i ;k>=0;k--)
//         { 
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     cout<<"\n";
//     for(int i=0;i<Rows;i++)
//     {
        
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    // int Player=0;
    // for(int i=1;i<=11;i++)
    // {
    //     cout<<"Enter the player game:";
    //     cin >> Player;
    //     if(Player  ==99 || Player >100)
    //     {
    //         cout<<"THis player is playing a 100 game:"<< i;
    //     }
    // }
    // cout<<"\n";
    // int ramesh=5000;
    // int surash= 0;
    // cout >> "enter the PIn number suresh:";
    // cin >> surash;
    // while(true)
    // {
    //     cout<<"Enter the pin number:";
    //     cin>>ramesh;
    //     if(ramesh == surash){
    //         cout<<"withdrawl successful:";
    //         break;
    //     }
    //     else{
    //         cout<<"IF  suresh gave ";
    //         cout<<"Enterthe pin again:";
    //         cin >> ramesh;
    //     }
    // }
    // cout<<"\n";
    // int lenght=0;
    // cout<<"Enter the length:";
    // cin >> lenght;
    // int breath=0;
    // cout<<"Enterthe breath:";
    // cin >> breath;
    // if(lenght== breath)
    // {
    //     cout<<"THis is square:";
    // }
    // else{
    //     cout<<"This is rectangle:";
    // }
    

    // int primeNUmber_started=0;
   
    // cout<<"Enter the PRimeNUmber started:";
    // cin >> primeNUmber_started;
    //  int primeNumber_end=0;
    // cout<<"Enter the primeNUMber End:";
    // cin >> primeNumber_end;
    // int firstprimeNUmber=0;
    // for(int i=primeNUmber_started+1 ;i<=primeNumber_end-1;i++)
    // {
    //     for()
    // }
    // cout<<firstprimeNUmber;


    // cout<<
    // cout <<"\n";
    // int digit =0;
    // cout<<"Enter the number :";
    // cin >> digit;
    // int palindrom=digit;
    // int count=1;
    // while(digit !=0){
    //       int sum=digit%10;
    //     count=count*10+sum;
    //     cout<<count;
    //     digit=digit/10;
    // }
    // if(count == palindrom)
    // {

    //     cout<<"this is palindrom number:";
    // }
    // else{
    //     cout<<"This is not a palindrom number:";
    // }

    // 


    // cout<<"\n";
    // int number=0;
    // for(int i=0;i<9999;i++)
    // {
    //     if(i%2==0)
    //     {
    //     }
    //     else{
    //         number=i;
    //     }
    // }
    // cout<<number;

   
    for(int i=1;i<=1000;i++)
    {
        if(i%2==0&&i%3==0&&i%5==0&&i%7==0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}
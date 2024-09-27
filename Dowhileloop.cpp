// #include<iostream>
// using namespace std;
// void main()
// {
//     int Number ;
//     do {
//        cout << "Enter the number :";
//        cin >> Number ;

//     } while(Number!= 0);
    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int Number =0;
//     cout <<"Enter the Even number :";
//     cin >> Number ;
//     do{
//         cout <<"Enter the Even number :";
//         cin >> Number ;
//         if(Number % 2 !=0)
//         {
//             Number =Number +1;
            
//         }

//     }while (Number != 0);
//     return 0;
// }


// #include<iostream>
// using namespace std ;
// int main()
// {
//     int Number ;
//     int Sum =0;
//     cout << "Enter the Even number :";
//      cin >> Number;
   
//     do {
//             if( Number %2 ==0)
//             { 
//                  Sum =Sum +Number;
//                cout << "Enter the  odd number  :";
//                cin >> Number ;
//             }
//             else {
//                  Sum =Sum+Number;
//                     cout << "Enter the  even number  :";
//                     cin >> Number ; 
//             }
        
         
//         }while(Number != 0); 

//     cout<< Sum;
//     return 0;
// }


//        
    //         cout << "Enter the  even number  :";
    //         cin >> Number ;
    //    if((Count ==true && Number %2 == 0 )||(Count == true && Number %2 == 2 )||(Count == true && Number %2 == 4 ) ||(Count == 1 && Number %2 == 5 )||(Count == 1 && Number %2 == 7 )||(Count == 1 && Number %2 == 9 ))
    //     {
    //         Count= false;
    //         Sum =Sum +Number;
    //         cout << "Enter the  odd number  :";
    //      

    //     } 
    //     else if((Count ==false && Number %2 == 1 )||(Count == false && Number %2 == 3 )||(Count == false && Number %2 == 4 ) ||(Count == 1 && Number %2 == 5 )||(Count == 1 && Number %2 == 7 )||(Count == 1 && Number %2 == 9 )){
    //          Sum =Sum+Number;
    //          Count =true; 
    //          cout << "Enter the  even number  :";
    //        
    //      }
          

        //   w.a.p to di account for user if the amount lessan then total balancs then print vi __success_typeotherwise print in siffient balan   you 
        //   withbal 
          

         

    //      #include<iostream>
    //      using namespace std;
    //      int main()

    //      {
    //           int amount;
    //             cout<<"Enter the amount:";
    //             cin>>amount;
    //             int fiveh=0,twoh=0,oneh=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
    //     if(amount>=500)
    //     {
    //         int sum =amount-500;
    //         amount=sum;
    //         fiveh++;
    //     }
    //      if(amount>=200)
    //     {
    //         int sum =amount-200;
    //         amount=sum;
    //         twoh++;
    //     }
    //      if(amount>=100)
    //     {
    //         int sum =amount-100;
    //         amount=sum;
    //         oneh++;
    //     } 
    //     if(amount>=50)
    //     {
    //         int sum =amount-50;
    //         amount=sum;
    //         fifty++;
    //     } 
    //     if(amount>=20)
    //     {
    //         int sum =amount-20;
    //         amount=sum;
    //         twenty++;
    //     }
    //      if(amount>=10)
    //     {
    //         int sum =amount-10;
    //         amount=sum;
    //         ten++;
    //     } 
    //     if(amount>=5)
    //     {
    //         int sum =amount-5;
    //         amount=sum;
    //         five++;
    //     }
    //      if(amount>=2)
    //     {
    //         int sum =amount-2;
    //         amount=sum;
    //         two++;
    //     }
    //     if(amount >=1)
    //     {
    //         int sum =amount-1;
    //         amount=sum;
    //         one++;
    //         cout<<sum;
    //     }
        
    //       cout<<"fifty hundred:"<<fiveh<<"\n";
    // cout<<"two  hundred:"<<twoh<<"\n";
    // cout<<"One hundred:"<<oneh<<"\n";
    // cout<<"fifty :"<<fifty<<"\n";
    // cout<<"twenty rupes:"<<twenty<<"\n";
    // cout<<"ten repuy:"<<ten<<"\n";
    // cout<<"five:"<<five<<"\n";
    // cout<<"two"<<two<<"\n";
    // cout<<"One"<<one<<"\n";
    //      }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1;
//     do{
//         if(1%2==0)
//         {
//             cout<<i;
//         }  
//          i++;
//     }
//     while(i<=10);

    //  do{
    //     if(i%2!=0)
    //     {
    //         cout<<i;
    //     }
    //     i++;

    //   }
    //  while(i<=10);

    // i=10;
    //  do{
    //     cout<<i;
    //     i--;
    //  }
    //  while(i!=0);

    // do{
        
    //     cout<<i*i<<"\n";
    //     i++;
    // }
    // while(i<=10);



// }

#include<iostream>
using namespace std;
int main()
{
    int a=0;
    cin>>a;
    // int i=1;
    // do{
      
    //     cout<<i*a<<"\n";
    //     i++;
    // }while(i<=10);
    // int j=0;
    // int l=0;
    // do{
    //     l=j+l;
    //     j++;
    // }
    // while(j<=a);
    // cout<<"normal"<<l<<"\n";
    // for(int i=1; i<=a ;i++)
    // {
    //     a=a*1;
    //     i++;
    //     cout<<a
    // }
    int m=1;
    int y=1;
    do{

        m=m*a;
      
        
        a--;
    }
    while(a!=1);
    cout<<"sum"<<m<<"\n";
    return 0;
}
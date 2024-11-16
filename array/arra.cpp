// [] supscript 
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5][2]={{1,2},{3,1},{3,1},{3,1},{3,1}};
//     cout<<sizeof(a);
    
// }




// // w.a.p lenth of n  array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,23,13,3,13,1,};
//     cout<<sizeof(a)/sizeof(a[0])<<"\n";
//     char b[]={'a','b','k',};
//     cout<<sizeof(b)/sizeof(b[0])<<"\n";
//     int size=sizeof(b)/sizeof(b[0]);
//     cout<<size;

// // forward traveling
//     for(int i=0 ;i<=size-1;i++){
//         cout<<a[i];
//     }
//     // backward travelling
//     for(int i=size-1;i>=0;i--){
//         cout<<a[i];
//     }
//     //  important topic
//     cout<<4[a]; //they give it index value number of 4
//     cout<<a[4];  //they  give you garbage value
//     cout<<-4[a]; //this is also give you index value but its converd in negative   
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,2,3,4,5};
//     a[9]=900;
//     cout<<a[9];
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0 ;i<siz;i++){
//         cout<<a[i];
//     }
// }



// // w.a.p to display the sum of the values of array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3,4,5};
//     int sum=0;
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         sum=sum+a[i];
//     }
//     cout << sum;
// }




// // find the min value in the array
// find the max number in the given array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={1,2,3,4,5};
//     // int min=a[0];
//     // int max=a[0];
//     int min = INT8_MAX;
//     int max =INT16_MIN;
//     int siz=sizeof(a)/sizeof(a[0]);
//     for(int i=0;i<= siz-1; i++){
//         if(min>a[i])
//         {
//           min=a[i];
//         }
//         if(max<a[i]){
//           max=a[i];
//         }
//     }
//     cout<<max<<"max value"<<"\n";
//     cout<<min<<"min value"<<"\n";
// }




// // find the even number in the array
// #include<iostream>
// using namespace std;
// int main(){
//   int a[]={1,2,3,3,4,4,55,6,7,7,8,8,9,9,90};
//   int len =sizeof(a)/sizeof(a[0]);
//   for(int i=0;i<=len-1;i++){
//     if(a[i]%2==0){
//       cout<<a[i]<<"\t";
//     }
      // if(a[i]%2 !=0){
      //   cout<<a[i]<<"\t";
      // }
//   }
// }


// // find the second largest number in the array
// #include<iostream>
// using namespace std;
// int main(){
//   int a[]={1111111,2,3,4,22,221,1,44,1,4,65,54,7654,345,65,234,65};
//   int len =sizeof(a)/sizeof(a[0]);
//   int max1,max2;
//   max1=max2=INT8_MIN;
//   for(int i=0;i<=len-1;i++)
//   {
//     if(a[i]>max1){
//       max2=max1;
//       max1=a[i];
//     }
//     else if(a[i]>max2 && a[i]<max1){
//       max2=a[i];
//     }
//   }
//   cout<<max2;
//   return 0;
// }


// // Find the Prime number in the array
// #include<iostream>
// using namespace std;
// int main(){
//   int a[]={4,7,6,11,5,1};
//   int len =sizeof(a)/sizeof(a[0]);
//   for(int i=0;i<=len-1;i++){
//     int count=0;
//     for(int j=1;j<=a[i];j++){
//       if(a[i]%j==0){
//         count++;
//       }
//       if(a[i]==1){
//         count=2;
//       }
//     }
//     if(count==2){
//       cout<<"Prime number :"<<a[i]<<"\n";
//     }
//   }
// }


// // W.A.P to Replace the 1 with 0 in the given array?
// #include<iostream>
// using namespace std;
// int main(){
//   int a[]={2,1,3,1,5,1};
//   int len =sizeof(a)/sizeof(a[0]);
//   for(int i=0;i<=len-1;i++){
//     if(a[i]==1){
//       a[i]=0;
//     }
//     cout<<a[i];
//   }
// }




// // // W.a.p To sift all Zero at the last by holding bill position in array?
// #include<iostream>
// using namespace std;
// int main(){
//   int a[]={2,0,7,0,3,0,6};
//   int len =sizeof(a)/sizeof(a[0]);
// //   //shift the all zero in right side
//   for(int i=0;i<=len-1;i++){
//     for(int j=0;j<=len-2;j++){
//       if(a[j]==0){
//             int temp =a[j+1];
//             a[j+1]=a[j];
//             a[j]=temp;
//       }
//      cout<<"TOTAL"<<a[j]<<"\n";
//     }
//   }

//   for(int i=0;i<=len-1;i++){
//       cout<<a[i]<<"\t";
//   }
//   cout<<"\n";

// // //Shift the all zero in left side 
//  for(int i=0;i<=len-1;i++){
//       for(int j=1;j<=len-1;j++){
//             if(a[j]==0){
//                   int temp =a[j-1];
//                   a[j-1]=a[j];
//                   a[j]=temp;
//             }
//       }
//  }
 
//   for(int i=0;i<=len-1;i++){
//     cout<<a[i]<<"\t";
//   }
// }


// //w.a.p to sum of all odd number in the given array??
// #include<iostream>
// using namespace std;
// int main()
// {
//       int arr[]={64,24,81,312,25,121,76};
//       int len=sizeof(arr)/sizeof(arr[0]);
//       int total=0;
//       for(int i=0;i<=len-1;i++){
//            if(arr[i]%2 !=0){
//             total+=arr[i];
//            }
//       }
//       cout<<total;
// }



// // W.A.P to find the square root of number is given by the array
// #include<iostream>
// using namespace std;
// int main(){
//       int a[]={25,4,8,81,121,225};
//     int len =sizeof(a)/sizeof(a[0]);
//       for(int i=0;i<=len-1;i++){
//             for(int j=1;j*j<=a[i];j++){
//                   if(j*j==a[i]){
//                         cout<<a[i]<<"\t";
//                         break;
//                   }
//             }
//       }
// }


// // W.A.P to print the decending order the array?
// #include<iostream>
// using namespace std;
// int main(){
//       int a[]={1,2,312,42,534,5,9};
//       int len =sizeof(a)/sizeof(a[0]);
     
//       for(int i=0;i<=len-1;i++){
            
//             for(int j=0;j<=len-2;j++){
//                   if(a[j]>a[j+1]){
//                         int temp =a[j+1];
//                         a[j+1]=a[j];
//                         a[j]=temp;
//                   }
//             }
//       }
//       for(int i=0;i<=len-1;i++){
//             cout<<a[i]<<"\t";
//       }
// }


// // w.a.p to print the ascending order in array
// #include<iostream>
// using namespace std;
// int main(){
//       int a[]={1,23543,4321,5432,7,5,4,3,2,1};
//       int len =sizeof(a)/sizeof(a[0]);
//       for(int i=0;i<=len-1;i++){
//             for(int j=0;j<=len-2;j++){
//                   if(a[j]>a[j+1])
//                   {
//                         int temp=a[j+1];
//                         a[j+1]=a[j];
//                         a[j]=temp;
//                   }     
//             }
//       }
//       for(int i=0;i<=len-1;i++){
//             cout<<a[i]<<"\t";
//       }
// }


// // w.a.p to swap the first value and last value in the given array
// #include<iostream>
// using namespace std;
// int main(){
//       int a[]={1,2,33,4,5,78,9};
//       int len =sizeof(a)/sizeof(a[0]);
//       int temp=0;
//       temp=a[len-1];
//       a[len-1]=a[0];
//       a[0]=temp;
//       for(int i=0;i<=len-1;i++){
//             cout<<a[i]<<"\t";
//       }
// }


// // w.a.p Find the unique  number by given the array
// #include<iostream>
// using namespace std;
// int main(){
//       int a[]={1,2,3,2,1,8,};
//       int len =sizeof(a)/sizeof(a[0]);
//       for(int i=0;i<=len-1;i++){
//             int count=0;
//             for(int j=0;j<=len-1;j++){
//                   if(a[i]==a[j]){
//                         count++;
//                   }
//             }
//             if(count==1){
//                   cout<<a[i]<<"\t";
//             }
//       }
// }


// // w.a.p the sum of alternate number form given array
// #include<iostream>
// using namespace std;
// int main(){
//       int a[]={1,2,3,3,4,5,6,7,7};
//       int len=sizeof(a)/sizeof(a[0]);
//       int sum=0;
//       for(int i=0;i<=len-1;i+=2){
//                   sum+=a[i];
//       }
//       cout<<sum;
// }

// find the armstrong number in given by the array
#include<iostream>
using namespace std;
int main(){
      int a[]={1,153,3,1634,371,135,7};
      int len =sizeof(a)/sizeof(a[0]);
      for(int i=0;i<=len-1;i++){
            int arms=1;
            int number=a[i];
            int numb =a[i];
            int count=0;
            while(number!=0)
            {
                  int num=number/10;
                  count++;
                  number=number%10;
            }
            while(numb!=0){
                  int digit=numb/10;
                  arms=count*digit;
                  numb=numb%10;
            }
            if(arms == a[i]){
                  cout<<a[i];
            }
            cout<<arms<<"\n";
      }
}
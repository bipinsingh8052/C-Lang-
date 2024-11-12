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
//   }
// }



#include<iostream>
using namespace std;
int main(){
  int a[]={1,2,3,4,22,221,1,4444,1,445,6543,7654,7654,345,65,234,65};
  int len =sizeof(a)/sizeof(a[0]);
  for(int i=0;i<=len-1;i++)
  return 0;
}
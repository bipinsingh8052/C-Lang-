// // w.a.p to how to take input and output the array in 2d ?
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number :";
//             cin>>a[i][j];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"output  the number :";
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
// }


// //w.a.p to find the even number in 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]%2==0){
//                 cout<<"This is even number:";
//                 cout<<a[i][j]<<"\n";
//             }
//         }
//     }
// }


// // w.a.p to find sum of all value in given 2d array 
// #include<iostream>
// using namespace std;
// int main(){
//      int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int total=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             total+=a[i][j];
//         }
//     }
//     cout<<total<<"sum of arry";
// }


// // // w.a.p to find the maximum value in this 2d array 
// #include<iostream>
// using namespace std;
// int main(){
//      int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int max=INT8_MIN;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(a[i][j]>max){
//                 max=a[i][j];
//             }
//         }
//     }
//     cout<<"this is maximum value :"<<max;
// }


// // w.a.p to find the minimun value in 2d array?
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int min =INT16_MAX;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(min>a[i][j]){
//                 min=a[i][j];
//             }
//         }
//     }
//     cout<<"This is minimum value:"<<min;
// }


// // w.a.p to find the second largest value in the array
// #include<iostream>
// using namespace std;
// int main(){
//      int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     int max1,max2;
//     max1=max2=INT16_MIN;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(max1<a[i][j]){
//                 max2=max1;
//                 max1=a[i][j];
//             }
//             else if(a[i][j]>max2&a[i][j]<max1)
//             {
//                 max2=a[i][j];
//             }
//         }
//     }
//     cout<<max1<<"n"<<max2;
// }



// // w.a.p to find the transpose conceft of apply in max;
// #include<iostream>
// using namespace std;
// int main(){
//          int a[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter the number:";
//             cin>>a[i][j];
//         }
//     }
//     cout<<"OUtput"<<"\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//     }
//     cout<<"Data output:"<<"\n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<a[j][i]<<"\t";
//         }
//         cout<<"\n";
//     }
// }


// // second option of this question:
// #include<iostream>
// using namespace std;
// int main(){
//     int s=3;
//     int l=3;
//     cout<<"Enter the size of 1d array:"<<"\n";
//     cin>>s;
//     cout<<"Enter the size of second 2d index array:"<<"\n";
//     cin>>l;
//     cout<<"Enter the  "<<s*l<<" numbers";
//     int a[s][l]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<s;i++){
//         for(int j=0;j<l;j++){
//             cin>>a[i][j];
//         }
//     }

//     for(int i=0;i<s;i++){
//             for(int j=0;j<l;j++){
//                 cout<<a[i][j]<<"\t";
//             }
//             cout<<"\n";
//         }
//  cout<<"THis output is given your array:"<<"\n";   

//     if(s==l){
//         for(int i=0;i<s;i++){
//         for(int j=i;j<l;j++){
//             int temp =a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<"\n";
//         }
//     }
//     else{
//         cout<<"this is not a square form:";
//     }
//     cout<<"out"<<"\n";
//     for(int i=0;i<s;i++){
//             for(int j=0;j<l;j++){
//                 cout<<a[i][j]<<"\t";
//             }
//             cout<<"\n";
//      }
// }


// matrix multiplication 
   // #include<iostream>
// using namespace std;
// int main(){
//     int r = 0, c = 0, i=0, j=0;
//     cout << "Enter the no. of row of first matrix" << "\n";
//     cin >> r;
//     cout << "Enter the no. of column of first matrix" << "\n";
//     cin >> c;
//     cout << "Enter the no. of row of second matrix" << "\n";
//     cin >> i;
//     cout << "Enter the no. of column of second matrix" << "\n";
//     cin >> j;
//     if(c==i){
//         int a1[r][c];
//         int a2[i][j];
//         int ans[r][j];
//         int sum = 0;
//         cout << "Enter the " <<r*c<< " values of first matrix" << '\n';
//         for(int a=0; a<r; a++){
//             for(int b=0; b<c; b++){
//                 cin>>a1[a][b];
//             }
//         }
//         cout << "Enter the " <<i*j<< " values of second matrix" << '\n';
//         for(int a=0; a<i; a++){
//             for(int b=0; b<j; b++){
//                 cin>>a2[a][b];
//             }
//         }

//         cout << "the first matrix is :" << "\n";
//         for(int a=0; a<r; a++){
//             for(int b=0; b<c; b++){
//                 cout<< a1[a][b] << "\t";
//             }
//             cout << "\n";
//         }
//         cout << "the second matrix is: " << '\n';
//         for(int a=0; a<i; a++){
//             for(int b=0; b<j; b++){
//                 cout<<a2[a][b]<<"\t";
//             }
//             cout << "\n";
//         }
//         cout<<"Multiplication of two matrix is:"<<"\n";
//         for(int a=0; a<r; a++){
//             for(int b=0; b<j; b++){
//                 sum=0;
//                 for(int k=0; k<c; k++){
//                     sum = sum + a1[a][k]*a2[k][b];
//                     ans[a][b]=sum;
//                 }
//             }
//         }
//         for(int a=0; a<r; a++){
//             for(int b=0; b<j; b++){
//                 cout<<ans[a][b]<<"\t";
//             }
//             cout << "\n";
//         }
//     }
//     else{
//         cout << "invalid choice for doing matrix multiplication"<< "\n";
//     }
// }



// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
    // char is a constant
    // char c[5]; // 1byte for null value
    // c="amit"; // error because we cannot reinitialise char 
    // cout<< c;

    // in runtime we can give value more than its size because it will automatically build memory.

    // char name[20];
    // char srname[20];
    // cout<<strlen(name)<<"\n";
    // cout<<"Enter your name" << "\n";
    // cin>> name;
    //  cout<<"Enter your srname" << "\n";
    // cin>> srname;
    // cout<<strlen(name);
    // cout<< "uppercase = " << strupr(name)<<"\n";
    // cout<< "lowercase = " << strlwr(name)<<"\n";
    // cout << strcat(name,srname)<<'\n'; //string concatenation
    // cout<<"name = "<<name <<"srname = "<<srname << "\n";

    // cout << strcpy(name,srname)<<'\n'; //it will override name with surname
    // cout<<"name = "<<name <<"srname = "<<srname << "\n";

    // char pwd[20];
    // char repwd[20];
    // cout<<"Enter your pwd" << "\n";
    // cin>> pwd;
    // cout<<"Enter your repwd" << "\n";
    // cin>> repwd;
    // if(stricmp(pwd,repwd)==0)
    // {
    //     cout << "correct" <<"\n";
    // }
    // else{
    //     cout<< "incorrect"<<"\n";
    // }
    // cout << strrev(pwd);
    // if(strcmp(pwd,repwd)==0)
    // {
    //     cout << "correct" <<"\n";
    // }
    // else{
    //     cout<< "incorrect"<<"\n";
    // }

//     char ram[20];
//     char temp[20];
//     cout <<"enter the value" <<'\n';
//     cin >>ram;
//     strcpy(temp,ram);
//     cout<< strrev(ram)<<"\n";
//     // if(strcmp(strrev(ram),temp)==0) or
//     if(strcmp(temp,ram)==0){ 
//         cout <<"pallendrom" <<"\n";
//     }
//     else{
//         cout << "not a pallendrom" <<'\n';
//     }


// }
// w.a.p to check the given string is pallendrom or not
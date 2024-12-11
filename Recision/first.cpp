// What is Recision
// function call it self this is called a recision.

// there are two type of Recision
// 1.Head recision 
// 2.tail recision



// w.a.p to print the table in recision
// example of Head recision
// #include<iostream>
// using namespace std;
// void table(int a,int i){
//     if(i>10)
//     {
//         return ;
//     }
//      cout<<a*i<<"\t";
//      i++;
//     table(a,i);
   
// }
// int main(){
//     int a=3;
//     int i=1;
//     table(a,i);
// }



// // Tail recision 
// #include<iostream>
// using namespace std;
// void table(int a){
//     if(a<1)
//     {
//         return ;
//     }
//     table(a-1);
//       cout<<a<<"\t";
// }
// int main(){
//     int a=3;
//     table(a);
// }


// // w.a.p to factirol
// #include<iostream>
// using namespace std;
// int fact(int a,int i){
//     if(a<1){
//         return i;
//     }
//     i=i*a;
//     a=a-1;
//     fact(a,i);
// }


// int main(){
//     int a=4;
//     int i=1;
//     cout<<fact(a,i);
// }


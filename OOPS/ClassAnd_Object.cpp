// =>> objects are the real world entities or entities in real world. like teachers 
// =>> class is like a collection of objects or blue-print of these entities.
// =>> attributes / properties are the characteristics of objects like name, age, gender etc.
// =>> methods are the actions that can be performed by objects like run, jump etc. (inside class if we use function called as attributes)
// =>> class is a blueprint or template for creating objects.
// =>> data member.
// =>> member function.

// function defined inside the class.
//     class top1
//     {
//         int a=10,b=20;
//         public:int sum(){
//             return a+b;
//         }; // declare and defined inside the class
//     };
// function defined outside the class.
//     class top2
//     {
//         int a=10,b=20;
//         public:int sum();
//     };
//     int top2::sum(){
//         return a+b;
//     } // function declaared inside a class & but defined outside the class
//     int main(){
//         top1 pk;
//         cout<<pk.sum();
//         top2 t2;
//         cout<<t2.sum();
//     }
//     // function overloding in a class  
//         class top1
//     {
//         int a=10,b=20;
//         public:int sum(){
//            cout<<a+b<<"\n";
//         }
//         public void sum(int e, int m, int l){
//             cout<<e+m+l;
//         }
//     };
//     int main(){
//         top1 f;
//         f.sum();
//         f.sum(2,3,5);
//     }
//         // multiple function in a class 

//         // function - static and non static function

//         // static member function are the attribute of class
//         // non-static member function are the attribute of object

//         // static data member and static member function is a attribute of a class while non-static data member and non-static member function is
//         // an attribute of an object.
//         // NOTE: whenever we call static member function we do not need to create an object we can access 
//         // with the name of class by using scoperesolution operator.

//         // =>> single class: if a program having only one class is called single class.
//         // =>> multi-class: if a program having more than one classes is called multi-class.
//         // anonymous class does not have class name.

//         // =>> composite class: A class which holds the object of previous class and we call the function of previous class inside the member function of composite class.
//         //
















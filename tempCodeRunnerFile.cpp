 int a;
 cout<<"Enter the number :";

 cin>>a;
 int palindrom=a;
 int palSum=0;
 int first=0;
 int last=0;
 int counter=0;
 for(;a>0;a/=10;){
    int digit =a%10;
    counter++;
    palSum=palSum*10+digit;
    if(counter==1){
        last=digit;
    }
    first=digit;
 }
 if(palindrom==palSum){
    cout<<"palindrom no:"<<"\n";
 }
 else{
    cout<<"not palindrom number:"<<"\n";
 }
 cout<<"f"<<first<<"\n";
 cout<<"l"<<last<<"\n";
 cout<<first+last;


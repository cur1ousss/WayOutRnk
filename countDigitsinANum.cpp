#include<iostream>
using namespace std;
int main(){

//here datatype of initial num to check declared
// also decides aukat upto which can calciulate digits
// if int the lim digitis is 10
// if long int lim of digits is 19
// and so on
long int num;
cin>>num;
long int digits=0;
long int tmp=num;
if(tmp==0){         /// if condition not necessary probably
    digits=1;
}
else{

while(tmp!=0){
digits++;
tmp/=10;
}
}
cout<<"\n\n digits are "<<digits<<"\n\n";
return 0;
}


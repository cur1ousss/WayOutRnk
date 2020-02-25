#include<iostream>
using namespace std;
int main(){

//here again fail at number if 0 in between exmaple 20456


int num=0;
int rev=0;
cin>>num;
int tmp;
int flag=0;
while(true){
    
// earlier version was wrong since failed at 120 ending 0 numbers 
//since test condinto of breaking while lloop is at tmp==0
// therefore needed to add anohter flag to confirm exit

    tmp=num%10;
    if(tmp==0 && flag!=0){
        break;
    }
//cout<<"\n entered wgiue lioio";

//cout<<"\n reverse * 10 is "<<rev*10;
rev=rev*10+tmp;
num=num/10;
flag++;
}
cout<<"\n\n";
cout<<rev;
cout<<"\n\n";
return 0;
}
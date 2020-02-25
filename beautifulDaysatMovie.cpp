#include<iostream>
typedef unsigned long long int ull;
//#include<cmath>
//#include<math.h>
//#include<stdio.h>
//#include<cstdlib>
using namespace std;
int main(){

ull start;
cin>>start;
ull end;
cin>>end;
ull divisor;
cin>>divisor;
ull rev=0;
ull count=0;

for(ull i=start;i<=end;i++){

ull num=i;
ull rev=0;
//cin>>num;
ull tmp;
int flag=0;
cout<<"\n original; mnu,er is "<<num;   
 while(true){
    tmp=num%10;
    if(tmp==0 && flag>0){
        break;
    }
//cout<<"\n entered wgiue lioio";
rev=rev*10+tmp;
num=num/10;
flag++;
}
cout<<"\n reverse number is "<<rev;

// here whyy error in abs?????? thereorfer need to use or condition
    // SOlution to above is to use proper llabs or labs 
        //since abs funcitno is return type dependet on input type
if((llabs(i-rev))%divisor==0 || (rev-i)%divisor==0){
    cout<<"\n eevnly divisible pair is "<<i<<" and "<<rev;
    ++count;
}


}
cout<<"\n\n";
cout<<count;
    return 0;
}

/*
********************************************************************

CAVEAT in reversing number with zero in between thefore Starred Problem since teaches
somethin new 
//here again fail at number if 0 in between exmaple 20456




#include<iostream>
//#include<math.h>
using namespace std;
int main(){

unsigned long long int start;
cin>>start;
unsigned long long int end;
cin>>end;
unsigned long long int divisor;
cin>>divisor;
unsigned long long int rev=0;
unsigned long long int count=0;

for(unsigned long long int i=start;i<=end;i++){

unsigned long long int num=i;
unsigned long long int rev=0;
//cin>>num;
unsigned long long int tmp;
unsigned long long int flag=0;
//cout<<"\n original; mnu,er is "<<num;   
 while(true){
    tmp=num%10;
    if(tmp==0 && flag>0){
        break;
    }
//cout<<"\n entered wgiue lioio";
rev=rev*10+tmp;
num=num/10;
flag++;
}
//cout<<"\n reverse number is "<<rev;

// here whyy error in abs?????? thereorfer need to use or condition
if((i-rev)%divisor==0 || (rev-i)%divisor==0){
 //   cout<<"\n eevnly divisible pair is "<<i<<" and "<<rev;
    ++count;
}


}

cout<<count;
    return 0;
}*/
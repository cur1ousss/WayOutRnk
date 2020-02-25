#include<iostream>
#include<stdio.h>
using namespace std;
void convert(int n){

if(n<0)
    {
    cout<<"\n enterd <0";
    printf("%d",n);
    cout<<"\n exited <0";

    }
    else 
    {
        cout<<"\n entered else";
        convert(n/2);
        cout<<"\n below n/2 recursion";
        printf("%d",n%2);
        cout<<"\n below %2 print";
        cout<<"\n exited else";

    }


}
int main(){
    cout<<"\n eneterd main";
    convert(5);
    cout<<"\n end of main";

    return 0;
}
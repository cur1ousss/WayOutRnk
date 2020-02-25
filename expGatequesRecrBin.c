#include<iostream>
#include<stdio.h>
using namespace std;
void convert(int n){

if(n<0)
    printf("%d",n);
else 
    {
        convert(n/2);
        printf("%d",n%2);
    }


}
int main(){
    cout<<"\n eneterd main";
    convert(5);
    cout<<"\n end of main";

    return 0;
}
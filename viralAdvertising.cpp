#include<iostream>
using namespace std;
int main(){

int days;
cin>>days;
int initialpeople=5;
int nextpeople=0;

int prevpeople=initialpeople;
int sum=0;


for(int i=1;i<=days;i++){

nextpeople=(prevpeople/2);
sum=nextpeople+sum; 
prevpeople=sum*3;

}
cout<<sum;

return 0;
}
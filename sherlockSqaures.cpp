#include<iostream>
using namespace std;

int main(){

int testcases;

unsigned long int start,end;
int tmp=1;

cin>>testcases;

int ans[testcases];

while(tmp<=testcases){

    cin>>start>>end;

    for(unsigned long int i=start;i<=end;i++){

        int count=0;

        for(unsigned long int x=2;x<=i;x++){
            if(i/x==x)
                ans[tmp]=++count;            
        }

    }
    tmp++;
}


for(int i=0;i<testcases;i++)
    cout<<ans[i]<<"\n";

    return 0;
}
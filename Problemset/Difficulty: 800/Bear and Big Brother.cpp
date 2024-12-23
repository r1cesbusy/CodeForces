#include<iostream>

using namespace std;

int main(){
    int b,bb; cin>>b>>bb;

    int flag=0;
    
    while(1)
    {
        flag++;
        b*=3;
        bb*=2;
        if(b>bb) break;
    }

    cout<<flag<<endl;
}
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n; cin>>n;

    int sum=0;
    for(int i=0; i<n; ++i)
    {
        string str;
        cin>>str;
        if(str[1]=='+') sum++;
        else if(str[1]=='-') sum--;
        else return 0;
    }
    
    cout<<sum<<endl;
}

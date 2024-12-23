#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string simplify(string str){
    int n=str.size()-2;
    string sstr;
    sstr+=str[0];
    stringstream ss;
    ss<<n;
    string temp;
    ss>>temp;
    sstr+=temp;
    sstr+=str[n+1];
    return sstr;
}

int main(){
    int n; cin>>n;
    for(int i=0; i<n; ++i)
    {
        string temp; cin>>temp;
        if(temp.size()>10)  cout<<simplify(temp)<<endl;
        else cout<<temp<<endl;
    }
}

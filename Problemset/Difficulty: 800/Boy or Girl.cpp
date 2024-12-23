#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
    string id; cin>>id;
    set<char> namecount;
    for(int i=0; i<id.size(); ++i)
    {
        namecount.insert(id[i]);
    }
    if(namecount.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
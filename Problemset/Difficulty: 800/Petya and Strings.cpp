#include<iostream>

using namespace std;

int counter_string(string word){
    int sum=0;
    for(int i=0; i<word.size(); ++i)
    {
        if(word[i]>='A'&&word[i]<='Z') sum+=word[i]+32;
        else sum+=word[i];
    }
    return sum;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int sum1,sum2;
    sum1=counter_string(str1);
    sum2=counter_string(str2);

    if(sum1>sum2) cout<<1<<endl;
    else if(sum1<sum2) cout<<-1<<endl;
    else cout<<0<<endl;
}
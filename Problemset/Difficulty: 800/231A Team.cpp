//231A Team
#include<iostream>

using namespace std;

int main(){
    int n,flag=0; cin>>n;

    int issue[n];
    for(int i=0; i<n; ++i)
    {
        int x,y,z;
        cin>>x>>y>>z;
        issue[i]=x+y+z;

        if(issue[i]>=2) flag++;
    }

    cout<<flag<<endl;
}

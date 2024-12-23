//158A Next Round
#include<iostream>

using namespace std;

int main(){
    int n,k; cin>>n>>k;
    int sum=0;

    int scores[n];

    for(int i=0; i<n; ++i)
    {
        cin>>scores[i];
        if(scores[i]==0) sum++;
        if(i>k-1)
        {
            if(scores[i]<scores[k-1]&&scores[i]!=0) sum++;
        }
    }

    cout<<n-sum<<endl;

}

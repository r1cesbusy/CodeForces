//263A Beautiful Matrix
#include<iostream>

using namespace std;

int main(){
    int matrix[5][5];

    int l,r;

    for(int i=0; i<5; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            int num; cin>>num;
            if(num==1)
            {
                l=i+1;
                r=j+1;
            }
        }
    }

    int dl,dr;
    l>3?dl=l-3:dl=3-l;
    r>3?dr=r-3:dr=3-r;

    cout<<dl+dr<<endl;
}

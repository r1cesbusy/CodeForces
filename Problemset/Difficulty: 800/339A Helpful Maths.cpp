//339A Helpful Maths
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
    string word;cin>>word;

    vector<int> nums;

    for(int i=0; i<word.size(); i+=2)
    {
        nums.push_back(word[i]-'0');
    }

    sort(nums.begin(),nums.end());

    for(int i=0; i<nums.size()-1; ++i)
    {
        cout<<nums[i]<<"+";
    }

    cout<<nums[nums.size()-1]<<endl;
}

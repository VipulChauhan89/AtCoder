#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<char,int> m;
    int freq=0;
    string s;
    cin>>s;
    char ans=s[0];
    for(auto i:s)
    {
        m[i]++;
    }
    for(auto i:m)
    {
        if(i.second>freq)
        {
            ans=i.first;
            freq=i.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}

#include<iostream>
using namespace std;
bool check(char c)
{
    return (c>='A' && c<='Z');
}
int main()
{
    string s,ans="Yes";
    cin>>s;
    if(!check(s[0]))
    {
        ans="No";
    }
    for(int i=1;i<s.length();i++)
    {
        if(check(s[i]))
        {
            ans="No";
        }
    }
    cout<<ans<<endl;
    return 0;
}

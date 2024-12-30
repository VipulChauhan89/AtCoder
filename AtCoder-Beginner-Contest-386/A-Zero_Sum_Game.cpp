#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,num,sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>num;
        sum+=num;
    }
    cout<<sum*-1<<endl;
    return 0;
}

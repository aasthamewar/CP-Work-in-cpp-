#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int xc,yc,k,ans1,ans2;
    int totalsum=0;
    cin>>xc>>yc>>k;


    for(int i=0;i<k;i++)
    {
       ans1=xc+i;
       ans2=yc+i;
    }
    cout<<ans1<<" "<<ans2<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

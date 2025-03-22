#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int ans1=n/10;
    int ans2=n%10;
    cout<<ans1+ans2<<endl;

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

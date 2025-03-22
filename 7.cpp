#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k,x;
    cin>>n>>k>>x;
    long long minsum = k*(k+1)/2;
    long long maxsum = n*(n+1)/2-(n-k)*(n-k+1)/2;
    if(minsum>x || x>maxsum)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

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

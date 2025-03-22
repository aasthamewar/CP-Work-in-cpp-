#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    int count=0,g=0,x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
        else
        {
         g=max(g,count);
         count=0;
        }

    }

    cout<<max(g,count)<<endl;

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

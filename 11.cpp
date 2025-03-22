#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int> a(n);
   int evennum=1,oddnum=0;
   int ans;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<=n-2;i++)
   {
           if(a[0]%2!=0 || a[i+1]%2==0)
           {
               evennum++;
               ans=evennum;
           }
           else
           {
               ans=0;

           }
   }
   cout<<ans<<endl;

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

#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int a1,a2,a4,a5;
   cin>>a1>>a2>>a4>>a5;
   vector<int> ans;

   //possible answer for a3
   int cndidate[]={a1+a2,a4-a2,a5-a4};
   int maxi=0;

   for(int a3:cndidate)
   {

       int cnt=0;
       if(a1+a2==a3)
       {
           cnt++;
       }
       if(a2+a3==a4)
       {
           cnt++;
       }
       if(a3+a4==a5)
       {
           cnt++;
       }

       maxi=max(maxi,cnt);
   }
   ans.push_back(maxi);

   for(int res:ans)
   {
       cout<<res<<endl;
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

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     int a=INT_MAX;
     for(int i=0;i<n;i++)
     {
         if(arr[i]<a)
         {
             a=arr[i];
         }
     }
     if(arr[0]==a)
     {
       cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
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

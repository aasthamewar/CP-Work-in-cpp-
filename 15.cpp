#include <bits/stdc++.h>
using namespace std;
//Q1
/*
long long t,n,k,cnt,i,b[1000],x;
int main(){
cin>>t;
while(t--){
cin>>n;
cnt=0;
for(i=1;i<=n;i++){
cin>>x;
if(x==2){b[cnt+1]=i;cnt++;
}
}
if(cnt==0){cout<<1<<endl;continue;
}
printf("%lld\n",cnt%2?-1:b[cnt/2]);
}return 0;
}
*/

//Q2
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{int n,x,y;
cin>>n;
while(n--)
{cin>>x>>y;
y<-1?cout<<"NO"<<endl:cout<<"YES"<<endl;}
return 0;
}

*/

void solve()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>9)
    {
        ans=ans+9;
        n=n/10;
    }
    ans=ans+n;
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


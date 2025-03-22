#include<bits/stdc++.h>
using namespace std;

void solve()
{

    long long a,b,c;
    cin>>a>>b>>c;
    bool found=false;
    if((a+b+c)%2==0)
    {
         found=true;
    }
    else
    {
      found=false;
    }
    if(found==true)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"First"<<endl;
    }
}

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
       solve();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int smallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        smallest=min(smallest,abs(a[i]));
    }

  cout<<smallest<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        cout<<1+(n-1)*k<<endl;
    }

    return 0;
}

*/

/*
int main()
{
    int t;cin>>t;

    while(t--)
    {
        long long n;cin>>n;
        if(n==3)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}


*/

/*

void solve()
{
   long long int x;
   cin>>x;
   int flag=1;
   while(x>=10)
   {
       int digit = x%10;
       if(flag==1)
       {
         flag=0;
         if(digit>8)
         {
            cout<<"NO"<<endl;
            return;
         }
       }
       else if(digit==0)
       {
           cout<<"NO"<<endl;
           return;
       }
       else
       {
           cout<<"YES"<<endl;
           return;
       }

       x/=10;
   }
      if(x==1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
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

*/
/*

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> prime;
    for(int i=2;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)
            {
                cnt++;
                if(i/j!=j)
                {
                    cnt++;
                }
            }
        }
        if(cnt==2)
        {
            prime.push_back(i);
        }
    }
    int ans=0;
    int m=prime.size();
    for(int i=0;i<m-1;i++)
    {
        int temp=prime[i]+prime[i+1]+1;
        bool flag=false;
        for(int j=0;j<m;j++)
        {
            if(prime[j]==temp)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            ans++;
        }
    }
    if(ans>=k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}

*/
/*
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
       cout<<n/2<<endl;

    }
}

*/

/*

int main()
{
    int t;cin>>t;
    while(t--)
    {
         int l,r,k;
    cin>>l>>r>>k;
    if(l == 1 && r == 1)
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(l == r)
    {
        cout<<"YES"<<endl;
        continue;
    }
    if(l%2)
    {
        if(k>= (r-l+2)/2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        if(k>=(r-l+1)/2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    }

    return 0;
}


*/

/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int odd=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2!=0)
            {
                odd++;
            }
        }
        int ans=INT_MAX;
        if(odd%2==0)
        {
            cout<<"0"<<endl;
        }
        else{

            for(int i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                {
                    int count=0;
                    while(arr[i]%2==0)
                    {
                        count++;
                        arr[i]/=2;
                    }
                    ans=min(ans,count);
                }
                else
                {
                    int count=0;
                    while(arr[i]%2!=0)
                    {
                        count++;
                        arr[i]/=2;
                    }
                    ans=min(ans,count);
                }
            }
            cout<<ans<<endl;


        }


    }
    return 0;
}

*/


/*

int main(){int t;cin>>t;
while(t--){
	int l,r;cin>>l>>r;int i;
	for( i=1;i*(i-1)<=2*(r-l);i++){

	}cout<<--i<<endl;

}
return 0;
}

*/

/*
int main()
{
int t,a,b,n;
cin>>t;
while(t--){
cin>>n;
for(a=2,b=n-3;__gcd(a,b)!=1;a++,b--){}
cout<<a<<' '<<b<<' '<<1<<'\n';

}
return 0;
}

*/
/*
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<6-x-y<<endl;
    return 0;
}

*/

/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int robinGold = 0;  // Robin starts with 0 gold
        int ans = 0;        // Count of people Robin gives gold to

        for (int i = 0; i < n; ++i) {
            if (arr[i] >= k) {
                robinGold += arr[i];  // Robin takes gold if it's >= k
            } else if (arr[i] == 0 && robinGold > 0) {
                ans++;        // Robin gives gold to this person
                robinGold--;  // Decrease Robin's gold by 1
            }
        }

        cout << ans << endl;

    }

    return 0;
}

*/

/*
int solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long maxWealth = 0;
    long long TotalWealth = 0;

    for (int i = 0; i < n; i++) {
        TotalWealth += arr[i];
        maxWealth = max(maxWealth,static_cast<long long> (arr[i]));
    }

    double avgWealth = static_cast<double>(TotalWealth) / n;

    // Count initial unhappy people
    int unhappy = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < (1.0 / 2) * avgWealth) {
            unhappy++;
        }
    }

    // Check if more than half are unhappy
    if (unhappy <= n / 2) {
        return 0; // No need to add gold
    }

    // Start increasing x
    int x = 0;
    while (true) {
        x++;
        long long newMaxWealth = maxWealth + x;
        long long newTotalWealth = TotalWealth - maxWealth + newMaxWealth;
        double newAvgWealth = static_cast<double>(newTotalWealth) / n;

        // Count unhappy people again
        int newUnhappyCount = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < (1.0 / 2) * newAvgWealth) {
                newUnhappyCount++;
            }
        }

        // Check if fewer than half are unhappy
        if (newUnhappyCount < n / 2) {
            return x; // Found minimum x
        }

        // Break condition to prevent infinite loop
        if (x > 1000000) {
            break;
        }
    }

    return -1; // If it's impossible
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl; // Print the result of each test case
    }
    return 0;
}

*/

/*
void solve()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    if(a%b==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<b-(a%b)<<endl;
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

*/
/*

int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
cout<<a[n/2]<<endl;
}
}

*/

/*
int main()
{
	long long int t,n,a=0;cin >> t;
	while(t--){
	    cin >> n;a=0;
		while(n%6==0) {n/=6;a++;}
		while(n%3==0) {n/=3;a+=2;}
		if(n!=1) a=-1;cout << a << '\n';
    }
    return 0;
}

*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            sum+=max(arr[i])-min(arr[i]);
        }
        cout<<sum<<endl;

    }
    return 0;
}














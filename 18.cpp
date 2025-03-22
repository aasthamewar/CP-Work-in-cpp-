#include<bits/stdc++.h>
using namespace std;

//Q1
/*
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(n==2 && abs(arr[0]-arr[1]) > 1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}

*/
//-------------------------------------------------------------------------------------
//Q2
/*
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int cnt=1;
		int a, b, c, d; cin >> a >> b >> c >> d;
		for(int i=min(a, c); i<=max(b, d); i++){
			if(a<=i&&i<=b&&c<=i&&i<=d) cnt++;
		}
		if(a==c) cnt--;
		if(b==d) cnt--;
		cout << cnt << "\n";

    }


    return 0;
}
*/
//---------------------------------------------------------------------------------------
// GCD RELATED PROBLEM
/*
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(__gcd(a[i],a[j])<=2)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
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
//---------------------------------------------------------------------------------------
// FIND NEAREST NO
/*
int main()
{
    int n;
    cin>>n;
    int v1=n%5;
    int v2=5-(n%5);
    if(v1>v2)
    {
        cout<<n+v2<<endl;
    }
    else{
        cout<<n-v1<<endl;
    }

    return 0;
}

*/
//----------------------------------------------------------------------------------------------
// TRICKY QUESTION ONLY PRINT LAST TWO DIGIT OF 5^N
/*
int main()
{
    int n;
    cin>>n;
    cout<<"25"<<endl;
    return 0;
}
*/

//----------------------------------------------------------------------------------------------

/*int t,n,i,j,x,a[102];

int main(){

     cin >>t;
     while(t--){
      cin >>n;

    for(i=0;i<=100;i++)a[i]=0;
    while(n--)cin >>x,a[x]++;

   for(i=0;a[i]>1;i++);
   for(j=i;a[j]>0;j++);
   cout<<(j+i)<<"\n";

}
return 0;
}
*/
//-----------------------------------------------------------------------------
/*
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    int ans;
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            count++;
            ans=count;
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[i]<=arr[j])
            {
                count++;
                ans=count;

            }
            if(arr[i]>arr[j])
                {
                    count--;
                    ans=count;
                }


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
*/
//------------------------------------------------
/*
int main ()
{
    int k,s;
    cin>>k>>s;
    int count=0;
    int ans;
    for(int x=0;x<=s;x++)
    {
      for(int y=0;y<=s;y++)
      {
          for(int k=0;k<=s;k++)
          {
              if(x+y+k==s)
              {
                  count++;
                  ans=count;
              }
          }
      }

    }
    cout<<ans<<endl;

}

*/

/*
#define ll long long int
int main(){
 ll t;cin>>t;
 while(t--){
 ll n;
cin>>n;
 vector<ll>v(n);
 for(ll i=0;i<n;i++)cin>>v[i];
 ll i=0,cnt=0;
 while(v[i]==0)i++;
 for(ll j=i;j<n-1;j++){
  cnt=(v[j]==0)?cnt+1:cnt+v[j];
 }
cout<<cnt<<endl;
 }
}
*/


/*
void solve(){
	int n, k;
	cin >> n >> k;
	bool b= false;
	while(n--)
	{
		int l;
		cin >> l;
		if(l==k) b=true;
	}
	cout << (b?"YES":"NO") <<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

*/

/*
void solve()
{
   long long int a,b,c,d;
   cin>>a>>b>>c>>d;
  if(a>b)
  {
      swap(a,b);
  }
  if(c>d)
  {
      swap(c,d);
  }
  long long int count =0;
  count+=(a<c && c<b);
  count+=(a<d && d<b);
  cout<<(count==1?"YES" : "NO")<<endl;
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
void solve()
{
    int x;cin>>x;
    string s;
    cin>>s;
    bool found=false;
   if(s[0]==s[x-1])
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
    while(t--){
        solve();
    }
    return 0;
}
*/


/*


int main()
{
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // Check if the sum a + 2*b is even
        if ((a + 2 * b) % 2 == 0) {
            int target = (a + 2 * b) / 2;

            // Check if it is possible to reach the target sum with the given a and b
            if (target >= 0 && target <= 2 * b && target % 2 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

*/

/*
void solve()
{
    int n;
    cin>>n;
    int count=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(n%2==0 && arr[i]!=0)
        {
            cout<<"YES"<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        int start=0;int end=n-1;
        int mid=(start+end)/2;
        while(start<=end)
        {
            if(arr[mid]==0)
            {
                count=arr[mid];
                if(count==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }

        }

    }
    cout<<count<<endl;
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
    int t;cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout << ((a > 0 && a % 2 == 0) || (a== 0 && b % 2 == 0) ? "YES" : "NO") << '\n';
    }
}

*/

//lexicographically QUESTION

int main()
{
    string s;
    cin>>s;
    bool swapped = true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            if(s[i]==s[i+2])
            {
                swapped=true;
                swap(s[i+1],s[i+2]);
            }
            else
            {
                i++;
            }
        }
    }
    if(swapped==true)
    {
        cout<<swapped<<endl;
    }

    return 0;
}








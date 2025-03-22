#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s[0]='m';
    int z=1;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]!=s[i-1])
       {
         if(s[i-1]=='M'||s[i-1]=='m')
         {
           if(s[i]!='o'&&s[i-1]!='O')
           {
               z=0;
           }
         }
       }
       else
       {
           z=1;
       }
    }

    if(z==1)
    {
        cout<<"no"<<endl;
    }
    else
    {
        cout<<"yes"<<endl;
    }

}

     return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            count++;
        }
    }

    // Count last element with first (circular array condition)
    if (arr[0] < arr[n - 1]) {
        count++;
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_len = 1, curr_len = 1;

    // Consider the cyclic nature by extending the array logically
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) {
            curr_len++;
        } else {
            max_len = max(max_len, curr_len);
            curr_len = 1;
        }
    }

    // Check the cyclic condition: last element with the first
    if(arr[n - 1] <= arr[0]) {
        curr_len++;
    }

    max_len = max(max_len, curr_len);

    // Minimum operations needed to make all elements equal
    int min_ops = n - max_len;
    cout << min_ops << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
*/

/*
int main()
{
    int n;cin>>n;
    if(n<10)
    {
        cout<<"1"<<endl;
        return 0;
    }
   int x=n,p=1;
   while(x>=10)
   {
       x /=10;
       p *= 10;

   }

  p *= (x+1);
 cout<<p-n<<endl;
    return 0;
}

*/
//FIND COMPOSITE NO IN WHICH(A-N)=N
/*
int main()
{
    int n;
    cin>>n;
    cout<<9*n<<" "<<8*n<<endl;
    return 0;
}
*/
/*
int main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int j=n-1;j>=0;j--)
    {
        sum+=arr[j];
        if(sum>n)
        {
            cout<<sum<<endl;
            break;
        }
        else if(sum<=n)
        {
            cout<<1<<endl;
            break;
        }
        else
        {
            cout<<sum-1<<endl;
            break;
        }
        cout<<sum<<endl;
        break;
    }



    return 0;
}


*/
/*
int main()
{

    int year,a,b,c,d,ans;
    cin>>year;
    while(1)
    {
        year++;
        ans=year;
        a=year%10;
        year=year/10;
        b=year%10;
        year=year/10;
        c=year%10;
        year=year/10;
        d=year%10;
        year=year/10;
        if(a!=b && a!=c && a!=d && b!=d && b!=c)
        {
            cout<<ans<<endl;
            break;
        }
        year=ans;
    }
*/
/*
    int n,a,b,e,d;cin>>n;
    do n++,a=n/1000,b=(n/100)%10,e=(n/10)%10,d=n%10;
    while(a==b||a==e||a==d||b==e||b==d||e==d);
    cout<<n;
    return 0;
}

*/
/*

void solve() {

    int n,k;cin>>n>>k;
    string s;cin>>s;
    int cnt=n;
    for(int i=0;i<n-1;i++)
    {
        string x;cin>>x;
        for(int j=0;j<k;j++) {
            if (x[j] != s[j]) {
                cnt--;
                break;
            }
        }
    }
    cout<<cnt<<endl;


}
int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}



*/

/*
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        x=max(x,arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=x-arr[i];
    }

  cout<<ans<<endl;

    return 0;
}


*/
/*

int main()
{
    string s;
    cin>>s;
    if(s[0]+s[1]!=4 || s[0]+s[1]!=7 || s[0]+s[1]!=7 || s[0]+s[1]!=4)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}

*/
/*
void solve()
{
    long long int n;cin>>n;
    while(n%2==0)
    {
      n=n/2;
    }
    if(n==1)
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

*/

/*
int main()
{
    int l;cin>>l;
   if(l%4==0||l%7==0||l%47==0||l%74==0 || l%477==0)
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

void solve()
{
    int a,b;
    cin>>a>>b;
    int c = a*a-b*b;
    bool found=false;
    for(int i=0;i*i<=c;i++)
    {
        if(c%i==0)
        {
            found=true;
        }
    }
    if(found==true)
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
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}

*/

/*

typedef long long ll;
int main()
{
    ll n,a,b;
    cin>>n>>a>>b;

    long long int x = -1, y;

    for(int y=0;y<=n;y++)
    {
        if( (n - y * b)%a == 0 && n - y * b >= 0 )
        {
          x=(n - y * b)/a;
          break;
        }
    }

    if(x == -1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<y<<" "<<x<<endl;
    }


    return 0;
}

*/

/*

int main()
{
    long long int t;cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int c = a*a - b*b;
        bool flag = false;
        for(int i=2;i<c;i++)
        {
            if(c%i==0)
            {
                flag=true;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}


*/

/*
int main(){
	int n,t,a;
	cin>>t;
	while(t--){
		cin>>n;
		set<int> b;
		while(n--){
			cin>>a;
			while(a%2==0){
				b.insert(a);
				a=a/2;
			}
		}
		cout<<b.size()<<endl;
	}
}

*/

/*

long long is_prime(long long x) {
    for(long long div = 3; div * div <= x; div += 2) {
        if(x % div == 0) {
            return false;
        }
    }
    return true;
}

main() {


    int T;
    for(cin >> T; T --> 0;) {
        long long a, b, c;
        cin >> a >> b;
        cout << ((a^b)&1 && a - b == 1 && is_prime(2 * a - 1) ? "YES" : "NO") << '\n';
    }
}
*/

/*
void solve()
{
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long sum=0,mx=0,c=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        sum+=arr[i];
        if((sum-mx)==mx)
        {
            c++;
        }
    }

    cout<<c<<endl;
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
    long long n;
    cin>>n;

    map<string,long long> m;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(m.find(s)!=m.end())
        {
            m[s]++;
            cout<<s<<m[s]<<endl;
        }
        else
        {
            cout<<"OK"<<endl;
            m[s]=0;
        }
    }



    return 0;
}

*/


// int main()
// {

//     int n,ans=0;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     map<int,int> c;
//     for(int i=0;i<n;i++)
//     {
//         c[arr[i]]++;
//         ans=max(ans,c[arr[i]]);
//     }

//     cout<<ans<<endl;

// }
/*
int main()
{ string s;
cin>>s;
for(int i=0;i<s.length();i++)
s[i]=tolower(s[i]);
for(int i=0;i<s.length();i++)
if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='o'||s[i]=='e'||s[i]=='y')
continue;
else
cout<<"."<<s[i];
    return 0;
}
*/


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        cout<<"0 0 "<<min(x,y)<<' '<<min(x,y)<<'\n';
		cout<<"0 "<<min(x,y)<<' '<<min(x,y)<<" 0\n";
    }
    return 0;
}
















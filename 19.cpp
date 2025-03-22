#include<bits/stdc++.h>
using namespace std;
/*
void solve()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+arr[i+1]==arr[i+2])
        {
            swap(arr[i+1],arr[i+2]);
            found=true;
        }
        else
        {
            found = false;
        }
    }
    if(found==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    cout<<endl;
    if(found==true)
    {
        vector<int> new_arr(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            cout<<new_arr[i];
        }
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
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	bool found=false;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==k)
	    {
	        found=true;
	        break;
	    }
	    else
	    {
	        found=false;
	    }
	}
	if(found==true)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
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
    string s;
    cin>>s;
    int total_count_of_emptycell=0;
    int current_count_of_emptycell=0;
    int flag=0;
    for(int i=0;i<n;i++)                    //for(auto ch:s)
    {
        if(s[i]=='.')
        {
            current_count_of_emptycell++;
        }
        else
        {
            total_count_of_emptycell+=current_count_of_emptycell;
            if(current_count_of_emptycell>=3)
            {
                cout<<2<<endl;
                flag=1;
                break;
            }
            current_count_of_emptycell=0;
        }
    }
    if(flag==0)
    {
        if(current_count_of_emptycell>=3)
        {
            cout<<2<<endl;
        }
        else
        {

        total_count_of_emptycell+=current_count_of_emptycell;
        cout<<total_count_of_emptycell<<endl;
        }
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
//21 HOURS FORMAT
/*
int main()
{int K;
    cin >> K;

    int base_hour = 21;
    int base_minute = 0;

    // Total minutes after midnight
    int total_minutes = base_hour * 60 + base_minute + K;

    // Calculate new hour and minute
    int new_hour = (total_minutes / 60) % 24;
    int new_minute = total_minutes % 60;

    // Print the time in HH:MM format
    cout << setfill('0') << setw(2) << new_hour << ":"
         << setfill('0') << setw(2) << new_minute << endl;


    return 0;
}

*/

/*
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int no_operation=0;

    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
             if(arr[n][n]<2)
             {
                no_operation=1;
             }
            if(arr[i][j]!=arr[j][i])
             {
                arr[j][i]=1;
                no_operation++;
             }
            else
             {
                no_operation=0;
             }
        }
     }
cout<<no_operation<<endl;

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
    int l,r,a,b,c;
    cin>>l>>r;
    int count=0;
    for(int i=l;i<=r;l++)
    {

        if((a!=b && a!=c && b!=c) && (a%b!=0 || a%c!=0 || c%b!=0))
        {
            count++;
        }
    }
    cout<<count<<endl;

}

int main ()
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
void repeater()
{
	int n;cin >> n;

	string s;cin >> s;

	int cnt = count(s.begin(), s.end(), '1');

	if(cnt % 4 == 0 && (cnt / 4 + 1) * (cnt / 4 + 1) == n) cout << "Yes\n";
	else cout << "No\n";
}

int main()
{


	int t; cin >> t;
	while(t--) repeater();

	return 0;
}

*/
/*

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n, vector<char>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }



    int ans;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            if(grid[i][j]=='#')
            {
                ans=j+1;
            }
        }

    }
    if (ans != -1) {
            break;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans;
        }

    }


}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

*/

/*
#define int long long
const int N=1e6;
int t,n,A[N],s;
pair<int,int>p[N];
signed main()
{
cin>>t;
while(t--&&cin>>n)
{
for(int i=1;i<=n;i++)
cin>>p[i].first,p[i].second=i;
sort(p+1,p+n+1),s=0;
for(int i=1;i<=n;i++)
A[p[i].second]=pow(-1,i&1)*(n-i+2)/2,s+=2*abs(A[p[i].second])*p[i].first;
cout<<s<<'\n';
for(int i=0;i<=n;i++)
cout<<A[i]<<' ';
cout<<'\n';
}
return 0;
}

*/

/*
string s[5000];
void solve(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=n;i>=1;i--){
		cout<<s[i].find("#")+1<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  for(int j=0;j<m;j++)
  {
    cin>>b[j];
  }
  bool flag=false;
  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++)
    {
      if(a[i]==b[j])
      {
        flag=true;
        a[i]=-1;
        break;
      }
    }
  }
  if(flag==true)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}



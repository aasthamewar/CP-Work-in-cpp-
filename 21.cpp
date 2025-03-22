#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int n;
    cin>>n;
    vector<long long int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int ans=1;
    const long long LIMIT = 1e18;  // The limit for the result
    for(int i=0;i<n;i++)
    {
        //if any no is zero , the ans is 0
        if(arr[i]==0)
        {
            cout<<0<<endl;
            return 0;
        }

        //check for overflow before multiplication
        if(ans>LIMIT/arr[i])
        {
            cout<<-1<<endl;
        }
        ans*=arr[i];
    }

    if(ans<=LIMIT)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
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
       int n,a,mn = 10000005,
		sum=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		cin>>a,mn=min(mn,a),sum+=a;

		cout<<sum-mn*n<<endl;
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=arr[i-1])
            {
                flag=1;
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

}

*/

/*

int main()
{
    int n;
    cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    int sum1=0,sum2=0;
    int flag=0;

    //sum of first 'n' element
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i];
    }

    //sum of last 'n' element
    for(int j=n;j<2*n;j++)
    {
        sum2+=arr[j];
    }

    //check if sum1 is equal to sum2

    if(sum1!=sum2)
    {
        for(int i=0;i<2*n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
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
      long long n;
      cin>>n;
      vector<long long> arr(n);
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }

      long long alicesum=0;
      long long bobsum=0;

      sort(arr.begin(),arr.end());
      reverse(arr.begin(),arr.end());

      //alice turns is first

      string turn ="A";

      for(int i=0;i<n;i++)
      {
         if(turn == "A")
         {
             if(arr[i]%2==0)
             {
                 alicesum+=arr[i];
             }
             turn = "B";
         }
         else
         {
             if(arr[i]%2!=0)
             {
                 bobsum+=arr[i];
             }
             turn = "A";
         }
      }

      if(alicesum>bobsum)
      {
          cout<<"Alice"<<endl;
      }
      else if(alicesum==bobsum)
      {
          cout<<"Tie"<<endl;
      }
      else
      {
          cout<<"Bob"<<endl;
      }


    }
    return 0;
}

*/

/*
int main()
{int t;
cin>>t;
while(t--){
  int n,k;
 cin>>n>>k;
vector<vector<long long int>> v(n, vector<long long int>(k));
for(int i=0;i<n;i++){
  for(int j=0;j<k;j++){
    cin>>v[i][j];
  }

}
long long int sum=0;

if(n==1){
  cout<<0<<endl;
}else{
for(int i=0;i<k;i++){
  vector<long long int> c(n);
  for(int m=0;m<n;m++){
    c[m]=v[m][i];
  }
  sort(c.begin(),c.end());
  for(int j=0;j<n/2;j++){
    long long int l=(n-1-(2*j))*(c[n-j-1]-c[j]);
    sum=sum+l;
  }
}
cout<<sum<<endl;}
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
        string s;
        cin>>s;
        int n=s.size();

        vector<int> arr(26,0);
        for(int i=0;i<n;i++)
        {
            arr[s[i]-'a']++;
        }

        int cnt1=0,cnt2=0;

        for(int i=0;i<26;i++)
        {
            //checking freq of the letter coming once in a word
            if(arr[i]==1)
            {
              cnt1++;
            }
            else if(arr[i]>=2)
            {
                cnt2++;
            }
        }

        int ans=cnt2+cnt1/2;
        cout<<ans<<endl;
    }


    return 0;
}

*/

/*
void solve()
{

    int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        //sort the array
        sort(a,a+n);
        //single candy in picture
        if(n==1)
        {
            if(a[0]>1)
            {
                cout<<"NO"<<endl;
                return ;
            }
            else
            {
                cout<<"YES"<<endl;
                return;
            }
        }

        //candies more than 1
        if(a[n-1]-a[n-2]>1)
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
// function to find the longest common prefix
int longest_common_prefix(const string &x,const string &y)
{

   // finding common prefix
   int min_len= min(x.size(),y.size());
   for(int i=0;i<min_len;i++)
   {
       if(x[i]!=y[i])
       {
           return i;
       }
   }
   return min_len; //the entire shorten string is a common prefix


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string x,y;
      cin>>x>>y;


      //find the length of the longest common prefix
      int k=longest_common_prefix(x,y);

      //calculate the min time
      int result=k+1+(x.size()-k)+(y.size()-k);

      cout<<result<<endl;
    }
    return 0;
}

*/
/*
int largestPower(int n,int k)
{
    int res=1;
    while(res*k<=n)
    {
        res=res*k;
        return res;
    }
}

int main()
{

    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,k;
        cin>>n>>k;
        if(k==1)
        {
            cout<<n<<endl;
        }
        else
        {
          int cnt=0;
          while(n>=k)
          {
              n-=largestPower(n,k);
              cnt++;

          }
          cout<<cnt+n<<endl;
        }
    }
}
*/

/*
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int flag = 1;
        for (int i = 0; i < n - 1; i++) {  // Loop up to n - 1 to avoid out-of-bounds access
            if (abs(arr[i] - arr[i + 1]) == 5 || abs(arr[i] - arr[i + 1]) == 7) {
            }
            else {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

*/


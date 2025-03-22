#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int mini=arr[0];
        int maxi=arr[0];
        int sum=0;
        int ans;

        for(int i=0;i<n;i++)
        {
            if(n==1)
            {
                ans=0;
            }

            else{
            //updating the mini and maxi value
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);

            //add the difference
            sum+=(maxi-mini);
            }

        }
        if(ans==0)
        {
        cout<<"0"<<endl;
        }
        else
        {
            cout<<sum+1<<endl;
        }
    }

}

*/

/*
void solve(){
    int n;
    cin>>n;
    int c=0,a;
    for(int i=0;i<2*n;i++){
        cin>>a;
        c+=a;
    }
    cout<<c%2<<" "<<min(c,2*n-c)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}

*/
/*
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int  l,r,k;
        int cnt=0;
        cin>>l>>r>>k;
        for(int i=l;i<=r;i++)
        {
            long long int multiples=(r/i)-((l-1)/i);

            if(multiples>=k)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}

*/
/*
void solve(){
	int n,a,b;
	bool flag=0;
	cin >> n >> a >> b;
	string s;
	cin >> s;
	int x=0,y=0;
	for(int p=1;p<=100;p++)
	for(int i=0;i<n;i++){
		if(x==a&&y==b) flag=1;
		if(s[i]=='N') y++;
		if(s[i]=='S') y--;
		if(s[i]=='E') x++;
		if(s[i]=='W') x--;

	}
	cout << (flag?"YES":"NO") << endl;
}
int main(){
    int t;
	cin >> t;
	while(t--){
		solve();
	}
}


*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int score = 0;
        vector<bool> visited(n, false); // To avoid recounting duplicates

        for (int i = 0; i < n; i++) {
            if (visited[i]) continue; // Skip already processed elements
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    score++;
                    visited[i] = true; // Mark as visited
                    break;
                }
            }
        }

        cout << score << endl;
    }
    return 0;
}

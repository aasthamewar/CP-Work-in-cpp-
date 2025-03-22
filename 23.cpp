#include<bits/stdc++.h>
using namespace std;
/*
void solve()
{
    int n;
    cin>>n;
    if(n<=4)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        //for odd no printing
        for(int i=1;i<=n;i+=2)
        {
            if(i==5)
            {
                continue;
            }
            cout<<i<<" ";
        }
        cout<<"5 4 ";
        //for even no printing
        for(int i=2;i<=n;i+=2)
        {
            if(i==4)
            {
                continue;
            }
            cout<<i<<" ";
        }
    }
    cout<<endl;
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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n - 1 && ans.empty(); i++) {
            if (s[i] == s[i + 1]) {
                ans = s.substr(i, 2); // Substring of length 2
                break;
            }
        }

        for (int i = 0; i < n - 2 && ans.empty(); i++) {
            // Check for three consecutive distinct characters
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                ans = s.substr(i, 3); // Substring of length 3
                break;
            }
        }

        if (ans.empty()) {
            cout << "-1\n";
        } else {
            cout << ans << "\n";
        }
    }

    return 0;
}
*/



long long lcm(int a, int b) {
    return (1LL * a * b) / __gcd(a, b);
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

//Q1 (DAILY TASK = 3)
/*
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int odd=0,even=0,pos=0,neg=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }

    }
    cout<<"Even: "<< even<<endl;
    cout<<"Odd: "<< odd<<endl;
    cout<<"Positive: "<< pos<<endl;
    cout<<"Negative: "<< neg<<endl;

    return 0;
}
*/

//Q2
/*
int main()
{

    int n, a;

    cin >> n;
    while(n--, cin >> a) if(a) return cout << "HARD\n", 0;
    cout << "EASY\n";

    return 0;
}
*/

//Q3
/*
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum2+=b[i];
    }
    if(sum1==sum2)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }

    return 0;
}
*/

//Q4
/*
int main()
{
    string s;
    int n,x;
    cin>>n>>x>>s;
    for(int i=0;i<n;i++)
    {

            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
                continue;
            }

        cout<<s;
    }


    return 0;
}

*/
//Q5
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
   int even=0,odd=0,fine=0;
   for(int i=0;i<n;i++)
   {
       if(i%2==0)
       {
           if(a[i]%2==0)
           {
               fine++;
           }
           else
           {
               even++;
           }
       }
       else
       {
         if(a[i]%2==1)
         {
             fine++;
         }
         else
         {
             odd++;
         }
       }
   }
   if(fine==n)
   {
       cout<<0<<endl;
   }
   else if(odd==even)
   {
       cout<<even<<endl;
   }
   else
   {
       cout<<-1<<endl;
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

//Q6
/*
int main()
{
    string s;
    cin>>s;
    int lowercase=0,uppercase=0;
    for(char i=0;i<s.size();i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            lowercase++;
        }
        else
        {
            uppercase++;
        }
    }
    if(lowercase<uppercase)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}

*/



/*
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int sum_other_two = a+b+c-maxi;
    if(maxi<=sum_other_two+1)
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

//Q cf
/*
void solve()
{
    int n;
    cin>>n;
    if((n>=102 && n<=109) || (n>=1010 && n<=1099))
    {
        cout << "YES"<<endl;
    }
	 else
     {
         cout << "NO"<<endl;
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
//Q
/*

int n,t,i;
string s;
int main(){
cin>>n>>t>>s;
while(t--)
for(i=0; i<n-1; i++)
    if(s[i]=='B' && s[i+1]=='G') {swap(s[i],s[i+1]); i++;}
cout<<s;
return 0;
}
*/
//Q
/*
#include<bits/stdc++.h>
using namespace std;
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

//PATTERN PRINTING

int main()
{
    int n;
    cin>>n;
    //first line
    for(int i=0;i<n;i++)
    {
        cout<<'*';
    }
    cout<<endl;

    for(int i=0;i<n-2;i++)
    {
        int spaces = (n-2)-i;
        for(int j=0;j<spaces;j++)
        {
            cout<<' ';

        }
        cout<<'*'<<endl;
        cout<<endl;
    }

    //last line
     for(int i=0;i<n;i++)
    {
        cout<<'*';
    }
    cout<<endl;
    return 0;
}






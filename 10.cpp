#include<bits/stdc++.h>
using namespace std;
//Q1
/*
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
********************************************************
Q2
int main()
{
    int a,b;
    cin>>a>>b;
    if(a%b==0 || b%a==0)
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples"<<endl;
    }
}
*/
//******************************************************
//Q3
/*
int main()
{
    long long a,b;
    cin>>a>>b;
    int rem1=a%10;
    int rem2=b%10;
    cout<<rem1+rem2<<endl;

    return 0;
}

*/
//*****************************************************

//Q4
/*
int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s == '<')
    {
        if(a<b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(s == '>')
    {
        if(a>b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(s == '=')
    {
        if(a==b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}
*/

//*********************************************************************

//Q5
/*
int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0)
    {
        cout<<"Both"<<endl;
    }
    else if(a%k==0 && b%k!=0)
    {
        cout<<"Memo"<<endl;
    }
    else if(b%k==0 && b%k!=0)
    {
        cout<<"Momo"<<endl;
    }
    else
    {
        cout<<"No One"<<endl;
    }
    return 0;
}

*/

//********************************************************************

//Q6

int main()
{
    string fnfp,snfp;
    string fnsp,snsp;
    cin>>fnfp>>snfp;
    cin>>fnsp>>snsp;

    if(snfp==snsp)
    {
        cout<<"ARE Brothers"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }

    return 0;
}



//*******************************************************

//Q7
/*
int main()
{
    int a;
    cin>>a;
    if(a%2==0)
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

//*************************************************************8
//Q8
/*
int main()
{
  vector<long long> a(3);
  for(int i=0;i<3;i++)
  {
      cin>>a[i];
  }
  int ans1,ans2;
  int x=INT_MAX;
  int y=INT_MIN;

  for(int i=0;i<3;i++)
  {
      if(a[i]<x)
      {
          x=a[i];
          ans1=a[i];
      }
      if(a[i]>y)
      {
          y=a[i];
          ans2=a[i];
      }
  }
  cout<<ans1<<" "<<ans2<<endl;

    return 0;
}
*/

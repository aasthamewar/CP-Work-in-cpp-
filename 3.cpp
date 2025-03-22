#include<bits/stdc++.h>
using namespace std;


int main(){
          int a[100001];
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		sort(a+1,a+1+n);
		int x=a[1],y=a[n],x1=0,y1=0;
		for(int i=1;i<=n;i++)
			if(a[i] == x)
			x1++;
			else if(a[i] == y)
			y1++;
		if((abs(x1-y1) <= 1 && x1 + y1 == n ) || x == y)
		          cout<<"YES"<<endl;
		else
		          cout<<"NO"<<endl;
	}
}

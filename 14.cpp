#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		vector<int> r={a,b,c,d};
		int sum=0;
		if ((a>=c && b>d) || (a>c && b>=d)) {
			sum+=2;
		}
		if ((a>=d && b>c) || (a>d && b>=c)) {
			sum+=2;
		}
		cout<<sum<<endl;
	}
}

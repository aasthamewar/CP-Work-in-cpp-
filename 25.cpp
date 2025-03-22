#include <bits/stdc++.h>
using namespace std;

/*
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool exists_n(int x, int y) {
    for (int n = 1; n <= 100000; n++) {
        if (sum_of_digits(n) == x && sum_of_digits(n + 1) == y) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        if (exists_n(x, y)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
*/

// void solve()
// {
//     int a,b,n;
//     cin>>a>>b>>n;
//     long long sum = b;
//     for(int i=0;i<n;i++)
//     {
//         int temp;cin>>temp;
//         sum+=min(1LL*(a-1),1LL * temp);
//     }
//     cout<<sum<<endl;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

//LEETCODE[3462]

int main(){
    int n,m,x,y,k;
    cin>>n>>m;
    vector<vector<int>> grid(n,vector<int>(m));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            
        }
        sort(grid[i].begin(),grid[i].end(),greater<int>());
    }
    
    cin>>x>>y;
    int limits[2] = {x,y};
    cin>>k;

    long long sum=0;
    vector<int> candidates;
    for(int i=0;i<grid.size();i++){
    for(int j=0;j<min((int)grid[i].size(),max(0,limits[min(i,1)]));j++){
        candidates.push_back(grid[i][j]);
    }
    }
    
   //sort all the element in dec order
   sort(candidates.begin(),candidates.end(),greater<int>());

   for(int i=0;i<min(k,(int)candidates.size());i++){
    sum+=candidates[i];
   }
 cout<<sum<<endl;

 return 0;
}





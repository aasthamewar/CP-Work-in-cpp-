#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }

}
*/
/*
void solve() {
    int n;
    cin >> n;
    vector<int> cards(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> cards[i];
    }


    sort(cards.begin(), cards.end());

    int score = 0;


    for (int i = 0; i < 2 * n; i += 2) {
        score += cards[i]; // Add the minimum of each pair
    }

    cout << score << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
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
        int n;
        cin>>n;
        int maxgcd = n/2;
        cout<<maxgcd<<endl;
    }
    return 0;
}

*/

/*
int main()
{
    int t;cin>>t;
    int n;
    cin>>n;
    while(t--)
    {
        vector<int> a;
        if(n%3!=0 && n/10!=3)
        {
            a.push_back(n);
        }
        cout<<a<<endl;
    }
    return 0;
}

*/

/*
void solve() {
    int k;
    cin >> k;
    vector<int> likedno;
    int num = 1;

    while (likedno.size() < 1000) {
        if (num % 3 != 0 && num % 10 != 3) {
            likedno.push_back(num);
        }
        num++;
    }

    cout << likedno[k - 1] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

*/
/*
string compareEnergySequences(string ea,  string eb) {

    string a = ea;
    string b = eb;


    a.erase(0, a.find_first_not_of('0'));
    b.erase(0, b.find_first_not_of('0'));

    if (a.empty() && b.empty()) {
        return "=";
    }

    if (a.length() < b.length()) {
        return "<";
    } else if (a.length() > b.length()) {
        return ">";
    }

    if (a < b) {
        return "<";
    } else if (a > b) {
        return ">";
    } else {
        return "=";
    }
}

int main() {
    string ea, eb;

    cin >> ea;
    cin >> eb;

    cout << compareEnergySequences(ea, eb) << endl;

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
       unordered_set<char> foundchest;
       int totalgem=0;
       for(int i=0;i<n;i++)
       {
           char  chest;
           cin>>chest;

           //check if chest is found
           if(foundchest.find(chest) == foundchest.end())
           {
               totalgem+=2;
               foundchest.insert(chest);
           }
           else
           {
               totalgem+=1;
           }
       }

       cout<<totalgem<<endl;
    }
    return 0;
}

*/
/*

int maxMultiplesOfThree(const vector<int>& a) {
    int count0 = 0, count1 = 0, count2 = 0;

    for (int energy : a) {
        if (energy % 3 == 0) {
            count0++;
        } else if (energy % 3 == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    int pairs = min(count1, count2);

    int result = count0 + pairs;

    result += (count1 - pairs) / 2;
    result += (count2 - pairs) / 2;

    return result;
}

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

        int result = maxMultiplesOfThree(a);
        cout << result << endl;
    }

    return 0;
}

*/
/*
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[0]!=1)
        {
            found=0;
        }
        else
        {
            found=1;
        }
    }

    if(found==1)
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
int main()
{
    int n;
    cin>>n;

    string sequence;
    int number = 1;

    while(sequence.length()<n)
    {
        sequence+=to_string(number);
        number++;
    }

    cout<<sequence[n-1]<<endl;

    return 0;
}


*/

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            found=1;
        }
        else
        {
            found=0;
        }
    }
    if(found==1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}












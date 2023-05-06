#include <bits/stdc++.h>
using namespace std;
/* Define */
#define int long long
#define ll long long
#define nl "\n"
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define no cout<<"NO"<<"\n";
#define yes cout<<"YES"<<"\n";
#define loop(n) for (int i = 0; i < n; i++)
/* typedef */
typedef pair<int, int> pairs;
typedef map<int, int> maps;
typedef vector<int>ar;

int sum_of_digit(int n, int val);
int onec(string s);
struct trip
{
    int x, y, z;
};
bool func();
int getMSB(int n);
void leftRotate(int arr[], int s, int e);
void solve();
constexpr long long SZ = 2e5 + 7;
constexpr long long inf = 1e18;
bool isPalindrome(vector<int> s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
int _ceil(int a,int b){ return a%b==0 ? a/b:a/b+1;}
// bool cmp(pairs&a,pairs&b){
//     return (a.second<b.second);
// }
int FindFirstSorted(int a[], int x, int n)
{

    int left = -1;
    int right = n;

    while (right > left + 1)
    {
        int middle = (left + right) / 2;
        if (a[middle] >= x)
            right = middle;
        else
            left = middle;
    }

    if (right < n && a[right] == x)
        return right;

    return -1;
}
void pre(vector<int>&a){
for(int i=1;i<a.size();i++) a[i]+=a[i-1];
}
// int ans=1e18;
void solve()
{
int x,y,z; cin>>x>>y>>z;
cout<<x*y*z<<nl;
}









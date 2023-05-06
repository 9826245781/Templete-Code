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
typedef priority_queue<int, vector<int>, greater<int> > st;

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
void permute(vector<int> a, int l, int r);
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

//ceil
int _ceil(int a,int b){ return a%b==0 ? a/b:a/b+1;}
//cmp
bool cmp(pairs&a,pairs&b){
    return (a.second<b.second);
}
//find first sorted
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
//pre
void pre(vector<int>&a){
for(int i=1;i<a.size();i++) a[i]+=a[i-1];
}
//count bits
unsigned countBits(unsigned int number)
{   
   
    // log function in base 2
    // take only integer part
    return (int)log2(number)+1;
}
//dec to binary
string decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    string ans;
    for (int i = 64; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}
//size
 int sz(vector<int>a){
     return a.size();
 }

 // prime

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more then
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
//is perfectsquare
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {
 
        long long sr = sqrt(x);
 
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

//hamming weight
    int hammingWeight(int n) {
    int count = 0;
    
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}
        int binaryNum[32]; 
//convert
    void decToBinary(int n) 
{ 
  
    int i = 0; 
    while (n > 0) { 
  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
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

    int t = 1,i=1;
    cin >> t;

    while (t--)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
        // ++i;
    }
}
 void solve(){
   
 }
  
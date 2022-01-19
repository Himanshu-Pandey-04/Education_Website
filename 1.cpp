#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

// Fast IO
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Data Types
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

// Constants
#define inf INT_MAX //0x3f3f3f3f;
#define mod int(1e9) + 7

// Pairs
#define Pii pair<int, int>
#define Pll pair<ll, ll>

// Maps
#define Mii map<int, int>
#define Mll map<ll, ll>

// Sets
#define unSet unordered_set

// Vectors
#define vi vector<int>
#define vl vector<long>
#define pb push_back
#define sz(v) v.size()
#define ALL(v) (v).begin(), (v).end()
//#define VecInp(v) FOR(i, 0, v.size()) { int ele; cin>>ele; v.push_back(ele); }

// Iterations, Loops
#define FOR(i, L, R) for(ll i = L; i < R; i++)

// Arrays
ll ArrSum(ll a[], int n) { return accumulate(a, a + n, 0); }
ll ArrProd(ll a[], int n) { ll prod = 1;   FOR(p, 0, n) prod *= a[p];   return prod; }

// IO
#define In(ele) cin >> ele
#define Out(ele, ch) cout << ele << ch
#define ArrInp(arr, n) FOR(i, 0, n) cin >> arr[i]
#define ArrOut(arr, n) FOR(i, 0, n) cout << arr[i] << " "

// Strings
#define toStr(a) #a

// Long Factorials
string Fac = "";
vector<int> lFac(int n) {
    vector<int> digits; digits.push_back(1);
    for(int i=2; i<=n; i++) { int carry = 0;
        for(int j=0; j<digits.size(); j++) { int prod = digits[j]*i+carry; digits[j] = prod%10, carry = prod/10; }
        for(; carry>0; carry/=10) digits.push_back(carry%10); }
    reverse(digits.begin(), digits.end());
    for(auto i: digits) Fac += to_string(i); /*for(auto i: digits) cout<<i; cout<<"\n";*/
    return digits; }


// Sieve - Prime
class Sieve {
    vector<ll> sieve;
public: Sieve(ll n) { ll* arr = new ll[n + 1]; for (ll s = 0; s <= n; s++) arr[s] = s; FOR(s, 2, n + 1) for (ll j = 2; s * j <= n; j++) arr[s * j] = 0; FOR(s, 2, n + 1) if (arr[s] != 0) sieve.pb(arr[s]); }
      void Print(string seperator = " ") { FOR(i, 0, sz(sieve)) Out(sieve[i], seperator); }
};


// Individual Digits of Numbers
long IndDig(long N)
{
    ll Sum = 0; for (; N > 0; N /= 10) Sum += N % 10;
    return Sum;
}



int main()
{
    FastIO;

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        
        
    }

    return 0;
}
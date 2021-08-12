//The Grind continues//
//Target is 1900++ By October//
 
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>
 
using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;
 
#define int long long
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii
#define vas()           vector<bool>is_prime(N,true);
#define f()             for(int i=0;i<n;i++)
#define form()          cout<<done<<endl;
#define ull             unsigned long long
#define pb              push_back
#define makefaster()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(v) (v).begin(), (v).end()
#define pll pair<lli,lli>
#define prec(n) fixed<<setprecision(n)
#define vc vector<char>
#define ve vector
#define se second
#define fi first
#define pf pop_front
#define pob pop_back
#define psf push_front
#define lld long double

const int MOD=1e9+7;
const char nl = '\n';
const double eps = 1e-9;
 
#define M 1000000007
#define mod 1000000007ll 

const long long N=200005, INF=2000000000000000000;
lld pi=3.1415926535897932;


int lcm(int a, int b)
{
    int g=__gcd(a, b);
    return a/g*b;
}


int power(int a, int b, int p)
    {
        if(a==0)
        return 0;
        int res=1;
        a%=p;
        while(b>0)
        {
            if(b&1)
            res=(res*a)%p;
            b>>=1;
            a=(a*a)%p;
        }
        return res;
    }
 
int32_t main()
{
    makefaster()
    int two[N];
    two[0]=1;
    for(int i=1;i<N;i++)
    two[i]=(two[i-1]*2)%mod;
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int tot=power(two[k], n, mod);
        int sub=0, mul=1;
        for(int i=k-1;i>=0;i--)
        {
            int cur=(two[n-1]-(n&1));
            cur=(cur*mul)%mod;
            cur=(cur*power(two[i], n, mod))%mod;
            sub=(sub+cur)%mod;
            mul=(mul*(two[n-1]-(n%2==0)+(n&1)))%mod;
        }
        cout<<(tot-sub+mod)%mod<<'\n';
    }
}

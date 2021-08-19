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
#include <cstdio>

using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;
 
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii
#define vas()           vector<bool>is_prime(N,true);
#define f()             for(int i=0;i<n;i++)
#define form()          cout<<done<<endl;
#define ull             unsigned long long
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
#define test ll t;cin>>t;while(t--)

const int MOD = 1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

const int N = 1e6 + 7;
const int mod = 1e9 + 7;

int main()
{
    makefaster()
    ll ta;
    cin>>ta;
    while(ta--)
    {
        ll n;
        cin>>n;

        if(n == 1)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }

        ll start = 1LL, end = 40000LL;
        ll ans = 1;

        while(start <= end)
        {
            ll mid = start - (start - end)/2LL;
            ll val = mid * mid;
            if(val < n)
            {
                ans=mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    


        if((n - (ans * ans)) > (ans + 1LL))
        {
            ll row = ans + 1LL;
            ll val = n - (ans * ans);
            val -= (ans + 1LL);
            ll col = ans + 1LL - val;
            cout << row << " " << col << endl;
        }
        else
        {
            ll row = (n - (ans * ans));
            ll col = ans + 1LL;
            cout << row << " " << col << endl;
        }
    }
    
    return 0;
}

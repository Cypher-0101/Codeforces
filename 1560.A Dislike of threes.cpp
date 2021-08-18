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

vector<ll>k;
void solve()
{
    for(int i=1;i<=1000000;i++)
    {
        if(i%3==0||(i%10)==3)
        {

        }
        else
        {
        k.pb(i);
        }
    }
}

void done();
int main()
{
    makefaster()
    int ta=1;
    solve();
    test
    {
        done();
        cout<<"\n";
    }
    
    return 0;
}

void done()
{
    long long g;
    cin>>g;
    cout<<k[g-1];
}

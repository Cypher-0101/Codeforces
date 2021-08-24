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
#define vll vector<ll>

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

const int N = 1e6 + 7 ;
const int mod = 1e9 + 7;

bool is(vector<ll>arr)
{
    int n = (int) arr.size();
    for(int i=1;i<n;i++) 
    {
        if(arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    makefaster()
    ll t;
    cin>>t;

    for(ll idx=0; idx<t; idx++)
    {
        ll n;
        cin >> n;
        vll arr(n);
        for(ll xx=0;xx<n;xx++)
        {
            cin>>arr[xx];
        }
        ll ans =0 ,x;
        for(ll i=1;i<=81*n*n;i++)
        {
            if(is(arr))
            {
                break;
            }
            if(i%2)
            {
                x = 0;
            }
            else 
            {
                x = 1;
            }
            for(;x<n;x+=2)
            {
                if((x+1 < n) and arr[x] > arr[x+1])
                {
                    swap(arr[x], arr[x+1]);
                }
            }
            
            ans++;
        }
        
        cout << ans << endl;
    }
}

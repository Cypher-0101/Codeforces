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

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007


const int N = 110;
const int mod = 1e9 + 7;

using namespace std;

int main()
{
        makefaster()
        int t;
        cin >> t;
        while(t--)
        {
                int n;
                cin >> n;
                vector<int> a(n);
                long double A = 0, B = 0;
                for(int i = 0; i < n; i++)
                {
                        cin >> a[i];
                        B += a[i];
                }
                sort(a.begin(), a.end());
                long double res = -1e18;
                for(int i = 0; i < n - 1; i++)
                {
                        A += a[i];
                        B -= a[i];
                        res = max(res, A / (i + 1) + B / (n - i - 1));
                }

            cout << fixed << setprecision(9) << res << "\n";
        }
}

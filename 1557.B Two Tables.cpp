//The Grind continues//
//Target is 1900++ By October//
 
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;
 
#define ll              long long 
#define vas()           vector<bool>is_prime(N,true);
#define f1()            for(int i=0;i<2;i++)
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
#define ss second
#define ff first
#define pf pop_front
#define pob pop_back
#define psf push_front
 
 
const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

int main() 
{
  makefaster()
  int t;
  cin >> t;
  while (t--) 
  {
    int W, H;
    cin >> W >> H;
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    
    int w, h;
    cin >> w >> h;
    
    const int inf = (int) 1e9;
    int sol = inf;
    
    if (w + (xb - xa) <= W) 
    {
      sol = min(sol, max(0, w - xa));
      sol = min(sol, max(0, xb - (W - w)));
    }
    
    if (h + (yb - ya) <= H) 
      
    {
      sol = min(sol, max(0, h - ya));
      sol = min(sol, max(0, yb - (H - h)));
    }
    
    cout << (sol == inf ? -1 : sol) << '\n';
    
  }
  
  return 0;
}

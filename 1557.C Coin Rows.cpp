//The Grind continues//
//Target is 1900++ By October//

#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;

#define ll              long long 
#define vas()           vector<bool>is_prime(N,true);           
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

int32_t main()

{
    makefaster()
    ll t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[2][n],y=0,sol=1e18,x=0;)
        for(int i=0;i<2;i++)
        
        {
            for(ll j=0;j<n;j++)
              
            {
                cin >> a[i][j];
                if(i==0)
                    y = y + a[i][j];
            }
        }
        
        for(ll i=0;i<n;i++)
        
        {
            y = y - a[0][i];
            sol=min(sol,max(x,y));
            x = x + a[1][i];
        }
    
        cout << sol << '\n';
    }
}

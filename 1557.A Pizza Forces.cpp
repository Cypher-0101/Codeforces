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
#define f1()            for(int i=0;i<z;i++)
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
        ll k;
        cin >> k;
        
        if (k<=6) 
        
            cout << "15" << endl;
            
        else 
        
            cout << ((k+1)/2)*5 << endl;
    }
    
    return 0;
}

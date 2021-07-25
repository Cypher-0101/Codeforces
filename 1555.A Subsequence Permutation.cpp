//The Grind continues//
//Target is 1900++ By October//

#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;

#define ll              long long
#define f(n,m)          for(int i=0;i<n;i++)
#define form()          cout<<done<<endl;
#define ull             unsigned long long
#define pb              push_back
#define makefast()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define pll pair<lli,lli>
#define prec(n) fixed<<setprecision(n)
#define fast( ) (ios_base::sync_with_stdio(false);cin.tie(NULL), cout.tie(NULL);)
#define solve() (unordered_map<char,int> hash;)
#define vc vector<char>
 
const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

int main()

{
        makefast()

        int w;
        cin>>w;
        while(w--)
        
        {
            int n;  
            cin>>n;
            string v;
            cin>>v;
            
            string b = v;
            
            sort(b.begin(), b.end());
            
            int done = 0;
            f(n,m)
            
            {
                if(v[i]!=b[i])
                done++;
            }
            
        form()
    }
    
    return 0;
}

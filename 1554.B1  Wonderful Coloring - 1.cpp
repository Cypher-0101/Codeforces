//Cypher-0101
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;

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

ll t,n,m,a,b,x,y,d,z,k,l,r;
void done(){
        cin>>z;
        while(z--)
        {
            string r;
            cin>>r;
            unordered_map<char,int> hash;
            for(auto d:r) hash[d]++;
            vc a,b;
            for(auto d:hash){
                if(d.se==1) a.pb(d.fi);
                else if(d.se>=2) b.pb(d.fi);
                
            }
            ll ans=a.size()/2+b.size();
            cout<<ans<<endl;
        }
}
int main(){
        ios_base::sync_with_stdio(false);cin.tie(NULL), 
        cout.tie(NULL);
        done();
        return 0;
}

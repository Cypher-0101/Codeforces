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
#define f1(n,m)         for(int i=0;i<n;i++)
#define form()          cout<<done<<endl;
#define ull             unsigned long long
#define pb              push_back
#define makefaster()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(v) (v).begin(), (v).end()
#define pll pair<lli,lli>
#define prec(n) fixed<<setprecision(n)
#define fast( ) (ios_base::sync_with_stdio(false);cin.tie(NULL), cout.tie(NULL);)
#define vc vector<char>
#define f7(i,a,n) for(ll i=a;i<n;i++)
#define ve vector
#define ss second
#define ff first
#define pf pop_front
#define pob pop_back
#define psf push_front
#define o(m,n)         if(v[i][j]<v[y][j]) g++;
#define p(k,l)         if(v[y][j]<v[i][j]) g++;
#define w()            if(g>=3) y=i;
#define as()           vector<int>temp;
#define y(j,l)         for(int j=i+1;j<cds.size();j++)
#define y2()           if(cds[i].ff<cds[j].first&&cds[i].ss>cds[j].ff &&cds[j].ss>cds[i].ss)
#define e()            for(int i=0;i<cds.size();i++)
#define ds()           sort(cds.begin(), cds.end());
#define op()           cds.pb({ps[i],ps[i+m/2]});
#define uy()           for(int i=0;i<m/2;i++)
#define gh()           cds.pb(mp(l,r));
#define zx()           vector<pair<int, int>> cds;
 
const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

int main(){
    makefaster()
    int t;
    cin>>t;
    while(t--)
    
    {
        int n;
        int k;
        cin>>n>>k;
        set<int> pt;
            f7(i,0,n)
            {
            pt.insert(2*i+1);
            pt.insert(2*i+2);
            }
        vector<int> ps;
        zx()
        f7(i,0,k){
            int l;
            int r;
            cin>>l>>r;
            if(l>r)
            swap(l,r);
            gh()
            pt.erase(l);
            pt.erase(r);
        }
        for(auto x: pt){
            ps.pb(x);
        }
        int m=ps.size();
        uy(){
            op()
        }
        ds()
        int done=0;
        e()
        {
            y(j,l)
            {
                y2()
                {
                done++;
                }
            }
        }
        cout<<done<<endl;
    }
}

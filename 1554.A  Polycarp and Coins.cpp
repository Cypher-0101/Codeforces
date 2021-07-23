#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define pll pair<lli,lli>
#define prec(n) fixed<<setprecision(n)

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;

void solve()   {
        
    int n;
    cin>>n;
    int z = n/3;
    n -=3*z;
    if(n==0)
    {
        cout<< z <<' '<< z <<"\n";
    }
    else if(n==1)
    {
        cout<< z + 2-1<<' '<< z <<endl;
    }
    else
    {
        cout<<z<<' '<< z+2-1 <<endl;
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}    

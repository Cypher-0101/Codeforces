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
#define prec(n) fixed<<setprecision(n)

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt ;
    cin >> tt ;
    while(tt--) 
    {
        string s ;
        cin >> s ;
        int odd =0 , cnt =0 , even = 0, cnt1 = 0 ;
        int ok = 0 ;
        for (int i = 0 ; i < s.length() ; i++)
        
        {
            if ( i % 2 == 0) 
            
            {
                if ( s[i] == '1')
                    even++;
                else if ( s[i] == '?')
                    cnt++;
            }
            
            else
            
            {
                if ( s[i] == '1')
                    odd++;
                else if( s[i] == '?')
                    cnt1++;
            }
            
            if ( odd+ cnt1 > even + (9-i)/2 )
            
            {

                cout << i+1 <<nl;
                ok=1;
                break;
            }

            if ( even+ cnt > odd + (10-i)/2 )
            
            {

                cout << i +1<<nl;
                ok=1;
                break;
            }
            
        }
        
        if (!ok)
        
            cout << 10 <<"\n";
    }
    return 0;
}

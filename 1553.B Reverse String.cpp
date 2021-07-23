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
#define all(x) x.begin() , x.end()
#define ff first
#define ss second
#define pii pair<int , int>
#define rall(x) x.rbegin() , x.rend()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(a) cout << #a << " = " << a << endl;
#define files freopen("input.in", "r", stdin);freopen("input.out", "w", stdout);
#define fff cout << "--------------------------" << endl;

const int MOD = 1e9 + 7;
const int LOG = 19;
const double PI = acos(-1);
const double EPS = 1e-9;
const int N = 3e5 + 5;

using i64 = long long;
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    
    {
        string s, t;
        cin >> s >> t;
        int n = s.length();
        
        bool ans = false;
        for (int i = 0; i < n; i++) 
        {
            for (int j = i; j < n && j - i + 1 <= int(t.length()); j++) 
            
            {
                if (s[j] != t[j - i]) 
                
                {
                    break;
                }
                
                if (int(t.length()) > 2*j - i + 1 ) 
                
                {
                    continue;
                }
                
                bool ok = true;
                for (int k = 0; k < int(t.length()) - (j - i + 1); k++) 
                
                {
                    if (t[j - i + 1 + k] != s[j - k - 1]) 
                    
                    {
                        ok = false;
                    }
                }
                
                if (ok) 
                
                {
                    ans = true;
                }
            }
        }
        
        cout << (ans ? "YES" : "NO") << "\n";
    }
    
    return 0;
}

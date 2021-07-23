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

vector<pair<int,int>> store;
vector<vector<pair<int,int>>> graph;
 
int main()
{
  int t=1;
  cin>>t;
  while(t--)
  {
    string s,t;
    cin>>s>>t;
    int n=s.length();
    int m = t.length();
    for(int i=n-1,j=m-1;i>=0;--i)
    {
      if(s[i]==t[j])--j;
      else --i;
      if(j==-1)  
      {
          cout<<"YES\n";
          goto end;
      }
    }
    
    cout<<"NO\n";
    end:
    int j=1;
   
  }
}

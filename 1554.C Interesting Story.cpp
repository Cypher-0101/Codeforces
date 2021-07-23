#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;

#define pb push_back
#define x first
#define y second
#define pdd pair<double,double>
#define pii pair<int,int>
#define pll pair<LL,LL>
#define mp make_pair
#define LL long long
#define ULL unsigned long long
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x)*(x))
#define pi acosl(-1)
#define MEM(x) memset(x,0,sizeof(x))
#define MEMS(x) memset(x,-1,sizeof(x))

int const MM = 2e5+5;
 
#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef vector <ii> vi;
typedef vector <vector<int>> vvi;
typedef unsigned long long int ull ;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define x first
#define y second
#define pdd pair<double,double>
#define pii pair<int,int>
#define pll pair<LL,LL>
#define mp make_pair
#define LL long long
#define ULL unsigned long long
#define sqr(x) ((x)*(x))
#define pi acosl(-1)
#define MEM(x) memset(x,0,sizeof(x))
#define MEMS(x) memset(x,-1,sizeof(x))

int const MM = 2e5+5;
 
long long int N, M, K, T, H, W, L, R;
 
void Solve() 

{
	cin >> N;
	vector<vector<int>>v;
	vector<int>sum(5);
	for (int i = 0; i < N; i++) 
	
	{
		string s;
		cin >> s;
		vector<int>w(5);
		for (auto j : s) 
		{
			w[j - 'a']++;
			sum[j - 'a']++;
		}
		v.push_back(w);
	}
	
	int ans = 0;
	for (int idx = 0; idx < 5; idx++) 
	
	{
		vector<int>box;
		for (int i = 0; i < N; i++) 
		{
			box.push_back(v[i][idx] * 2 - accumulate(v[i].begin(), v[i].end(), 0));
		}
		
		sort(box.rbegin(), box.rend());
		int num = 0;
		int cnt = 0;
		for (auto j : box) 
		
		{
			cnt++;
			num += j;
			if (num > 0) 
			{
				ans = max(ans, cnt);
			}
		}
	}
	
	cout << ans << endl;
}
 
int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(0);
 
	cin >> T;
	while (T--) 
	
	{
		Solve();
	}
}

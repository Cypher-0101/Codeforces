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
#define sqr(x) ((x)*(x))
#define pi acosl(-1)
#define MEM(x) memset(x,0,sizeof(x))
#define MEMS(x) memset(x,-1,sizeof(x))

void solve()
{
    char c[100];
    scanf("%s",c);
    int cnt[26];
    fill(cnt,cnt+26,0);
    for(int i = 0;c[i]!=0;i++)
        cnt[c[i]-'a']++;
    int ans=0;
    int tot=0;
    for(int i = 0;i<26;i++)
    {
        if(cnt[i]>=2)
            ans++;
        else if(cnt[i]==1)
            tot++;
    }
    printf("%d\n",ans+tot/2);
}

int main(){
    int t=1;
    scanf("%d",&t);
    while(t--){
        solve();
    }
    //printf("%.12f\n",sum/tt);
    return 0;
}

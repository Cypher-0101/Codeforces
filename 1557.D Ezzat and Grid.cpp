//The Grind continues//
//Target is 1900++ By October//

//dp r karone subsection basibo lagibo//
//proper spacing korile easy to debug//
//variable naming duplication nhoi jate// 
 
#include <bits/stdc++.h>

using namespace std;
 
#define makefaster()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pb push_back
#define ll long long
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define DATA pair<int, int>
#define INF 0x3f3f3f3f
#define IDENTITY make_pair(INF, 0)

DATA seg[2100000], lazy[2100000];

DATA Merge(DATA l, DATA r)
{
    if (l < r) return l;
    else return r;
}


void Propagate(int n, int l, int r) // add koribole
{
    if (lazy[n] != IDENTITY)
    {
        if (l != r)
        {
            lazy[n<<1] = Merge(lazy[n<<1], lazy[n]);
            lazy[n<<1|1] = Merge(lazy[n<<1|1], lazy[n]);
        }
        seg[n] = Merge(seg[n], lazy[n]); // min change lagibo
        lazy[n] = IDENTITY;
    }
}


DATA Update(int L, int R, DATA val, int n, int l, int r)

{
    Propagate(n, l, r);
    if (r < L || R < l) return seg[n];
    if (L <= l && r <= R)
    {
        lazy[n] = Merge(lazy[n], val); // min change lagibo
        Propagate(n, l, r);
        return seg[n];
    }
    
    int mid = l+r>>1;
    return seg[n] = Merge(Update(L, R, val, n<<1, l, mid), Update(L, R, val, n<<1|1, mid+1, r));
}


DATA Query(int L, int R, int n, int l, int r)

{
    Propagate(n, l, r);
    if (r < L || R < l) return IDENTITY;
    if (L <= l && r <= R) return seg[n];
    int mid = l+r>>1;
    return Merge(Query(L, R, n<<1, l, mid), Query(L, R, n<<1|1, mid+1, r));
}


int N, M;
vector<pair<int, int> > v[300001];
pair<int, int> dp[300001];


int main()
{
    for(int i=0; i<2100000; i++)
        seg[i] = lazy[i] = IDENTITY;
    
    makefaster()
    cin.exceptions(ios::badbit | ios::failbit);
    cin >> N >> M;
    vector<int> com;
    for(int i=1; i<=M; i++)
    {
        int n, l, r;
        cin >> n >> l >> r;
        r++;

        v[n].pb({l, r});
        com.pb(l);
        com.pb(r);
    }
    
    sort(com.begin(), com.end());
    com.erase(unique(com.begin(), com.end()), com.end());
    
    for(int i=1; i<=N; i++)
        for(auto &[l,r] : v[i])
       
        {
            l = lb(com.begin(), com.end(), l) - com.begin();
            r = lb(com.begin(), com.end(), r) - com.begin();
        }

    for(int i=1; i<=N; i++)
   
    {
        dp[i] = {i-1, 0};

        for(auto [l,r] : v[i])
    
        {
            auto it = Query(l, r-1, 1, 0, (int)com.size()-1);
            dp[i] = min(dp[i], mp(it.first + i, it.second));
        }

        for(auto [l,r] : v[i])
    
        {
            Update(l, r-1, mp(dp[i].first-i-1, i), 1, 0, (int)com.size()-1);
        }
    }

    int res = INF, n = 0;
    for(int i=1; i<=N; i++)
    
    {
        int val = dp[i].first+(N-i);
        if (res > val) res = val, n = i;
    }

    set<int> s;
    for(int i=1; i<=N; i++)
        s.insert(i);

    while(n)
   
    {
        s.erase(n);
        n = dp[n].second;
    }

    cout << res << "\n";
    if (res)
   
    {
        for(int i : s)
            cout << i << " ";
        cout << "\n";
    }
  
    return 0;
}

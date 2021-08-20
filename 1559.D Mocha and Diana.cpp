//The Grind continues//
//Target is 1900++ By October//
 
#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <list>
#include <time.h>
#include <math.h>
#include <random>
#include <deque>
#include <queue>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <bitset>
#include <sstream>
#include <chrono>
#include <cstring>
#include <cstdio>

using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;
 
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii
#define vas()           vector<bool>is_prime(N,true);
#define f()             for(int i=0;i<n;i++)
#define form()          cout<<done<<endl;
#define ull             unsigned long long
#define pb              push_back
#define makefaster()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(v) (v).begin(), (v).end()
#define pll pair<lli,lli>
#define prec(n) fixed<<setprecision(n)
#define vc vector<char>
#define ve vector
#define ss second
#define ff first
#define pf pop_front
#define vpll vector<pll>
#define pob pop_back
#define psf push_front
 
const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007


void initialize(ll parent[],ll rank[],ll n)
{
    for(ll i=0;i<n;i++)
    {
        parent[i]=i;
        rank[i]=0;
    }
}

ll find(ll x,ll parent[])
{
    if(x==parent[x])
    return x;
    parent[x]=find(parent[x],parent);
    return parent[x];
}

void unions(ll x,ll y,ll parent[],ll rank[])
{
    ll x_rep=find(x,parent);
    ll y_rep=find(y,parent);
    if(x_rep==y_rep)
    return;
    if(rank[x_rep]>rank[y_rep])
    parent[y_rep]=x_rep;
    else if(rank[x_rep]<rank[y_rep])
    parent[x_rep]=y_rep;
    else
    {
        parent[y_rep]=x_rep;
        rank[x_rep]++;
    }
}

void done()
{
    ll n,m1,m2;
    cin>>n>>m1>>m2;
    ll parent1[n];
    ll rank1[n];
    ll parent2[n];
    ll rank2[n];
    initialize(parent1,rank1,n);
    initialize(parent2,rank2,n);
    while(m1--)
    {
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        unions(x,y,parent1,rank1);
    }
    while(m2--)
    {
        ll x,y;
        cin>>x>>y;
        x--;
        y--;
        unions(x,y,parent2,rank2);
    }
    
    vpll ans;
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(find(i,parent1)!=find(j,parent1)&&find(i,parent2)!=find(j,parent2))
            {
                unions(i,j,parent1,rank1);
                unions(i,j,parent2,rank2);
                ans.pb({i,j});
            }
        }
    }

    cout<<ans.size()<<endl;
    for(auto it:ans)
    
    {
        cout<<it.ff+1<<" "<<it.ss+1<<endl;
    }
}

int main()
{
    makefaster()
    long long t=1;
    while(t--)
    {
        done();
    }
    return 0;
}

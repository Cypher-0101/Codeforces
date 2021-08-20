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
#define se second
#define fi first
#define pf pop_front
#define pob pop_back
#define psf push_front

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

const int mod = 1e9 + 7;

int main()
{
    makefaster()
    int t; 
    cin>>t;
    while(t--)
    
    {
        int n; 
        cin>>n;
        vector<int> p(n);
        for(auto &item:p) cin>>item;
        if(p[0])
        {
            cout<<n+1<<" ";
            for(int i=1;i<=n;i++) cout<<i<<" ";
            cout<<nl;
        }
        
        else if(!p[n-1])
        
        {
            for(int i=1;i<=n+1;i++) cout<<i<<" ";
            cout<<nl;
        }
        
        else
        
        {
            int flag=-1;
            for(int i=0;i<n-1;i++)
            
            {
                if(p[i]==0 &&p[i+1])
                
                {
                    flag=i+1;
                    break;
                }
            }
            
            if(flag==-1) cout<<-1<<nl;
            else
            {
                for(int i=1;i<=flag;i++)
                cout<<i<<" ";
                cout<<n+1<<" ";
                for(int i=flag+1;i<=n;i++) cout<<i<<" ";
            }
        }
    }

    return 0;
}

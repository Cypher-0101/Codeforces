//The Grind continues//
//Target is 1900++ By October//

#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
 
using namespace std;

typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;

#define int             long long
#define vas()           vector<bool>is_prime(N,true);
#define f1()            for(int i=0;i<z;i++)
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
#define pob pop_back
#define psf push_front           
#define read(arr,n)     for(int i=0;i<n;i++)cin>>arr[i];          

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

void done()
{
    int a,b;
    cin>>a>>b;

    vector<int> vec(a);
    for (int i = 0 ; i < a ; i++)
    cin>>vec[i];

    int sol=INT_MIN;

    for (int i = 0 ; i < a ; i++)
    {
            for(int j=i+1; j < min(i+b+1,a); j++)
        {
            
            int con = ((i+1)*(j+1))-b*(vec[i]|vec[j]);
            sol=max(sol,con);
        }
    }

    cout<<sol<<"\n";
}


int32_t main()
{
    makefaster()
    int t=1;
    cin>> t;
    while(t--)
    {
        done();
    }
}

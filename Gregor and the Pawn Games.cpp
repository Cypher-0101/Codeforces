//The Grind continues//
//Target is 1900++ By October//

#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int lli;
typedef pair<int,int> ii;
typedef tuple<int,int,int> iii;
typedef unsigned long long int ull ;

#define ll              long long
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
#define pob pop_back
#define psf push_front
#define f1()          if(b[i]=='1'&&a[i]=='1') 
#define f2()          if(i-1>=0&&a[i-1]=='1')
#define f3()          if(i+1<n&&a[i+1]=='1')
#define f4()          else if(b[i]=='1')
#define f5()          cout<<sol<<endl;
#define f6()          a[i+1]='0';
#define f7()          a[i-1]='0';
#define f8()          cin >>n;
#define f9()          cin>> a;
#define g1()          cin>> b;

const int MOD=1e9+7;
const char nl = '\n';
const double pi = 2*acos(0.0);
const double eps = 1e-9;
 
#define M 1000000007

void done()

{
    int n;
    cin >> n;
    
    string a;
    cin >> a;
    
    string b;
    cin >> b;
    
    int sol=0;
    for(int i=0; i<n; i++)
    
    {
        if(b[i]=='1'&&a[i]=='1')
        
        {
            if(i-1>=0&&a[i-1]=='1')
            
            {
                sol++;
                a[i-1]='0';
            }
            
            else 
            
            if(i+1<n&&a[i+1]=='1')
            
            {
                sol++;
                a[i+1]='0';
            }
        }
        
        else if(b[i]=='1')
        
        {
            sol++;
        }
    }
    
    cout<<sol<<endl;
}

int main()

{
    makefaster()
    int t;
    cin>>t;
    while(t--)
    {
        done();
    }

    return 0;
}

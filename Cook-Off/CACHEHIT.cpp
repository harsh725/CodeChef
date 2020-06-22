#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define loop(a,n) for(ll i=a;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1

bool prime(ll s);
ll power(ll x, ll y) ;

bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
void solve()
{
    ll n,b,m;
    cin>>n>>b>>m;
    ll size=n/b;
    std::vector<pair<ll,ll>> v(size+1);
    ll x=0;
    loop(0,size+1)
    {
        v[i].first=x;
        v[i].second=x+b-1;
        x=x+b;
    }
    
    ll c=0,res=1;
    cin>>x;
    c=x/b;
    loop(1,m)
    {
        cin>>x;
        if(x>=v[c].first && x<=v[c].second)
        {
            continue;
        }
        else
        {
            res++;
            c=x/b;
        }
        // debug(res);
    }
    cout<<res<<"\n";
    
    
    
    
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t;cin>>t;
    // int t=1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}



bool prime(ll s)
{
    if (s <= 1)  return false;
    if (s <= 3)  return true;
    if (s%2 == 0 || s%3 == 0) return false;

    for (ll i=5; i*i<=s; i=i+6)
        if (s%i == 0 || s%(i+2) == 0)
           return false;

    return true;
}

ll power(ll x, ll y) 
{ 
    ll temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
} 
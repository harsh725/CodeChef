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
ll ass(ll a)
{ ll sum=0;
    while(a)
    {
        sum+=(a%10);
        a/=10;
    }
    return sum;
}
void solve()
{
    ll n,a,b,c=0,m=0;
    cin>>n;
    loop(0,n)
    {
        
        cin>>a>>b;
       ll chef=ass(a);
       ll morty=ass(b);
        if(chef==morty)
        {
            c++;
            m++;
        }
        else if(chef>morty)
        {c++;
            
        }
        else
        {m++;
            
        }
    }
    
    if(c==m)
    {
        cout<<"2 "<<c<<"\n";
    }
    else
    {
        ll res2=c, res=0;
        if(c<m)
        {
            res=1;
            res2=m;
        }
        cout<<res<<" "<<res2<<"\n";
    }
    
    
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

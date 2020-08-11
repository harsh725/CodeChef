#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define loop(a,n) for(ll i=0;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1

bool prime(ll s);
ll power(ll x, ll y) ;
bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
} 

void solve()
{
    ll n,res;
    cin>>n;
    if(n==1 || n==2 ||isPowerOfTwo(n))
    {
        cout<<"0\n";return ;
    }
    if(n&1)
    {
         res=n/2;
        cout<<res<<"\n";
        
    }
    
    else
    {
        // int c=0;
        ll p=2,x=n;
        while(!(n&1))
        {
            n=n>>1;
            p=p<<1;
            
        }
    
        cout<<x/p<<"\n";
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
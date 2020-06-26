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
        int five=0,ten=0;


bool prime(ll s);
ll power(ll x, ll y) ;

bool change(int x)
{
    if(x==5)return true;
    if(x==10 && five>0)
    {
        five--;
        return true;
    }
    if(x==15)
    {
        if(ten>0)
        {
            ten--;
            return true;
        }
        if(five>=2)
        {
            five=five-2;
            return true;
        }
    }
    return false;
}

void solve()
{
    five=0;ten=0;
    ll n,temp,chef=0;
    cin>>n;
    int a[n];
    // std::vector<int> a1(1001,0) ,a2(1001,0),a3(1001,0);
    loop(0,n)
    {
        cin>>a[i];
        }
    loop(0,n)
    {

            if(!change(a[i]))
            {
                cout<<"NO\n";return ;
            }
            if(a[i]==10)
            ten++;
            if(a[i]==5)
            five++;
        
    }
    cout<<"YES\n";
    
    
    
    
    
    
    
    
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
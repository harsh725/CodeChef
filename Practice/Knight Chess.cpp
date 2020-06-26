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
ll r,c,board[7][7]={0};

bool dist(pair<ll,ll>a)
{
    ll x=abs(a.first-r);
    ll y=abs(a.second-c);
    
    if(x>3 ||y>3)
    return false;
    return true;
    
}
void place(pair<ll ,ll > p)
{
    ll x=p.first;
    ll y=p.second;
    ll a=3-r,b=3-c;
    board[x+a][y+b]=1;
    
}
 bool issafe(ll a, ll b)
 {
     if(board[a-2][b+1] ||board[a-2][b-1] || board[a+2][b+1] ||board[a+2][b-1])
     return false;
     if(board[a-1][b+2] ||board[a-1][b-2] || board[a+1][b+2] ||board[a+1][b-2])
     return false;
     
     return true;
     
 }
void solve()
{
    ll n,x,y;
    cin>>n;
    std::vector<pair<ll,ll>> v;
    loop(0,n)
    {
        cin>>x>>y;
        v.emplace_back(make_pair(x,y));
        
    }
    
    cin>>r>>c;
    
    loop(0,7)
    {
        for(ll j=0;j<7;j++)
        board[i][j]=0;
    }
    
    loop(0,n)
    {
        if(dist(v[i]))
        {
            place(v[i]);
        }
    }
    if(issafe(3,3))
    {
        cout<<"NO\n";
        return ;
    }
    if(issafe(2,2) ||issafe(4,4) ||issafe(2,3) ||issafe(2,4) ||issafe(3,2) ||issafe(3,4) ||issafe(4,2) ||issafe(4,3))
    {
     cout<<"NO\n";   
    }
    else
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
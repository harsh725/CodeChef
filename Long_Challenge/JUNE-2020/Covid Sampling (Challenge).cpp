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

void solve()
{
    ll n,p;
    cin>>n>>p;
    int r1=1,c1=1,r2=n,c2=n;
    int count;
    cout<<"1 "<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;
    cin>>count;
    ll net=count+1,total;
    ll c=0,flag=0;
    int a[n+1][n+1]={0};
        for(ll i=1;i<=n;i++)
        {
            cout<<"1 "<<i<<" "<<1<<" "<<i<<" "<<n<<endl;
            cin>>total;
            net-=total;
            if(total==n)//entire row
            {
                for(int k=1;k<=n;k++)
                a[i][k]=1;
                continue;
            }
            c=0;
            if(total==0)
            continue;
            for(ll j=1;j<=n;j+=2)
            {
                if(j==n && n%2==1)
                {
              cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
                cin>>count;
                if(count==1)
                a[i][j]=1;
                break;
                    
                }
                cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j+1<<endl;
                cin>>count;
                if(count!=0)
                {
                    if(count==2)
                    {
                        a[i][j]=1;
                        a[i][j+1]=1;
                        c+=2;
                    }
                    else if(count==1)
                    {
                        cout<<"1 "<<i<<" "<<j<<" "<<i<<" "<<j<<endl;
                        cin>>count;
                        if(count==1)
                        a[i][j]=1;
                        else
                        a[i][j+1]=1;
                        
                        c++;
                    }
                    
                    if(c==total)
                    {
                        
                        break;
                    }
                }
                    
            }
            if(net==1)
            break;
        }
        cout<<"2"<<endl;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
            cout<<a[i][j]<<" ";
            
                
            }
               cout<<endl;
            
        }
        cin>>count;
        
    
    
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
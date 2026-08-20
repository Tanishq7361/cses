#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9 +7;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define vll vector<ll>
inline  ll              powerfn(ll a,ll b,ll mod=MOD){ll ans=1; a%=mod; while(b>0){ if(b&1){ans=(ans*a)%mod;} a=(a*a)%mod; b>>=1;} return ans;}
inline  ll              modsum(ll a,ll b,ll mod=MOD){return ((a%mod + b%mod)%mod);}
inline  ll              modmul(ll a,ll b,ll mod=MOD){return ((a%mod * b%mod)%mod);}
inline  ll              modinv(ll a,ll mod=MOD){return powerfn(a,mod-2,mod);}
inline  ll              gcd(ll a,ll b){if(b==0) return a; return gcd(b,a%b);}
inline  ll              lcm(ll a,ll b){return (a/gcd(a,b) *b);}
inline  ll              nCr(ll n,ll r){if(r>n) return 0; if(r>n-r) r=n-r; ll res=1; for(ll i=1;i<=r;i++) res=res*(n-i+1)/i; return res;}
inline  ll              ansxor(ll n){return n%4==0 ? n : n%4==1 ? 1 : n%4==2 ? n+1 : 0;}

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=1;
    map<ll,ll>mpp;
    for(int i=0;i<n;i++){
        ans*=modinv(mpp[a[i]]+1);
        ans%=MOD;
        mpp[a[i]]++;
        ans*=mpp[a[i]]+1;
        ans%=MOD;
    }
    cout<<(ans-1+MOD)%MOD<<endl;
}

int main(){
    fastio;
    solve();
}
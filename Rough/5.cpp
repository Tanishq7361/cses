// created: 18.08.2026

#include <bits/stdc++.h>
using namespace std;

const long long MAXX=1e18 +13;
const long long MOD=1e9 +7;
const long long MOD1=998244353;
const long long NMOD=999999883;

#define endl            '\n'
#define ll              long long
#define vll             vector<ll>
#define vvll            vector<vector<ll>>
#define vpll            vector<pair<ll,ll>>
#define pll             pair<ll,ll>
#define pb              push_back
#define bitcnt          __builtin_popcountll
#define ff              first
#define ss              second
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define mone            cout<<-1<<endl
#define done            return
#define rep(i,l,r)      for(ll i=(l);i<(r);i++)
#define repr(i,r,l)     for(ll i=(r-1);i>=l;i--)
#define all(x)          (x).begin(),(x).end()
#define srt(x)          sort((x).begin(),(x).end())
#define rev(x)          reverse(x.begin(),x.end())
#define maxvl(v)        *max_element((v).begin(),(v).end())
#define minvl(v)        *min_element((v).begin(),(v).end())
#define fastio          ios_base::sync_with_stdio(false); cin.tie(NULL)
#define deb(x)          cerr<<(#x)<<" is "<<(x)<<endl
#define vin(T,a,n)      vector<T>a(n); rep(i,0,n) cin>>a[i];
#define vvin(T,a,n,m)   vector<vector<T>>a(n,vector<T>(m)); rep(i,0,n) rep(j,0,m) cin>>a[i][j];
inline  bool            fastprime(ll n){return n>1 && (n<=3 || (n%2 && n%3 && [&](){for(ll i=5;i*i<=n;i+=6) if(n%i==0||n%(i+2)==0) return false; return true;}()));}

const   vector<ll>dx    ={1,0,-1,0,1,1,-1,-1};
const   vector<ll>dy    ={0,1,0,-1,1,-1,1,-1};
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<class T>void vout(vector<T>&n){for(auto &x:n){cout<<x<<' ';}cout<<endl;}
template<class T>void vout(vector<vector<T>>&n){for(auto &x:n){for(auto &y:x){cout<<y<<' ';}cout<<endl;}}
#define vpout(a) for(auto &x:a){cout<<x.first<<' '<<x.second<<endl;}

ll dfs(ll node, ll day, ll par, vvll&adj, vvll&dp, vll&a){
    if(dp[node][day]!=-1) return dp[node][day];
    ll ans=day*a[node-1];
    for(auto&x:adj[node]){
        if(x==par) continue;
        ll mn=1e18;
        for(int i=1;i<=3;i++){
            if(i!=day){
                mn=min(mn,dfs(x,i,node,adj,dp,a));
            }
        }
        ans+=mn;
    }
    return dp[node][day]=ans;
}

void solve(){
    ll n;
    cin>>n;
    vin(ll,a,n);
    vvll adj(n+1);
    rep(i,0,n-1){
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    vvll dp(n+1,vll(4,-1));
    ll fina=min({dfs(1,1,-1,adj,dp,a),dfs(1,2,-1,adj,dp,a),dfs(1,3,-1,adj,dp,a)});
    cout<<fina<<endl;
    
}

signed main(){
    fastio;
    // cout<<fixed<<setprecision(15);
    int tt=1; cin>>tt;
    for(int i=1;i<=tt;i++){ // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}


// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// g++ -std=c++17 -O2 practise.cpp -o practise
// ./practise < input.txt > output.txt
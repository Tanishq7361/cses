#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define vll vector<ll>

const int MOD=1e9 +7;

void rec(vector<vll>&dp,ll inx, ll curr, ll nxt, ll n){
    if(inx==n){

    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    if((n*m)&1){
        cout<<0<<endl;
        return;
    }

    vector<vll> dp(m+1,vll(1<<n,-1));
    dp[0][0]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<(1<<n);j++){
            if(dp[i][j]==0) continue;
        }
    }

}

int main(){
    fastio;
    solve();
}
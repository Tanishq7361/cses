// use iff needed
// created: 30.06.2025

#include <bits/stdc++.h>
using namespace std;
const long long  MOD = 1e9 + 7;
const long long  MOD1 = 998244353;

#define endl '\n'
#define ll long long
#define stc static_cast
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define ppb pop_back
#define bitcount __builtin_popcountll
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define one cout << "1\n"
#define mone cout << "-1\n"
#define zro cout << "0\n"
#define ent cout << endl
#define done return
#define fr(i, l, r) for (ll i = (l); i < (r); i++)
#define frr(i, r, l) for (ll i = (r - 1); i >= l; i--)
#define sz(x) ll((x).size()) 
#define all(x) (x).begin(), (x).end()
#define srt(x) sort((x).begin(), (x).end())
#define rsrt(x) sort((x).rbegin(), (x).rend())
#define rev(x) reverse(x.begin(), x.end())
#define maxval(v) *max_element((v).begin(), (v).end())
#define minval(v) *min_element((v).begin(), (v).end())
#define maxid(v) max_element((v).begin(), (v).end()) - ((v).begin())
#define minid(v) min_element((v).begin(), (v).end()) - ((v).begin())

// rotate(v.begin(),v.begin()+v.size()-r,v.end()); for rotating vector r times right
// rotate(v.begin(),v.begin()+r,v.end()); for rotating vector r times left
// Use "set_name".max_load_factor(0.25);"set_name".reserve(512); with unordered set
// Or use gp_hash_table<X,null_type>

void idharDekh()
{
    
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //cout << fixed << setprecision(25);
    cerr << fixed << setprecision(10);
    auto start = std::chrono::high_resolution_clock::now();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        idharDekh();
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    cerr << "Time Taken: " << ((long double)duration.count())/((long double) 1e9) << " sec.\n";
    return 0;
}


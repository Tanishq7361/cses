#include <bits/stdc++.h>
using namespace std;

#define ll long long

void chck(multiset<ll>&lef, multiset<ll>&rig){
    while(lef.size()>rig.size()+1){
        auto it=prev(lef.end());
        rig.insert(*it);
        lef.erase(it);
    }
    while(rig.size()>lef.size()){
        auto it=rig.begin();
        lef.insert(*it);
        rig.erase(it);
    }
    if(!lef.empty() && !rig.empty()){
        auto it1=prev(lef.end());
        auto it2=rig.begin();
        if(*it1>*it2){
            ll x=*it1;
            ll y=*it2;

            lef.erase(it1);
            rig.erase(it2);

            lef.insert(y);
            rig.insert(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll Q;
    cin>>Q;
    multiset<ll>lef,rig;
    while(Q--){
        ll T;
        cin>>T;
        if(T==1){
            ll W;
            cin>>W;
            if(lef.empty() || W<=*prev(lef.end())){
                lef.insert(W);
            } 
            else{
                rig.insert(W);
            }
            chck(lef,rig);
        }
        else if(T==2){
            ll W;
            cin>>W;
            auto it=lef.find(W);
            if(it!=lef.end()){
                lef.erase(it);
            }
            else{
                it=rig.find(W);
                rig.erase(it);
            }
            chck(lef,rig);
        }
        else{
            if(lef.empty()){
                cout<<-1<<endl;
                continue;
            }
            if(lef.size()>rig.size()){
                cout<<*prev(lef.end())<<endl;
            } 
            else{
                ll a=*prev(lef.end());
                ll b=*rig.begin();
                cout<<(a+b)/2<<endl;
            }
        }
    }
}
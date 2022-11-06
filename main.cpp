#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll t;
        cin>>t;

        for(ll i=1; i<=t; i++){
            ll n,row,col;
            cin>>n;

            ll sq=ceil(sqrt(n*1.0));
            ll x=(sq*sq)-n;
            if(x<sq){
                row=sq;
                col=x+1;
            }
            else{
                col=sq;
                row=(n)-((sq-1)*(sq-1));
            }
            if(sq%2==0){
                swap(col,row);
            }
            printf("Case %lld: %lld %lld\n",i,col,row);
        }
}

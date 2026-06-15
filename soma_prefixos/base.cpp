
//A Soma de Prefixos calcula a soma entre valores em um intervalo l e r .Para somar de L até R, você pega o total acumulado até R e joga fora tudo o que acumulou antes de L (por isso usamos L - 1).
//O(1)

#include <bits/stdc++.h>
//soma de prefixos
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
using ll = long long;



int main(){
    fastio;
    ll n=5;
 vector<ll>valor;
 vector<ll>pref(n);
ll x;
 for(int i=0;i<5;i++){
    cin>>x;
    valor.push_back(x);
    
 }
pref[0]=valor[0];
 for(int i=1;i<5;i++){
    //pref[i]=a[0]+a[1]+a[2]+a[3]+...+a[i];
    //pref[i]=pref[i-1]+a[i];
    pref[i]=pref[i-1]+valor[i];

 }
 
 ll q,l,r;
 cin>>q;
 for(int i=0;i<q;i++){
    cin>>l>>r;
   //l sempre comeca do 1 para nao erro de pref[l-1]
    //sum[l,r]= sum[1,r]- sum[1,l-1]
    cout<<"soma entre o intervalo l e r = "<<pref[r]-pref[l-1]<<endl;
 }


    



    return 0;
}
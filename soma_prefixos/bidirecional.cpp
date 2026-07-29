#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0);cin.tie(0);

//soma de prefixos bidirecional
//preparar a soma de prefixos da esquerda para a direita
//preparar a soma de prefixos de cima para baixo
using namespace std;
using ll = long long;

int main(){
    fastio;
    ll n,c,x1,y1,x2,y2;
    char x;
    cin>>n>>c;
    ll mat[n+1][n+1]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            if(x=='*'){
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
        }
    }
    //preparar a soma de prefixos da esquerda para a direita(utilizando mesma matriz)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           mat[i][j]+=mat[i][j-1];
        }
    }
    //preparar a soma de prefixos de cima para baixo(utilizando mesma matriz)
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           mat[i][j]+=mat[i-1][j];
        }
    }


    for(int i=0;i<c;i++){
        cin>>x1>>y1>>x2>>y2;
        //somar o todo/subtrair a parte de cima/substrair a parte da direita/somar pq tirei duas vezes 
        //eu nao coloquei mas é so subtrair todo mundo por 1
      
        ll total = mat[x2][y2];
        ll cima = mat[x1-1][y2];
        ll esquerda = mat[x2][y1-1];
        ll intersecao = mat[x1-1][y1-1];
        
        cout << total - cima - esquerda + intersecao<<"\n";
       
    }
    


    return 0;
}
//Algoritmo tratar esq==dir
//questao fala sobre dois valores(seria equivalente ao (esq )e (dir))
//deu a ideia de um cont sequencial ao longo do for

sort(all(child));
int dir=n-1,esq=0,min=0;

while(esq<=dir){
    if(esq==dir){
        min++;
        break;
    }
    cont+=child[esq]+child[dir];
    if(cont<=x){
        min++;
        esq++;
        dir--;
        cont=0;
    }else
    {
        min++;
        dir--;
        cont=0;
        
    }

}
cout<<min<<endl;


/*
 * BUSCA BINÁRIA
 * 
 * Complexidade: O(log N)
 * 
 * Uso comum:
 * 1. Encontrar um elemento em um vetor ordenado.
 * 2. Busca Binária na Resposta (Bsearch on answer) -> f(x) é monotônica: F F F F V V V V
 * 
 * Atenção com os limites:
 * - Evite overflow no cálculo do meio: use `mid = l + (r - l) / 2;` em vez de `(l + r) / 2`
 * - Cuidado com loops infinitos: verifique se a atualização usa `l = mid + 1` ou `r = mid - 1`
 */

int busca_binaria(vector<int>&vet,int fim,int x){
    int ini=0;
    int meio;
    while(ini<=fim){
        meio=ini+ (fim-ini)/2;

        if(vet[meio]==x){
            return meio;
        }else
        {
            if(vet[meio]<x){
                ini=meio+1;
            }
            else
            {
                fim=meio-1;
            }
        }
    }
    return -1;


}
/** BITSET
 
Armazenar string binária de tamanho N de forma eficiente
- Operações bitwise como & ^ |
- reset(), count(), any(), flip()
- Complexidade O(N/32) ou O(N/64)
*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// declaração: bitset<SIZE>, SIZE deve ser conhecido em tempo de compilação
	bitset<8> x(42);
	cout << "x: " << x << "\n";
	cout << "x: " << x.to_ullong() << "\n"; // toma cuidado com overflow
 
	x[0] = 1;///o bit menos significativo la da esquerda p direita
	x.flip(1);
 
 
	cout << x << "\n";
 
	cout << x.count() << "\n";//conta quantos 1 estao presentes
	cout << x.any() << "\n";// conta se tem pelo menos 1 bit
	cout << x.all() << "\n";//verifica se todos os bits estao ativos
 
	bitset<8> y("01101011");
	cout << "y: " << y << "\n";
	cout << "(x|y): " << (x|y) << "\n"; // O(N/32) ou O(N/64)
	cout << "(x&y): " << (x&y) << "\n";
	cout << "(x^y): " << (x^y) << "\n";
 
	cout << (~x) << "\n";//tudo que esta 0 vira 1 e 1 vira 0
 
	// percorrer nos bits setados de um bitset:
	const int N = 8;
	bitset<N> bts(26); // 00011010
	for (int i = bts._Find_first(); i < N; i = bts._Find_next(i)) {
		cout << "o bit " << i << " está setado!\n";
	}
	bts>>=1;//desloca todos os bits para direita e zerando o 
	bts<<=1;//desloca todos os bits para esquerda 


    
}
 
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
 
	x[0] = 1;
	x.flip(1);
 
 
	cout << x << "\n";
 
	cout << x.count() << "\n";
	cout << x.any() << "\n";
	cout << x.all() << "\n";
 
	bitset<8> y("01101011");
	cout << "y: " << y << "\n";
	cout << "(x|y): " << (x|y) << "\n"; // O(N/32) ou O(N/64)
	cout << "(x&y): " << (x&y) << "\n";
	cout << "(x^y): " << (x^y) << "\n";
 
	cout << (~x) << "\n";
 
	// percorrer nos bits setados de um bitset:
	const int N = 8;
	bitset<N> bts(26); // 00011010
	for (int i = bts._Find_first(); i < N; i = bts._Find_next(i)) {
		cout << "o bit " << i << " está setado!\n";
	}



    
}
 
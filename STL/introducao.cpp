#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility> // Para pair
#include <map>
#include <set>

using namespace std;

int main() {
    // ==========================================
    // VECTOR (Array dinâmico, tamanho flexível)
    // O(1) acesso, O(1) no final, O(N) no meio
    // ==========================================
    vector<int> v;

    v.push_back(10);       // Adiciona no final [10]
    v.push_back(20);       // Adiciona no final [10, 20]
    v.pop_back();          // Remove o último [10]
    int tam = v.size();    // Tamanho atual
    bool v_vazio = v.empty(); // Verifica se está vazio
    v.clear();             // Apaga tudo
    v.erase(v.begin()+1);//remover a posicao 1
    v.resize(5);//reduz ou aumenta o tam do vetor
    v.resize(5,-1);//reduz ou aumenta e os vazios começam com -1, ou seja, valores= (3 , 5 , 2, -1 , -1)
    vector<int> v2(5, -1); // Cria vector de tamanho 5 preenchido com -1

    // ==========================================
    // PAIR (Par de dois valores de qualquer tipo)
    // Útil para coordenadas (x, y) ou grafos com peso
    // ==========================================
    vector<pair<int,int>>vs;
    vs.push_back({1,2});
    pair<int, string> p;
    p = make_pair(1, "Filipe"); // Cria o par
    p = {2, "Git"};             // Sintaxe moderna (C++11)
    int id = p.first;           // Acessa o 1º elemento (2)
    string nome = p.second;     // Acessa o 2º elemento ("Git")

    // ==========================================
    // STACK (Pilha - LIFO: Último a entrar, primeiro a sair)
    // O(1) para inserir, remover e olhar o topo
    // ==========================================
    stack<int> s;
    s.push(5);             // Insere o 5 no topo
    s.push(10);            // Insere o 10 no topo (Pilha: [5, 10 < topo])
    int topo = s.top();    // Olha o elemento do topo (10) sem remover
    s.pop();               // Remove o elemento do topo
    s.size(); s.empty();   // Tamanho e se está vazia

    // ==========================================
    // QUEUE (Fila - FIFO: Primeiro a entrar, primeiro a sair)
    // O(1) para inserir no fim, remover do início e olhar as pontas
    // ==========================================
    queue<int> q;
    q.push(10);            // Entra na fila: [10]
    q.push(20);            // Entra na fila: [10, 20]
    int frente = q.front(); // Olha quem está na frente (10)
    int tras = q.back();   // Olha quem está no fim (20)
    q.pop();               // Remove quem está na frente (10 sai, 20 vira a frente)
    q.size(); q.empty();   // Tamanho e se está vazia

    // ==========================================
    // SET (Conjunto ordenado, ELEMENTOS ÚNICOS)
    // Implementado como Árvore. O(log N) para tudo.
    // ==========================================
    set<int> st;
    st.insert(5);          // Insere 5
    st.insert(2);          // Insere 2. Conjunto agora: {2, 5} (Sempre ordenado)
    st.insert(5);          // Tenta inserir 5 de novo (ignorado, não aceita repetidos)
    
    // Buscar elemento: retorna iterator para o item, ou st.end() se não achar
    if (st.find(2) != st.end()) { /* achou o 2 */ }
    
    // Contar ocorrências: como não repete, serve para checar existência (1 ou 0)
    if (st.count(5)) { /* 5 existe no set */ }
    
    st.erase(2);           // Remove o elemento 2
    st.size(); st.empty(); // Tamanho e se está vazio

    // ==========================================
    // MAP (Dicionário/Tabela - Chave -> Valor)
    // Chaves ordenadas e ÚNICAS. O(log N) para operações.
    // ==========================================
    map<string, int> mp;
    mp["idade"] = 25;      // Cria a chave "idade" com o valor 25
    mp["pontos"] = 100;    // Cria a chave "pontos" com o valor 100
    mp["idade"] = 26;      // Atualiza o valor da chave "idade" para 26
    
    int pts = mp["pontos"]; // Acessa o valor (100)
    
    // Buscar chave: funciona igual ao set
    if (mp.find("idade") != mp.end()) { /* chave existe */ }
    
    mp.erase("pontos");    // Remove a chave "pontos" e seu valor
    mp.size(); mp.empty(); // Tamanho (quantidade de pares) e se está vazio

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
    class fila_media {
    private:
    vector<int> itens;
    int ini = 0, tam = 0, cap = 0;
    double soma = 0;
    public:

explicit fila_media(int cap) : cap(cap), itens(cap) {}

    bool cheia() const { return tam == cap;} 
    bool vazia() const { return tam == 0; } 
    void desenfileira() { 
        if (vazia()) return;
        soma -= itens[ini];
        ini = (ini + 1) % cap;
        tam--;
        
    } 
    void enfileira(int i)  { 
         if (cheia()) {
            desenfileira();
        }
        soma += i;
        int fim = (ini + tam) % cap;  
        itens[fim] = i;
        tam++;
        
    } 
    int proximo() {
         if (tam == 0) return 0;
        return itens[ini];
    }
    double media() const { return soma / tam; }
    int tamanho() { return  tam; } 
};
int main() {
    int arr[] = {10, 2, 3, 5, 6, 10, 7, 9, 2, 6, 3, 13, 6};
    fila_media fila(4);
    for (int i : arr) {
    if (fila.cheia()) fila.desenfileira();
    fila.enfileira(i);
    cout << fila.media() << endl;
    }
// Saida: 10 6 5 5 4 6 7 8 7 6 5 6 7
    return 0;
}
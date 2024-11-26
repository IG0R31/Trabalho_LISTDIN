#include <iostream>
using namespace std;

class Lista
{
private:
    int *valores;
    int tamanho;
    int capacidade;

    void realocar(int n_capacidades){
        int *novos_valores = new int[n_capacidades];
        for(int i = 0; i < tamanho; i++){
        novos_valores[i]=valores[i];
            
        }
        delete[]  valores;
        valores=novos_valores;
        capacidade=n_capacidades;
        cout<<"*************Lista com Capacidade de: "<< capacidade << " *************" << endl;
        }
public:
    Lista(int cap_inicial = 50)
        : capacidade(cap_inicial), tamanho(0){
        valores = new int[capacidade];
    }

    ~Lista(){
        delete[] valores;
    }



    void adiciona(int valor){
        if(tamanho == capacidade){
            realocar(capacidade * 2);
        }

        int i = tamanho -1;
        while(i >= 0 && valores[i] > valor){
            valores[i+1] = valores[i];
            i--;
        }
        valores[i+1] = valor;
        tamanho++; 

    }

    void deletar(int valor){
        int i;
        for (i = 0; i < tamanho; i++){
            if(valores[i]== valor){
                break;
            }
        }
        if(i==tamanho){
            cout<<"Elemento"<<valor<<"não encontrado";
            return;
        }
        for(int j= i ;j < tamanho - 1; j++){
            valores[j] = valores[j+1];
        }
        tamanho--;

        if(tamanho >0  && tamanho <= capacidade/4){
            realocar(capacidade/2);
        }     
    }

    bool existe(int valor) const{
        for (int i = 0; i < tamanho; i++) {
            if(valores[i]== valor){
                return true;
            }
        }
        return false;
    }

    void print() const{
        cout<<"||| LISTA |||"<<endl;
        for(int i = 0; i < tamanho; i++){
            cout<<" "<< valores[i] <<"";
        }
        cout<<endl;

    }
};

int  main(){
    Lista lista;

        int num1;
        cout<<"Digite um número para mostrar o processo Dinâmico da Lista: "<<endl;
        cin>>num1;
        lista.adiciona(num1);
        lista.print();
        for(int  i= 1; i <= 50; i++){
            lista.adiciona(i);
        }
        lista.print();

        for(int i= 0;i < 40; i++){
            lista.deletar(i);
            lista.print();
        }
        
        
}

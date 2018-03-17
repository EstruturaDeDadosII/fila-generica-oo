//
// Created by thiago on 14/03/2018.
//

#ifndef FILA_GENERICA_FILA_H
#define FILA_GENERICA_FILA_H

#include <iostream>
#include <deque>

using namespace std;

template<class T>
class fila {

public:
    deque<T> numeros;

    void adicionaNumeroNoFimDaFila(T numero) {
        numeros.push_back(numero);
    }

    int removeNumeroDoTopo() {
        T numero = numeros.front();
        numeros.pop_front();
        return numero;
    }

    int retornaObjDoTopo() {
        return numeros.front();
    }

    bool estaVazia() {
        return numeros.empty();
    }

    void listaFila() {

        if (numeros.empty()) {
            cout << "A sua fila nao contem nenhuma numero" << endl;
            return;
        }

        cout << endl << "---------------" << endl;
        for (typename deque<T>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
            cout << " " << *it;
        }
        cout << endl << "---------------" << endl;
    }

    int tamanhoDaFila() {
        return numeros.size();
    }

};


#endif //FILA_GENERICA_FILA_H

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
    deque<T> t;

    void adicionaNumeroNoFimDaFila(T t) {
        this->t.push_back(t);
    }

    int removeNumeroDoTopo() {
        T t = this->t.front();
        this->t.pop_front();
        return t;
    }

    int retornaObjDoTopo() {
        return t.front();
    }

    bool estaVazia() {
        return t.empty();
    }

    void listaFila() {

        if (t.empty()) {
            cout << "A sua fila nao contem nenhuma numero" << endl;
            return;
        }

        cout << endl << "---------------" << endl;
        for (typename deque<T>::iterator it = t.begin(); it != t.end(); ++it) {
            cout << " " << *it;
        }
        cout << endl << "---------------" << endl;
    }

    int tamanhoDaFila() {
        return t.size();
    }

};

#endif //FILA_GENERICA_FILA_H

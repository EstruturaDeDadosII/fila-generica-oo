#include <iostream>
#include "fila.h"

fila<int> numeros;

void menu();

int main() {
    menu();
    return 0;
}

void menu() {

    char escolha = 'a';
    int numero = -9999999;

    cout << "--------------------------------------" << endl;
    cout << "Menu Principal" << endl;
    cout << "--------------------------------------" << endl << endl;

    cout << "[1] Adicione um numero no fim da fila" << endl;
    cout << "[2] Remova um numero do topo da fila" << endl;
    cout << "[3] Retorna numero do topo da fila" << endl;
    cout << "[4] Verifica se a fila esta vazia" << endl;
    cout << "[5] Verifica o tamanho da fila" << endl;
    cout << "[6] Lista a fila" << endl;
    cout << "[0] SAIR DO SOFTWARE" << endl << endl;

    cout << "Digite uma opcao valida: ";
    cin.clear();
    cin >> escolha;

    switch (escolha) {
        case '0':
            cout << "SAINDO..............." << endl;
            return;
        case '1':
            cout << "Digite um numero: ";
            cin.clear();
            cin >> numero;
            numeros.adicionaNumeroNoFimDaFila(numero);
            break;

        case '2':
            if (!numeros.estaVazia()) {
                numeros.removeNumeroDoTopo();
            } else {
                cout << "A sua lista esta vazia" << endl;
            }
            break;

        case '3':
            if (!numeros.estaVazia()) {
                cout << "O numero do topo eh: " << numeros.retornaObjDoTopo();
            } else {
                cout << "A sua lista esta vazia" << endl;
            }
            break;

        case '4':
            if (numeros.estaVazia()) {
                cout << "Sua lista esta vazia" << endl;
            } else {
                cout << "A sua lisa não esta vazia" << endl;
            }
            break;

        case '5':
            if (!numeros.estaVazia()) {
                cout << "Voce tem " << numeros.tamanhoDaFila() << " na fila de numeros." << endl;
            } else {
                cout << "Voce nao tem nenhum numero na fila de numeros." << endl;
            }
            break;

        case '6':
            numeros.listaFila();
            break;

        default:
            cout << "Opcao invalida. Tente nvamente ..." << endl << endl;
    }

    cout << endl << endl;

    menu();
}
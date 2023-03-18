#include "LinkedList.h"
#include <bits/stdc++.h>

using namespace std;

void LinkedList::mostrar() {
    if (header) {
        Node *aux = header;
        do {
            cout << aux -> dato << " ";
            aux = aux -> p;
        } while (aux);
    } else {
        cout << "Empty list";
    }
}

void LinkedList::insertar_ini() {
    Node *nuevo = new Node;
    cin >> nuevo -> dato;
    nuevo -> p = header;
    header = nuevo;
}

void LinkedList::insertar_final() {
    Node *nuevo = new Node;
    cout << "Dato: ";
    cin >> nuevo -> dato;
    nuevo -> p = nullptr;
    if (!header)
        header = nuevo;
    else {
        Node *aux = header;
        while (aux -> p) {
            aux = aux -> p;
        }
        aux -> p = nuevo;
    }
}

void LinkedList::eliminar_inicio() {
    if (header) {
        Node *aux = header;
        header = header -> p;
        cout << aux->dato << "Eliminado";
        delete aux;
    } else
        cout << "Empty list";
}

void LinkedList::eliminar_final() {
    if (header) {
        if (!header -> p) {
            Node *aux = header;
            delete aux;
            header = nullptr;
        } else {
            Node *aux1;
            Node *aux2 = header;
            while(aux2 -> p) {
                aux1 = aux2;
                aux2 = aux2 -> p;
            }
            aux1 -> p = nullptr;
            delete aux2;
        }
    } else
        cout << "Empty List";
}

void LinkedList::eliminar_todo() {
    if (header) {
        Node *aux = header;
        while (aux -> p) {
            Node *aux2 = aux;
            aux = aux -> p;
            delete aux2;
        }
        delete aux;
        header = nullptr;
    } else
        cout << "Empty list";
}

void LinkedList::eliminar_multiplos_de(int x) {
    if (header) {
        bool find = false;
        Node *aux = header;
        Node *aux1;
        do {
            if (aux->dato == x && !find) {
                find = true;
                aux1 = aux;
                aux = aux->p;
                continue;
            }
            if (find)
                if (aux->dato % x == 0) {
                    Node *aux2 = aux;
                    aux = aux->p;
                    delete aux2;
                    aux1->p = aux;
                    continue;
                }
            aux1 = aux;
            aux = aux->p;
        } while (aux);
        if (!find)
            cout << "El elemento no existe en la lista.";
    } else
        cout << "Empty list";
}

void LinkedList::insertar_Array() {
    cout << "Cantidad de elementos: ";
    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &e : V) {
        cin >> e;
        insertar_final(e);
    }
}

void LinkedList::insertar_final(int x) {
    Node *nuevo = new Node;
    nuevo->dato = x;
    nuevo->p = nullptr;
    if (!header)
        header = nuevo;
    else {
        Node *aux = header;
        while (aux -> p) {
            aux = aux -> p;
        }
        aux -> p = nuevo;
    }
}

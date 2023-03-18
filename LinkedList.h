//
// Created by alex on 8/03/23.
//

#ifndef ASDAS_LINKEDLIST_H
#define ASDAS_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node *header{};

public:
    void mostrar();
    void insertar_ini();
    void insertar_final();
    void insertar_final(int);
    void eliminar_inicio();
    void eliminar_final();
    void eliminar_todo();
    void eliminar_multiplos_de(int);
    void insertar_Array();
};


#endif //ASDAS_LINKEDLIST_H

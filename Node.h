//
// Created by alex on 8/03/23.
//

#ifndef ASDAS_NODE_H
#define ASDAS_NODE_H


class Node {
public:
    int dato;
    Node *p;

    Node() {
        dato = 0;
        p = nullptr;
    }
};


#endif //ASDAS_NODE_H

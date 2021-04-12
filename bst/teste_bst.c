#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    arvore raiz;

    raiz = NULL;
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 30);
    preorder(raiz); 
}

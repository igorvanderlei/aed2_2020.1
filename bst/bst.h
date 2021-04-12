#ifndef BST_H
#define BST_H

typedef struct no {
    int valor;
    struct no *esq, *dir;
} no;

typedef no * arvore;

arvore inserir (arvore raiz, int valor);

void preorder(arvore raiz);

#endif

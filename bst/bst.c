#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

arvore inserir (arvore raiz, int valor) {
    //caso base
    if(raiz == NULL) {
        //alocar espaço em memória para o novo no
        no* novo = (no *) malloc(sizeof(no));

        //inicializar os valores do novo no
        novo->esq = NULL;
        novo->dir = NULL;
        novo->valor = valor;

        //fazer a ligação do nó com o restante da árvore
        return novo ;
    } else {
        if(valor > raiz->valor) {
            //caso recursivo inserir na sub-árvore direita
            raiz->dir = inserir(raiz->dir, valor);   
        } else {
            //caso recursivo inserir na sub-árvore esquerda
            raiz->esq = inserir(raiz->esq, valor);   
        }
        return raiz;	
    }
}


void preorder(arvore raiz) {
    if(raiz != NULL) {
           printf("[%d]", raiz->valor);
           preorder(raiz->esq);
           preorder(raiz->dir);
    }
}

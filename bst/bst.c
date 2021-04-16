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

arvore remover (arvore raiz, int valor) {
    if(raiz == NULL)
        return NULL;

    if(raiz->valor == valor) {
        //caso 1 - zero filho
          if(raiz->esq == NULL && raiz->dir == NULL) {
                //free
                return NULL;
            }
        //caso 2

        //caso 3
        //fazer uma função que retorna o valor do maior
    } else {
        if(valor < raiz->valor) {
            raiz->esq = remover(raiz->esq, valor);
        } else {
            raiz->dir = remover(raiz->dir, valor);
        }
    }
}



void preorder(arvore raiz) {
    if(raiz != NULL) {
           printf("[%d]", raiz->valor);
           preorder(raiz->esq);
           preorder(raiz->dir);
    } 
}

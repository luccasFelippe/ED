#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

/*Arquivos cabeçalho comuns ao programa */

#include<stdio.h>
#include<stdlib.h>

/*Específico de sistema */
#ifdef __linux__
    #define LIMPA "clear"
#endif // __linux__

#ifdef _Win32
    #define LIMPA "cls"
#endif // _Win32

/*definição da pilha */

struct pilha
{
    int dado;
    struct pilha *abaixo;
};

typedef struct pilha pilha;

/*Prototipos*/
pilha *push(pilha *topo, int dado);
void mostrarPilha(pilha *topo);

#endif // PILHA_H_INCLUDED

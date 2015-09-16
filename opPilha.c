#include "pilha.h"

pilha *push(pilha *topo, int data)
{
    pilha *newTopo;
    pilha *newElemento;

    if(topo == NULL)
	{
		/*Ainda não existe lista*/
        newElemento = malloc(sizeof(pilha));
        if(newElemento == NULL)
		{
			return NULL; //NO MEMORY
		}
		else
		{
			newElemento->dado = data;
			newElemento->abaixo = NULL;
			newTopo = newElemento;
			return newTopo;
		}
	}
	else
	{
        /*já existe uma pilha */
		newElemento = malloc(sizeof(pilha));
		if(newElemento == NULL)
		{
			return NULL;
		}
		else
		{
            newElemento->dado = data;
            newElemento ->abaixo = topo;
            newTopo = newElemento;
            return newTopo;
		}
	}

}


void mostrarPilha(pilha *topo)
{
	pilha *index;
	index = topo;

	if(topo == NULL)
	{
		printf("Sem PILHA\n");
		return;
	}
	else
	{
        while(index != NULL)
		{
			printf("\n%d",index->dado);
			index = index -> abaixo;
		}
	}

}

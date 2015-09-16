#include "pilha.h"

void imprimirMenu();
void processaMenu();
pilha *op1(pilha* topo);


int main()
{
	while(1)
	{
		imprimirMenu();
		processaMenu();
	}
	return 0;
}

void imprimirMenu()
{
	system(LIMPA);
	printf("----------MENU-----------");
	printf("\n1) Inserir na Pilha");
	printf("\n2) Mostrar Pilha");
	printf("\n3) pop & show");
	printf("\n4) Sair");
}

void processaMenu()
{
	int op;
	static pilha *topo = NULL;

	/*inicialmente não tem pilha*/
	printf("\n");

	scanf("%d",&op);


	switch(op)
	{
	case 1:
        /* opção 1 => Inserir na pilha */
        printf("Inserir na Pilha\n");
		topo = op1(topo);
        break;
	case 2:
		/*opção 2 => Mostrar a PILHA */
        mostrarPilha(topo);
        break;
	case 4:
		exit(1);
		break;
	default:
		printf("\nOpção Inválida");

	}
}

pilha *op1(pilha* topo)
{
	int dado;
	pilha *newTopo;

	printf("\nEntre com o dado: ");
	scanf("%d",&dado);

	newTopo = push(topo,dado);
	if(newTopo == NULL)
	{
		printf("\nSem Memória");

	}
	return newTopo;
}

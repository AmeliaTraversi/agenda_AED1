#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[20];
    int idade;
    int mat;
}pes;


void atualiza(void *pbuffer, int *c, int *cp, pes *p); //atualizaponteiro;
void adiciona(void *pbuffer, int *c, int *cp, pes *p);
void lista(void *pbuffer, int *c, int *cp, pes *p);

int main()
{
    void *pbuffer; //buffer;
    int *c = 0; //indice;
    int *cp = 0; //numero de pessoas;
    pes *p; //começo das pessoas;

    printf("Opçoes: 1 - Adiciona. 2 - Retira pelo nome. 3 - Lista.");


    pbuffer = malloc(sizeof(int) + sizeof(int));


    return 0;
}

void lista(void *pbuffer, int *c, int *cp, pes *p)
{




}

void adiciona(void *pbuffer, int *c, int *cp, pes *p)
{
    cp++;
    atualiza(pbuffer, c, cp, p);
    p = p + *cp;

    printf("Nome:");
    scanf("%s", p.nome);
    getchar(); //pega ENTER;
    printf("Idade:");
    scanf("%d", p.idade);
    printf("Matricula:");
    scanf("%d", p.mat);

   atualiza(pbuffer, c, cp, p);
    }

//pronto
void atualiza(void *pbuffer, int *c, int *cp, pes *p)
{
    pbuffer = realloc(sizeof(int) + sizeof(int) + ( (*cp) * sizeof(pessoa));
    c = (int x) pbuffer;
    cp = c + 1;
    p = cp +1;
}

#include <stdio.h>
#include <malloc.h>

typedef struct {
    int chave;
    int idade;
} IdadePessoa;

typedef struct {
    //Uma lista de ponteiros
    IdadePessoa* arranjo[10];
    int nmrElem;
} Lista;

int main(){
    //definindo o ponteiro para a estrutura
    IdadePessoa* i = (IdadePessoa*) malloc(sizeof(IdadePessoa));

    i->idade = 10;

    //Testes
    Lista* l = (Lista*) malloc(sizeof(Lista));

    inicialiazarLista(l);

    inserirElemento(l,i);

    exibirElementos(l);

    return 0; 
}

void inicialiazarLista(Lista* l){
    l->nmrElem = 0;
}

void exibirElementos(Lista* l){
    for(int j = 0; j < l->nmrElem; j++){
        printf("idade : %i \n",l->arranjo[j]->idade);
    }
}   

int retornarElementosValidos(Lista* l){
    return l->nmrElem;
} 

int buscarElemento(Lista* l, int idade){
    for(int i = 0; i <  l->nmrElem ; i++){
        if(l->arranjo[i]->idade == idade){
            return i;
        }
    }
    return -1;
}

//Retorna o index do elemento ou -1 se a lista estiver cheia
int inserirElemento(Lista* l,IdadePessoa* pessoa){
    //Verifica se a lista é maior ou igual ao numero de elementos
    if((sizeof(l->arranjo) / sizeof(l->arranjo[0]) <= l->nmrElem)){
        return -1;
    }

    l->arranjo[l->nmrElem] = pessoa;

    l->nmrElem += 1;

    return l->nmrElem - 1;

}
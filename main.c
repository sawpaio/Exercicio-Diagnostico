////////// Lucas Sampaio de Melo
/////// BEC - 8 semestre
/////// 20/08/2020
////// Este programa tem como objetivo criar uma lista dinamica encadeada, e
////// printar ao final as palavras na ordem contraria que foram coletadas.

#include <stdlib.h>
#include <stdio.h>

typedef struct dataNode{
    int palavras;
} DataNode;

typedef struct node{
    DataNode data;
    struct node* next;
} Node;

typedef struct list{
    int size;
    Node* head;
} List;

//cabe�alho
List* createList();
void push(List* list, DataNode data);
void printList(List* list);

List* createList(){
    List* list = (List*) malloc(sizeof(List));

    list->size = 0;
    list->head = NULL;

    return list;
}

void push (List* list, DataNode data){
    //fun��o para enviar os dados recebidos para a lista.
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    //receber o dado
    node->next = list->head;
    list->head = node;
    //definir que o primeiro elemento � o n� cabeca, ou ponteiro para ponteiro.
    list->size++;
    //incremento do tamanho da lista
}

void printList(List* list){
    //fun��o para printar as palavras.
    Node* pointer = list->head;
    //verifica se a lista est� vazia.
    if (pointer == NULL){
        printf("Lista vazia");
    }
    //imprimir at� chegar na condi��o NULL.
    while(pointer != NULL){
        printf("%s ", pointer->data.palavras);
        pointer = pointer->next;
    }
}

int main()
{
    List* l = createList();
    DataNode data;
    //inser��o de palavras.
    data.palavras = "cachorro";
    push(l, data);
    data.palavras = "gato";
    push(l, data);
    data.palavras = "galinha";
    push(l, data);
    data.palavras = "vaca
    push(l, data);
    printList(l);
}

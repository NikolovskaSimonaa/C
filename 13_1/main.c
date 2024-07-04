#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int number;
    char character;
    struct Node *link;
}Node;

typedef Node *NodePtr;

void insert(NodePtr *head, int n, char c);
void pecatiListaNanazad(NodePtr head);

int main(){
    int i, broj, n;
    char c;
    NodePtr head=NULL;
    printf("Kolku elementi ima listata:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Vnesi broj i karakter za sledniot element od listata:\n");
        scanf("%d", &broj);
        scanf(" %c", &c);
        insert(&head,broj,c);
    }
    pecatiListaNanazad(head);
    printf("NULL");
    return 0;
}

void insert(NodePtr *head, int n, char c){
    NodePtr new;
    NodePtr move=*head;
    new=malloc(sizeof(Node));
    if(new!=NULL){
        new->number=n;
        new->character=c;
        new->link=NULL;
    }
    if(move==NULL){
        new->link=*head;
        *head=new;
    }
    else{
        while(move->link!=NULL)
            move=move->link;
        move->link=new; //dodadi go noviot jazol na kraj
    }
}

void pecatiListaNanazad(NodePtr head){
    if(head==NULL){
        printf("Listata e prazna\n");
        return;
    }
    if(head->link==NULL){
        printf("|%d||%c|->", head->number, head->character);
        return;
    }
    else{
        pecatiListaNanazad(head->link);
        printf("|%d||%c|->", head->number, head->character);
    }
}


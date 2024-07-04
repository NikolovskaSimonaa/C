#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int number;
    struct Node *link;
}Node;

typedef Node *NodePtr;

void insert(NodePtr *head, int n);
void printList(NodePtr head);
void sortRastenje(NodePtr *head);
void sortOpagjanje(NodePtr *head);
int delete(NodePtr *head, int n);

int main(){
    int n, broj, i, izbor;
    NodePtr head=NULL;
    printf("Kolku elementi ima listata:\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Vnesi broj sledniot element od listata:\n");
        scanf("%d", &broj);
        insert(&head,broj);
    }
    printList(head);
    printf("Vnesi 1 za rastecko sortiranje i 2 za opagjacko sortiranje:\n");
    scanf("%d", &izbor);
    if(izbor==1)
        sortRastenje(&head);
    else
        sortOpagjanje(&head);
    printList(head);
    printf("Vnesi jazol/vrednost za brisenje:\n");
    scanf("%d", &broj);

    if(delete(&head,broj))
        printf("Jazolot/vrednosta e uspesno izbrisana\n");
    else
        printf("Jazol so takva vrednost nema vo listata\n");
    printList(head);
    return 0;
}

void insert(NodePtr *head, int n){
    NodePtr new;
    NodePtr move=*head;
    new=malloc(sizeof(Node));
    if(new!=NULL){
        new->number=n;
        new->link=NULL;
    }
    if(move==NULL){
        new->link=*head;
        *head=new;
    }
    else{
        while(move->link!=NULL)
            move=move->link;
        move->link=new;  //dodadi go noviot jazol na kraj
    }
}

void printList(NodePtr head){
    if(head==NULL)
        printf("Listata e prazna\n");
    else{
        while(head!=NULL){
            printf("|%d|->", head->number);
            head=head->link;
        }
        printf("NULL\n");
    }
}

void sortRastenje(NodePtr *head){
    NodePtr move;
    int swap, temp;
    do{
        swap=0;
        move=*head;
        while(move->link!=NULL){
            if(move->number > move->link->number){
                temp=move->number;
                move->number=move->link->number;
                move->link->number=temp;
                swap=1;
            }
            move=move->link;
        }
    }while(swap);
}

void sortOpagjanje(NodePtr *head){
    NodePtr move;
    int swap, temp;
    do{
        swap=0;
        move=*head;
        while(move->link!=NULL){
            if(move->number < move->link->number){
                temp=move->number;
                move->number=move->link->number;
                move->link->number=temp;
                swap=1;
            }
            move=move->link;
        }
    }while(swap);
}

int delete(NodePtr *head, int n){
    NodePtr previous, current, temp;
    if(n==(*head)->number){
        temp=*head;
        *head=(*head)->link;
        free(temp);
        return n;
    }
    else{
        previous=*head;
        current=(*head)->link;
        while(current!=NULL && current->number!=n){
            previous=current;
            current=current->link;
        }
        if(current!=NULL){
            temp=current;
            previous->link=current->link;
            free(temp);
            return n;
        }
        else
            return 0;
    }
}

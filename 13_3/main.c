#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100

typedef struct Stack{
    char info;
    struct Stack *next;
}Node;

typedef Node *NodePtr;

void push(NodePtr *top, char c);
char pop(NodePtr *top);
int isEmpty(NodePtr top);

int main(){
    char string[max], prevrten[max];
    int i;
    NodePtr top=NULL;
    printf("Vnesi string:\n");
    gets(string);
    for(i=0;i<strlen(string);i++){
        push(&top,string[i]);
    }
    i=0;
    while(!isEmpty(top)){
        prevrten[i]=pop(&top);
        i++;
    }
    prevrten[i]='\0';
    printf("Prevrteniot string e: %s\n", prevrten);
    return 0;
}

void push(NodePtr *top, char c){
    NodePtr new;
    new=malloc(sizeof(Node));

    if(new!=NULL){
        new->info=c;
        new->next=*top;
        *top=new;
    }else {
        printf("Nema dovolno memorija\n");
    }
}

char pop(NodePtr *top){
    NodePtr temp;
    char info;

    temp=*top;
    info=(*top)->info;
    *top=(*top)->next;
    free(temp);

    return info;
}

int isEmpty(NodePtr top){
    return top==NULL;
}

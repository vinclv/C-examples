#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* \ */


struct node {
    int value;
    struct node *next;
};

typedef struct node node;



int print_list(node **head){
    node *current=*head;
    while(current!=NULL){
        printf("inside print_list : %d\n",current->value);
        current=current->next;
    }

}

int add_node(node **head, int val) {
    node *current=*head;
    if(current==NULL){
        current=(node *) malloc(sizeof(current));
        current->value=val;
        current->next=NULL;
        *head=current;
    }
    else{
        while(current->next!=NULL){
            current=current->next;
        }
        current->next = (node *) malloc(sizeof(current));
        current->next->value=val;
        current->next->next=NULL;
    }
    return 0;
}


int add_first(node **head, int val){
    node* current=(node *) malloc(sizeof(current));
    current->value=val;
    current->next = *head;
    *head=current;
}

int delete_node_by_value(node **head, int val){
    node *current=*head, *prev=*head;
    while(current!=NULL){
        if(current->value==val){
            if(current==prev){
                *head=current->next;
                break;
            }
            else{
                prev->next=current->next;
                break;
            }
        }
        else{
            prev=current;
            current=current->next;
        }
    }
    free(current);
}


int main() {
    node *head = NULL;
    int item;
    for(item=0;item<10;item++)
    {
        add_node(&head,item+100);
    }
    add_first(&head, 2005);
    printf("Before Delettion\n");
    print_list(&head);
    printf("After Delettion\n");
    delete_node_by_value(&head, 106);
    print_list(&head);
    return 0;
}
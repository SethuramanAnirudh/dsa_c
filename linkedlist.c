#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<

struct node {
    int data;
    struct node* next;
};
/// @brief //adding node function
/// @param  //head pointer is parameter
/// @param  
/// @return // 1 for success and negative for fail 

int add_node(struct node**, int);

int remove_node(struct node**);

void display_linkedlist(struct node**);

int main(){
    struct node* head = NULL;
    char choice;
    int x;

    while(1){
    label :
    printf(" 1-->add node\n 2-->delete node 3-->display linked list\n ");
    scanf("%hhd",&choice);
    switch(choice){
        case 1 :
        printf("Enter the data to be stored in node list\n");
        scanf("%d",&x);
        add_node(&head,x);
        break;
        case 2 :
        printf("last node will be deleted\n");
        int x = remove_node(&head);
        printf("the deleted node data is %d\n",x);
        if (x==-1){
            printf("failed\n");
        }
        break;
        case 3 :
        display_linkedlist(&head);
        break;
        default :
        printf("invalid please do properly\n");
        goto label;
        }
    }



}


int add_node(struct node **head, int x){
    
    struct node *t1,*temp,*t2;

    if(*head==NULL){
        temp=(struct node*)malloc(sizeof(struct node *));
        *head = temp;
        temp->data=x;
        temp->next=NULL;
    }else if (*head != NULL){
        t1 = *head;
        
        if(t1->next == NULL){
        temp=(struct node*)malloc(sizeof(struct node*));
        temp->data=x;
        temp->next=NULL;
        t1->next=temp;
        }else{
            while (t1->next!=NULL)
            {
                t1=t1->next;
            }
            temp=(struct node *)malloc(sizeof(struct node *));
            temp->data=x;
            temp->next=NULL;
            t1->next=temp;
        }
    }

}
int remove_node(struct node**){

}
void display_linkedlist(struct node** head){
    struct node *t1;
    t1=*head;
    while(t1->next!=NULL){      
       printf("--->%d\t",t1->data);
        t1=t1->next;
    }
}

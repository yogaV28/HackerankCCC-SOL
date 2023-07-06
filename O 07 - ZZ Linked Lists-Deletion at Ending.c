#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void insert(node** headref, int val)
{
    node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    struct node* temp= *headref;
    if(*headref==NULL)
    {
        *headref=newnode;
        newnode->next=NULL;
        return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    }
}
void deleteend(node** headref)
{
   node *toDelete, *secondLastNode;

    if(*headref == NULL)
    {
        return;
    }
    else
    {
        toDelete = *headref;
        secondLastNode = *headref;
        while(toDelete->next != NULL)
        {
            secondLastNode = toDelete;
            toDelete = toDelete->next;
        }
        if(toDelete == *headref)
        {
            *headref = NULL;
        }
        else
        {
            secondLastNode->next = NULL;
        }
        free(toDelete);
    }
}
void displayList(node** headref)
{
    node* temp=*headref;
    if(*headref == NULL)
    {
        return;
    }
    else
    {
        while(temp->next != NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
int main() {
    node* head = NULL;
    int size;
    scanf("%d",&size);
    int i;
    for(i=0;i<size;i++)
    {
        int val;
        scanf("%d",&val);
        insert(&head,val);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        deleteend(&head);
    }
    displayList(&head);
    return 0;
}

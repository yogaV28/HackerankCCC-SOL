#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long int t;
    int i,data;
    scanf("%ld",&t);
    struct node* head;
    for(i=0;i<t;i++)
    {
        scanf("%d",&data);
        node* temp1=(node *)malloc(sizeof(node*));
        temp1->data=data;
        temp1->next=NULL;
        if(i==0)
        {
            head=temp1;
        }
        else 
        {
            struct node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=temp1;
        }
    }
    scanf("%d",&data);
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            printf("yes");
            return 0;
        }
        temp=temp->next;
    }
    printf("no");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
    struct node
    {
        int data;
        struct node*next;
    };

int main(){
    int i, n, item;
    struct node*p, *q, *head;
    printf("Enter the number of node");
    scanf("%d",&n);

    printf("Enter the head of node");
    scanf("%d",&item);

    q = (struct node*)malloc(sizeof(struct node));
    q -> data = item;
    q -> next = NULL;
    head = q;
    p = head;
    for(i = 1;i<n; i++)
    {
        printf("Enter the item of node");
        scanf("%d",&item);
        q = (struct node*)malloc(sizeof(struct node));
        q -> data = item;
        q -> next = NULL;
        p -> next;
        p = p -> next;
    }
        printf("\n");
        p = head;
        while(p!= NULL)
        {
            printf("%d",p -> data);
            p = p->next;
        }
    return 0;
}

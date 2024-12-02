#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
int main()
{
    int i,n, item;
    struct node *p, *q, *head;
    printf("Enter the number of Nodes ");
    scanf("%d",&n);

    printf("Enter the head of Node: ");
    scanf("%d", item);

    q = (struct node*)malloc(sizeof(struct node));
    q-> data=item;
    q->next = NULL;

    head = q;
    p = head;
    for (int i=1;i<n;i++){

        printf("Enter the items of Node");
    scanf("d",&item);

    q = (struct node*)malloc(sizeof(struct node));
    q ->data= item;
    q ->next = NULL;
    p->next =q;
    p= p ->next;
    }

    printf("\n");
    p = head;
    while (p!=NULL)
    {
        printf("d",p->data);
        p=p->next;
    }
    return 0;


}

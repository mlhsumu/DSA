
#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* next;
};
int main(){
    int i, n, item;  //i=loop, n=node of number,item=data/link/address
    struct node *p, *q, *head; //*P,*q for taking any value and it shows NULL if take another one NULL goes to next one.And for keeping track *p *q used//
   printf("Enter the number of Node: ");
    scanf("%d",&n);

 printf("Enter the Head of Node: ");
    scanf("%d",&item);

    q = (struct node* ) (sizeof (struct node));
    q -> data = item; // in this step q is a node its have data and link address
    q -> next = NULL;

    head = q; //heads value changing not q
    p = head; //again changed and p will move/traverse thats why in p we keep the head without unchanging/// also it will not effect on item
    for (int i =1; i<n; i++){

        printf("Enter the Items of Node: ");
       scanf("%d",&item); //didnot understand for what item taken again

    q = (struct node*) (sizeof (struct node));
    q -> data = item;
    q -> next = NULL;
    p -> next = q; // p is targeting q for Next/address referring p to q
    p = p -> next;
    }
    printf("\n");
    p = head;
    while(p != NULL)
    {
        printf("%d",p-> next);
        p = p -> next;
    }
    return 0;
}


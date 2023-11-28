// Create linked list using stu
# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedListTraverse(struct node *ptr){
    while(ptr != NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    // Allocate memory for nodes in the linked list in heap
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second= (struct node *)malloc(sizeof(struct node));
    struct node *third= (struct node *)malloc(sizeof(struct node));
    
    head->data = 12;
    head->next = second;

    second->data=23;
    second->next = third;

    third->data = 2333;
    third->next = NULL;
    
    linkedListTraverse(head);
    return 0;
}
# include<stdio.h>
# define SIZE 100

int queue[SIZE];
int front = -1;
int rare = -1;

void enqueue(int element){
    if(rare == SIZE-1){
        printf("Queue is full");
    }

    rare++;
    queue[rare] = element;
    return;
}

int dequeue(){
    if(front == rare){
        printf("Queue is Empty");
    }

    front++;
    int element = queue[front];
    return element;
}
int main(){
    enqueue(12);
    enqueue(90);
    enqueue(190);

    int num = dequeue();
    printf("dequeue : %d",num);

}
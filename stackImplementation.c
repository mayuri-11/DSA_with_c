# include<stdio.h>
# define SIZE 100
int top = -1;
int stack[SIZE];
void push(int element){
    if(top == SIZE-1){
        printf('stack is overflow');
    }else{
        top++;
        stack[top] = element;
        return;
    }
}

int pop(){
    if(top == -1){
        printf('Stack is underflow');
        return -1;
    }else{
        int element = stack[top];
        top--;
        return element;
    }
}
int main(){
    push(12);
    push(18);
    push(45);
    int num = pop();
    printf("pop : %d",num);

    return 0;
}
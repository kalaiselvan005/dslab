#include<stdio.h>
#include<stdlib.h>
#define Max 100
struct stack {
    int arr[Max];
    int top;
};
void initializeStack(struct stack *stack) {
     stack->top = -1;
}
void push(struct stack *stack, int element){
     if(stack->top == (Max - 1)) {
         printf("Error: stack overflow.cannot push element.\n");
         return;
     }
     stack->arr[++stack->top] = element;
     printf("Element pushed: %d\n",element);
}
int pop(struct stack *stack) {
    if (stack->top == -1) {
        printf("Error:stack underflow. Cannot pop element.\n");
        return -1;
    }else {
       int poppedElement = stack->arr[stack->top--];
       printf("\nPopped element: %d\n", poppedElement);
       return poppedElement;
    }
}
void displayStack(struct stack *stack) {
    int i ;
    if(stack->top == -1) {
       printf("stack is empty.\n");
       return;
    }
    printf("stack elements: ");
    for (i = stack->top; i >= 0; i--) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}    
    int main() {
         struct stack stack;
         int choice, element;
         initializeStack(&stack);
         while (1) {
              printf("\nstack Operations Menu:\n");
              printf("1. Push\n");
              printf("2. Pop\n");
              printf("3. Display\n");
              printf("4. Exit\n");
              printf("Enter your choice:");
              scanf("%d", &choice);
              switch (choice) {
                    case 1:
                        printf("Enter element to push: ");
                        scanf("%d", &element);
                        push(&stack, element);
                        break;
                    case 2:
                        pop(&stack);
                        break;
                    case 3:
                        displayStack(&stack);
                        break;
                    case 4:
                        exit(0);
                    default:
                        printf("Inavalid choice! Please enter a valid option.\n");
              }          
       }
       return 0;
}       

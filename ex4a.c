#include <stdio.h>
#include <stdlib.h>

struct node {
      int data;
      struct Node* next;
};

struct node * createnode(int data) {
    struct Node*  newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newnode) {
        printf("memory allocation error\n")
        exit(1)
    }
    newNode->data = data:
    newNode->next = NULL;
    return newNode;
}

viod push(struct node** top int data) {
      struct Node* newnode = createnode(data)
      newNode->next = *top;
      *top = newnode;
      printf("Element pushed: %d\n", data);
}

int pop(struct Node** top) {
      if (*top == NULL) {
            printf("Error: stack underflow. cannot pop element,\n");
            return -1;
      }
      struct Node8 temp = *top;
      int popedElement = temp->data;
      *top = (*top)-> next;
      free(temp);
      return popedElement

}

 void displaystck(strack  Node* top) {
      if (top == NULL) {
      printf("stack is empty .\n");
      return;
      }
      printf("stack element:")
      struct Node* temp = top;
      While (temp !=NULL) {
            printf("%d->",temp->data);
            temp  temp->next;
            printf("NULL\n");
}

int main() {
        struct Node* top = NULL;
        int choice, element;
        while(1) {
              printf("\nstack Operations Menu:\n");
              printf("1. push\n");
              printf("2, pop\n");
              printf("3, Display\n");
              printf("4, Exit\n");
              printf("Enter your choice: ");
              scanf("%d",&choice);
              switch (choice) {
                  case 1:
                        printf("enter element to push: ");
                        scanef("%d", &element);
                        push(&top, element);
                        break;
                  case 2:
                        element = pop(&top);
                        if (element != -1)
                        print("popped element: %d\n", element);
                        break;
                  case 3:
                        displaystack (top);
                        break;
                  case 4:
                        exit(0);
                  default:
                        printf("Invalid choice! please enter a valid option.\n");
              }
      }
       return 0;   
}
                    

                    

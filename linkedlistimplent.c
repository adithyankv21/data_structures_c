#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
    printf("Inserted successfully\n");
}
void pop()
{
    struct node *temp;
    if(top == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        temp = top;
        printf("Deleted element: %d\n", top->data);

        top = top->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        temp = top;

        printf("Stack elements:\n");

        while(temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");

        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
        }
    } while(ch != 4);
    return 0;
}                  

#include <stdio.h>

int main() 
{
    int i, n, push, pop, operation, top = 0, continueOperation = 1;
    int a[10];

    printf("Enter stack size: ");
    scanf("%d", &n);

    while (continueOperation == 1) 
    {
        printf("\n1] Push\n2] Pop\n3] Display\n");
        scanf("%d", &operation);

        switch (operation) 
        {
            case 1:
                printf("How many elements to push: ");
                scanf("%d", &push);
                if (top + push > n) 
                    printf("Stack is Overflow\n");
                else 
                {
                    for (i = 0; i < push; i++) 
                    {
                        printf("Enter element: ");
                        scanf("%d", &a[top++]);
                    }
                }
                break;

            case 2:
                printf("How many elements to pop: ");
                scanf("%d", &pop);
                if (pop > top) 
                    printf("Stack underflow\n");
                else 
                {
                    for ( i = 0; i < pop; i++) 
                        printf("Popped: %d\n", a[--top]);
                }
                break;

            case 3:
                if (top == 0)
                    printf("Stack empty\n");
                else 
                {
                    printf("Stack: ");
                    for (i = top - 1; i >= 0; i--) 
                        printf("index %d=%d \n",i, a[i]);
                    printf("\n");
                }
                break;

            default:
                printf("Invalid operation\n");
        }

        printf("you want to continue  (1 = Yes, 0 = No): ");
        scanf("%d", &continueOperation);
        if (continueOperation == 0) 
            break;
    }

    return 0;
}

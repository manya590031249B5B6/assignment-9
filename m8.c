#include <stdio.h>

void display(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void insert(int *a, int *n, int pos, int value)
{
    int i;

    for (i = *n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = value;
    (*n)++;
}

int deleteElement(int *a, int *n, int pos)
{
    int i, deleted;

    deleted = a[pos];

    for (i = pos; i < *n - 1; i++)
        a[i] = a[i + 1];

    (*n)--;

    return deleted;
}

int main()
{
    int a[100], n, i, choice, pos, value, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do
    {
        printf("\n1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            display(a, n);
        }
        else if (choice == 2)
        {
            printf("Enter position and value: ");
            scanf("%d %d", &pos, &value);

            insert(a, &n, pos, value);
        }
        else if (choice == 3)
        {
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            deleted = deleteElement(a, &n, pos);
            printf("Deleted value = %d\n", deleted);
        }

    } while (choice != 4);

    return 0;
}
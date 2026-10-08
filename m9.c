#include <stdio.h>
#include <limits.h>

void analyze(int *a, int n, int *small, int *secondSmall,
            int *great, int *secondGreat)
{
    int i;

    *small = INT_MAX;
    *secondSmall = INT_MAX;
    *great = INT_MIN;
    *secondGreat = INT_MIN;

    for (i = 0; i < n; i++)
    {
        if (a[i] < *small)
        {
            *secondSmall = *small;
            *small = a[i];
        }
        else if (a[i] > *small && a[i] < *secondSmall)
        {
            *secondSmall = a[i];
        }

        if (a[i] > *great)
        {
            *secondGreat = *great;
            *great = a[i];
        }
        else if (a[i] < *great && a[i] > *secondGreat)
        {
            *secondGreat = a[i];
        }
    }
}

int main()
{
    int a[100], n, i;
    int small, secondSmall, great, secondGreat;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    analyze(a, n, &small, &secondSmall, &great, &secondGreat);

    if (secondSmall == INT_MAX)
    {
        printf("Fewer than two distinct values exist.\n");
    }
    else
    {
        printf("Smallest = %d\n", small);
        printf("Second-smallest = %d\n", secondSmall);
        printf("Greatest = %d\n", great);
        printf("Second-greatest = %d\n", secondGreat);
    }

    return 0;
}
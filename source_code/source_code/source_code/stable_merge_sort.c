#include <stdio.h>

struct Package
{
    int id;
    int weight;
};

void merge(struct Package a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;

    struct Package temp[20];

    while (i <= mid && j <= high)
    {
        /* <= keeps the left element first when weights are equal */
        if (a[i].weight <= a[j].weight)
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];
}

void mergeSort(struct Package a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    struct Package p[] =
    {
        {1, 20},
        {2, 15},
        {3, 20},
        {4, 10},
        {5, 15},
        {6, 20},
        {7, 25},
        {8, 10}
    };

    int n = 8;

    mergeSort(p, 0, n - 1);

    printf("Stable sorted packages:\n");

    for (int i = 0; i < n; i++)
        printf("P%d  %d\n", p[i].id, p[i].weight);

    return 0;
}

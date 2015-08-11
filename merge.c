#include <stdio.h>
#include <stdlib.h>

void MergeSort(int[], int);

int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    MergeSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}

void MergeSort (int item[], int capacity) {
    int size = 0, l1 = 0, l2 = 0, k = 0, u1 = 0, u2 = 0, i = 0, j = 0;

    size = 1;
    int *aux = (int *)malloc (sizeof(int) * capacity);
    while (size < capacity) {
        l1 = 0;
        k = 0;
        while (l1 + size < capacity) {
            l2 = l1+size;
            u1 = l2 - 1;
            u2 = (l2 + size - 1 < capacity) ? l2 + size - 1 : capacity - 1;
            for (i = l1, j = l2; i <= u1 && j <= u2; k ++)
                if (item[i] <= item[j])
                    aux[k] = item[i ++];
                else
                    aux[k] = item[j ++];
            for (; i <= u1; k ++)
                aux[k] = item[i ++];
            for (; j <= u2; k ++)
                aux[k] = item[j ++];
            l1 = u2 + 1;
        }
        for (i = l1; k < capacity; i ++)
            aux[k++] = item[i];
        for (i = 0; i < capacity; i ++)
            item[i] = aux[i];
        size *= 2;
    }
    free (aux);
}



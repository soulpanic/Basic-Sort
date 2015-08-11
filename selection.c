#include <stdio.h>

void SelectionSort (int [], int);

int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    SelectionSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}

void SelectionSort (int item[], int capacity) {
    int large = 0, index = 0, i = 0, j = 0;

    for (i = capacity - 1; i > 0; i --) {
        large = item[0];
        index = 0;
        for (j = 1; j <= i; j ++) {
            if (item[j] > large) {
                large = item[j];
                index = j;
            }
        }
        item[index] = item[i];
        item[i] = large;
    }
}



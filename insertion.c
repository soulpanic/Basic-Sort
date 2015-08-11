#include <stdio.h>

void InsertionSort (int[], int);

int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    InsertionSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}

void InsertionSort (int item[], int capacity) {
    int temp = 0, i = 0, j = 0;

    for (i = 1; i < capacity; i ++) {
        temp = item[i];
        for (j = i - 1 ; j >= 0 && temp < item[j] ; j --) {
            item[j + 1] = item[j];
        }
        item[j + 1] = temp;
    }
}

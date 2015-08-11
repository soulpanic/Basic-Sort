#include <stdio.h>
#include <stdbool.h>

void BubbleSort(int[] , int);

int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    BubbleSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}

void BubbleSort(int item[], int capacity) {
    int temp = 0, i = 0, j = 0;
    bool switched = true;

    for (i = 0 ; i < capacity - 1 && switched == true ; i ++) {
        switched = false;
        for (j = 0 ; j < capacity - i - 1 ; j ++) {
            if (item[j] > item[j+1]) {
                switched = true;
                temp = item[j];
                item[j] = item[j+1];
                item[j+1] = temp;
            }
        }
    }
}



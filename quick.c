#include <stdio.h>

void QuickSort(int[], int);
void QSort(int[], int, int);

int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    QuickSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}

void QSort (int item[], int low, int high) {
    int pivot = 0, left = 0, right = 0, temp = 0;

    if (low < high) {
        left = low;
        right = high;
        pivot = item[low];
        while (left < right) {
            while (item[left] <= pivot && left < right) left ++;
            while (item[right] > pivot) right --;
            if (left < right) {
                temp = item[left];
                item[left] = item[right];
                item[right] = temp;
            }
        }
        item[low] = item[right];
        item[right] = pivot;
        QSort(item, low, right - 1);
        QSort(item, right + 1, high);
    }
}

void QuickSort (int item[], int capacity) {
    QSort (item, 0, capacity - 1);
}



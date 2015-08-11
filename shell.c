#include <stdio.h>

void ShellSort (int[], int);

int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    ShellSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}

void ShellSort (int item[], int capacity) {
    int temp = 0, k = 0, h = 0, i = 0, j = 0;

    for (h = 1; h < capacity; h = h * 3 + 1);
    for (h = h / 3; h > 0; h = h / 3) {
        for (i = 0; i < h; i++) {
            for (j = i + h; j < capacity; j = j + h){
                temp = item[j];
                k = j;
                while (item[k - h] > temp && k > (h - 1)) {
                    item[k] = item[k - h];
                    k = k - h;
                }
                item[k] = temp;
            }
        }
    }
}



#include <stdio.h>


void HeapSort (int item[], int capacity);


int main(int argc, const char * argv[]){
    int item[] = {318, 28, 100, 101, 554}, i = 0, capacity = 0;

    capacity = sizeof(item) / sizeof(int);

    printf("before : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    HeapSort (item, capacity);

    printf ("\nafter : ");

    for (i = 0; i < capacity; i ++)
        printf ("%d ", item[i]);

    return 0;
}


void HeapSort (int item[], int capacity) {
    int i = 0, elt = 0, s = 0, f = 0, ivalue = 0;

    for(i = 1; i < capacity; i ++) {
        elt = item[i];
        s = i;
        f = (s - 1) / 2;
        while(s > 0 && item[f] < elt) {
            item[s] = item[f];
            s = f;
            f = (s - 1) / 2;
        }
        item[s] = elt;
    }
    for(i = capacity - 1; i > 0; i --) {
        ivalue = item[i];
        item[i] = item[0];
        f = 0;
        if(i == 1) s = -1;
        else s = 1;
        if(i > 2 && item[2]>item[1]) s = 2;
        while(s >= 0 && ivalue < item[s]) {
            item[f] = item[s];
            f = s;
            s = 2 * f + 1;
            if(s + 1 <= i - 1 && item[s] < item[s + 1]) s = s+1;
            if(s > i -1) s = -1;
        }
        item[f] = ivalue;
    }
}



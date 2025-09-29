#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int t[], int low, int high) {

    int p = t[low];
    int i = low;
    int j = high;

    while (i < j) {

        while (t[i] <= p && i <= high - 1) {
            i++;
        }

        while (t[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&t[i], &t[j]);
        }
    }
    swap(&t[low], &t[j]);
    return j;
}

void quickSort(int t[], int low, int high) {
    if (low < high) {

        int pi = partition(t, low, high);

        quickSort(t, low, pi - 1);
        quickSort(t, pi + 1, high);
    }
}
int main() {
  
    int t[] = { 4, 2, 5, 3, 1 };
    int n = sizeof(t) / sizeof(t[0]);

    quickSort(t, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", t[i]);

    return 0;
}
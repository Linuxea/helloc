//
// Created by Linux on 2018/5/29.
//

#define SIZE 10

void selection_sort(int[], int);

void selection_sort(int arr[], int N) {

    for (int i = 0; i < SIZE; i++) {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[minIndex] < arr[j]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

}

#include <stdlib.h>
#include <stdio.h>

void merge(int arr[], int start, int middle, int end) {

	int i = 0, j = 0, k = 0;
	int n1 = middle - start + 1;
	int n2 = end - middle;
	int Left[n1], Right[n2];

	for (int iter = 0; iter < n1; iter++) {
		Left[iter] = arr[start + iter];
	}
	for (int iter = 0; iter < n2; iter++) {
		Right[iter] = arr[middle + 1 + iter];
	}

	while (i < n1 && j < n2) {
		if (Left[i] <= Right[j]) {
			arr[start + k] = Left[i];
			i++;
		} else {
			arr[start + k] = Right[j];
			j++;
		}
		k++;
	}
	
	while (i < n1) {
		arr[start + k] = Left[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[start + k] = Right[j];
		j++;
		k++;
	}

}

void mergeSort(int arr[], int start, int end) {

	if (start < end) {

		int middle = start + ((end-start)/2);
		mergeSort(arr, start, middle);
		mergeSort(arr, middle+1, end);
		merge(arr, start, middle, end);

	}

}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", A[i]);
	if (i != size - 1) {
		printf(",");
	}
    }
    printf("\n");
}
  
/* Driver program to test above functions */
void main(void) {

    int arr[] = {1, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
  
    printf("Given array is \n");
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);

}

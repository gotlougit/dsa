#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int _partition(int arr[], int start, int end) {

	int least_index = start - 1;

	printf("initial: ");
	printArray(arr, start, end);

	for (int i = start; i < end; i++) {
		if (arr[i] <= arr[end]) {
			least_index++;
			if (least_index != i) {
				int temp = arr[least_index];
				arr[least_index] = arr[i];
				arr[i] = temp;
			}
		}

		printf("\nAfter iteration got: ");
		printArray(arr, start, end);
		printf("least_index: %d, iter: %d\n", least_index, i);
	}

	least_index++;
	int temp = arr[least_index];
	arr[least_index] = arr[end];
	arr[end] = temp;
	
	printf("After loop got: ");
	printArray(arr, start, end);

	return least_index;
}

int partition(int arr[], int start, int end) {
	if (start < end) {
		_partition(arr, start, end);		
	} 
}

void quickSort(int arr[], int start, int end) {
	
	if (start < end) {

		//select random pivot
		int pivot_index = start + (rand() % (end - start));
		printf("Pivot element chosen is %d\n",arr[pivot_index]);
		//make pivot element the last element of array for convenience
		int temp = arr[pivot_index];
		arr[pivot_index] = arr[end];
		arr[end] = temp;
		//partition along pivot
		int middle = partition(arr, start, end);
		//sort
		quickSort(arr, start, middle - 1);
		quickSort(arr, middle + 1, end);

	}
}

/* Function to print an array */
void printArray(int A[], int start, int end) {

	for (int i = start; i < end - start + 1; i++) {
		printf("%d ", A[i]);
    	}
    	printf("\n");

}
  
/* Driver program to test above functions */
void main(void) {

	srand(time(NULL));

	//int arr[] = {1,12,11,10,19};
	int arr[] = {1,2,3,4,5,6};
    	int arr_size = sizeof(arr)/sizeof(arr[0]);
  
    	printf("Given array is \n");
    	printArray(arr, 0, arr_size - 1);
  
    	quickSort(arr, 0, arr_size - 1);
  
    	printf("\nSorted array is \n");
    	printArray(arr, 0, arr_size - 1);

}

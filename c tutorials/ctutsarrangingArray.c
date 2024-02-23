#include <stdio.h>

int main() {
   int arr[] = { 5, 2, 8, 3, 9, 1 };
   int n = sizeof(arr) / sizeof(arr[0]); // get the number of elements in the array

   // sort the array in increasing order
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         if (arr[i] > arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   // print the sorted array
   printf("The array elements in increasing order are: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}

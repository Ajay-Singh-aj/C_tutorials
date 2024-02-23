/*Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element
of the array in order of their appearance in the array.Next greater element of an element in the array is the
nearest element on the right which is greater than the current element.If there does not exist next greater of 
current element, then next greater element for current element is -1. For example, next greater of the last 
element is always -1. 
*/

#include <stdio.h>
void newArray(int arr[], int n, int nextGreater[]); 

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], nextGreater[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    newArray(arr, n, nextGreater);

    printf("The new array of next greater elements is:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", nextGreater[i]);
    }

    return 0;
}
void newArray(int arr[], int n, int nextGreater[]) {

    for (int i = 0; i < n; i++) {
        nextGreater[i] = -1; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater[i] = arr[j];
                break;
            }
        }
    }
}

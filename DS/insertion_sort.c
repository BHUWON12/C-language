/*#include<stdio.h>
int main()
{
 int a[20],temp,j,i,n;
 printf("enter th size\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    printf("enter data\n");
    scanf("%d",&a[i]);
 }
  for(i=1;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]<=temp)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
  }
   printf("the sorted elements are\n\n");
 for(i=0;i<n;i++)
 {
    printf("%d\t",a[i]);
 }
 }*/
 // Insertion sort in C

#include <stdio.h>

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = t i - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
}

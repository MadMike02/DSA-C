#include <stdio.h>

int main() {
  int arr[] = {5, 9, 3, 7, 2, 8};
  int size = sizeof(arr) / sizeof(arr[0]);

  int min = arr[0];
  int max = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  printf("Minimum value: %d\n", min);
  printf("Maximum value: %d\n", max);

  return 0;
}

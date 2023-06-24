#include <stdio.h>

int main() {
  int arr[] = {5, 9, 3, 7, 2, 8, 9, 9, 7, 5, 9, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  int max_occurrence = 0;
  int max_number = arr[0];

  for (int i = 0; i < size; i++) {
    int count = 0;
    for (int j = 0; j < size; j++) {
      if (arr[j] == arr[i]) {
        count++;
      }
    }
    if (count > max_occurrence) {
      max_occurrence = count;
      max_number = arr[i];
    }
  }

  printf("The number with the maximum occurrence is %d (occurs %d times)\n", max_number, max_occurrence);

  return 0;
}

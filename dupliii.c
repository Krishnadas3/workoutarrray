#include <stdio.h>

int main()
{
  int arr[10] = {1, 2, 3, 2, 4, 5, 4, 6, 6, 7};
  int size = sizeof(arr) / sizeof(arr[0]);
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        // count++;
        // break;
      }
    }
  }

  printf("Number of duplicate elements in the array: %d", count);
  return 0;
}

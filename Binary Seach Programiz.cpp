// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[10];
  cout<<"Enter an Array of size 10: "<<endl;
  for(int i=0; i<10; i++){
  	cin>>array[i];
  }
  int x;
  cout<<"Enter a Number to find in the array:   ";
  cin>>x;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    cout<<"not found! ";
  else
    printf("Element is found at index %d", result);
}

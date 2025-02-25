#include <iostream>
using namespace std;
void bubbleSort(int array[], int size) 
{
  for (int a=0; a<size; ++a) 
  {
    for (int i = 0; i<size-a; ++i) 
    {
      if (array[i] > array[i+ 1])
      {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() 
{
  int data[]={-6,-3,-1,9,5,2,6,8};
  
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(data, size);
}
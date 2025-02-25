#include <bits/stdc++.h>
using namespace std;

int median(int ARR[], int N)
{
    sort(ARR, ARR + N);
    if (N % 2 != 0)
    {
        return (ARR[N / 2]);
    }
       
    return (ARR[(N - 1) / 2] + ARR[N / 2]) / 2;
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int PARTITION (int ARR[], int start, int end)
{
    int Median = median(ARR, end + 1);
    int PIVOT_ELEMENT = ARR[Median];
    int count = 0;
    
    for (int i = start + 1; i <= end; i++) 
    {
        if (ARR[i] <= PIVOT_ELEMENT)
            count++;
    }
 
    int PIVOT_INDEX = start + count;
    swap(&ARR[PIVOT_INDEX], &ARR[start]);
 
    while (start < PIVOT_INDEX && end > PIVOT_INDEX) 
    {
        while (ARR[start] <= PIVOT_ELEMENT) 
            start++;
        
        while (ARR[end] > PIVOT_ELEMENT) 
            end--;
        
        if (start < PIVOT_INDEX && end > PIVOT_INDEX) 
            swap(ARR[start++], ARR[end--]);
    }
    return PIVOT_INDEX;
}
void quickSort(int arr[], int start, int end)
{
 
    if (start >= end)
        return;
 
    int p = PARTITION(arr, start, end);
 
    quickSort(arr, start, p - 1); 
    quickSort(arr, p + 1, end);  
}

int main()
{
    int arr[] {3,5,4,8,9,7,6,1,2};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
  
    cout<<"Original Array"<<endl;
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout<<endl;
    
    sort(arr,arr+n);
    if (n % 2 != 0)
    {
        cout<<"Median is: "<<(arr[n / 2])<<"\n";
    }
    else
    {
        cout<<"Median is: "<<(arr[(n - 1) / 2] + arr[n / 2]) / 2<<"\n";
    }

    quickSort(arr, 0, n - 1);
    
    cout<<"Sorted Array is: "<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
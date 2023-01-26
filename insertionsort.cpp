#include <iostream>

using namespace std;

void insertionSort(int arr[], int size)
{
    for(int i=1;i<size;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
}

int main()
{
    int arr[5]={1,7,3,8,2};
    insertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
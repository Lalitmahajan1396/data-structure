
/// Bubble Sorting Program : ->

#include <iostream>

using namespace std;

void display(int arr[] , int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

// void bubbleSort(int arr[] , int n ) {
    
//     for (int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-1-i; j++) {
//             if(arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

void bubbleSortAdaptive(int arr[] , int n ) {
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) {
        cout<<"Working on pass "<<i<<endl;
        isSorted = 1;
        
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
    if(isSorted == 1) {
        break;
    }
    }
}




int main() {
    
   int arr[] = {  1, 2 , 3 ,4 ,5 };
   int n = sizeof(arr)/sizeof(int);
   
   display(arr , n);
   //bubbleSort(arr , n);
  // display(arr , n);
   bubbleSortAdaptive(arr , n);
    display(arr , n);
   
    return 0;
}

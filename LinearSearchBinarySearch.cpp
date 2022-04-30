
// Linear Search and Binary Search in one program : ->

#include <iostream> 

using namespace std;

// Function for Linear Searching 

int linearSearch(int arr[] , int n , int element) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

// Function for Binary Searching

int binarySearch(int arr[] , int n , int element ) {
    int lb = 0;
    int ub = n;
    
    while(lb<=ub) {
    int mid = ( lb + ub ) / 2;
    if(arr[mid] == element) {
        return mid;
    }
    if(arr[mid] < element) {
        lb = mid + 1;
    }
    else {
        ub = mid - 1;
    }
    }
    return -1;
}

int main() {
    
    int arr[] = {1 , 2 , 3 , 4 , 5 };
    int n = sizeof(arr)/sizeof(int);
    int element = 2;
   // int result = linearSearch(arr , n , element );
    int result = binarySearch(arr , n , element);
    if(result == -1) {
        cout<<"Element not found !!!";
    }
    else {
    cout<<element<<" Found at index : "<<result;
    }
    return 0;
}



// // Searching : Sarch element in array.

//   // 1. Linear Search : - > comparing with Each and every element.

// // program : - >

// #include <iostream>

//  using namespace std;
 
 
//  int linearSearch(int arr2[] , int n , int d) {
     
//      int i;
     
//      for (i = 0; i < n; i++) {
//          if(arr2[i] == d) {
//              return i;
//          }
//      }
//      return -1;
//  }

// int main() {
    
//     int len;
//     int dele;
//     cout<<"Enter length of an Array : ";
//      cin>>len;
     
//      int arr[len];
     
//      for (int i = 0; i < len; i++) {
//          cout<<"Enter "<<i+1<<" Element : ";
//          cin>>arr[i];
//      }
    
//     for (int i = 0; i < len; i++) {
//         cout<<i+1<<" : "<<arr[i]<<endl;
//     }
    
//     cout<<"Enter Element  to find in Array  : ";
//     cin>>dele;
    
//     // Call LinearSearch Function
//   int result = linearSearch(arr , len , dele);
    
//     if(result == -1) {
//         cout<<"Element Not Found !!!";
//     }
//     else {
//         cout<<dele<<" Found At Index : "<<result;
//     }
//     return 0;
// }


//   2.Binary Search : - > sort data then divide data then search element.

//   program : - >

 #include <iostream>

  using namespace std;
  
  
  
  int binarySearch(int arr2[] , int n , int d) {
      
     
  int i = 0;
    
    while(i <= n) {
      int  mid = (i + n) / 2;
          
         if(arr2[mid] ==  d) {
           
          
             return mid;
         }
         
         else if(d > arr2[mid]) {
             i = mid + 1;
         }
         
           
         else {
             n = mid - 1;
         }
         
    }
    
      return -1;
  }
  
  
  int main() {
      
      
      int len;
      int dele;
      cout<<"Enter length of an Array : ";
      cin>>len;
      
      int arr[len];
     
      for (int i = 0; i < len; i++) {
         cout<<"Enter "<<i+1<<" Element : ";
         cin>>arr[i];
      }
    
      for (int i = 0; i < len; i++) {
        cout<<i+1<<" : "<<arr[i]<<endl;
      }
      
      
      for (int i = 0; i < len; i++) {
          for (int j = i+1; j < len; j++) {
              if(arr[i] > arr[j]) {
                  int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
              }
          }
      }
      
      cout<<"Sorted"<<endl;
      
      for (int i = 0; i < len; i++) {
        cout<<i+1<<" : "<<arr[i]<<endl;
      }
    
      cout<<"Enter Element  to find in Array  : ";
      cin>>dele;
      
      int result = binarySearch(arr , len , dele);
     
      
      if(result == -1) {
        cout<<"Element Not Found !!!";
    }
    else {
        cout<<dele<<" Found At Index : "<<result;
    }
     
      return 0;
  }
 
 

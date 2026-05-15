// Array .

// array is a linear collection of same type of data that are stored together in contiguous memory spaces.

// int marks[50]; //garbage value 
// int marks[50]={1,2,3};
// int marks[]={1,2,3};

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];

//     int n;
//     cout<<" enter the length of array ";
//     cin>>n;
    
//     // int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// find largest in array.

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[] = {1,4,6,78,9};
//     int n = sizeof(arr)/sizeof(int);

//     int max=arr[0];
//     int min=arr[0];

//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"largest = "<<max<<endl;
//     cout<<"smallest = "<<min<<endl;
// }

// linear search .

// #include<iostream>
// using namespace std;
// int linearsearch(int *arr , int n, int key){
//         for(int i=0;i<n;i++){
//             if(arr[i]==key){
//                 return i;
//             }
//         }
//         return -1;
//     }

//     int main(){
//         int arr[]={2,4,6,8,10,12,14};
//         int n=sizeof(arr)/sizeof(int);

//         cout<<linearsearch(arr,n,2);
//         return 0;

//     }

// reverse an array with extraspace .
// int j = n-i-1;

// #include<iostream>
// using namespace std;
//     void printArr(int *arr,int n){
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

//     int main(){

//     int arr[] = {5,4,3,9,2};
//     int n=sizeof(arr)/sizeof(int);

//     int copyarr[n];
   

//     for(int i=0;i<n;i++){
//         int j=n-i-1;
//         copyarr[i] = arr[j];
//     }

//     for(int i=0;i<n;i++){
//         arr[i] = copyarr[i];
//     }

//     printArr(arr,n);
//     return 0;
// }

// reverse an array with extra space .

// #include<iostream>
// using namespace std;
// void printArray(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={2,5,6,8,9};
//     int n=sizeof(arr)/sizeof(int);

//     int start=0;
//     int end=n-1;

//     while(start<end){
//         int temp= arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;

//         start++;
//         end--;
//     }
//     printArray(arr,n);
//     return 0;
// }

// binary search .
// #include<iostream>
// using namespace std;
// int binarysearch(int *arr,int n, int key){
//     int st=0;
//     int end=n-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/sizeof(int);

//     cout<<binarysearch(arr,n,8)<<endl;
//     return 0;
// }
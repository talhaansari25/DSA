

//2. make all value of array = 1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={2,3,4,5,6};

//     for(int i=0; i<5; i++){
//         arr[i]=1;
//     }

//     for(int i=0; i<5; i++){
//         cout<<arr [i];
//     }
//    return 0;
// }

//3. Array with function -- Pass by reference b c

// #include<iostream>
// using namespace std;

// void printArray(int arr[] , int size){

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void inc(int arr[] , int size){
//     arr[0] = arr[0] + 10;

//     printArray(arr, size);
// }
// int main()
// {
//     int arr[] ={5,6};
//     int size = 2;

//     inc(arr, size);

//     printArray(arr, size);

//    return 0;
// }



// 5. Reverse an array

// M1 -- swap -- 2 pointer approach

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5,6};
//     int size = 6;

//     int start = 0; 
//     int end = size-1;

//     while(start<=end){

//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     //printing 
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//    return 0;
// }

//M2 -- temp

// #include <iostream>
// using namespace std;

// int main() {
  
//   int arr[]= {1,2,3,4,5};
//   int n = 5;
  
//   for(int i=0; i<n/2; i++){
//           int temp;
//           temp = arr[i];
//           arr[i] = arr[n-i-1];
//           arr[n-i-1] = temp;
//   }
//   for(int i=0; i<n; i++){
//       cout<<arr[i]<<" ";
//   }
//     return 0;
//}

//M3 using another array

// #include<iostream>
// using namespace std;

// void printArray(int brr[],int size){
//     for(int i=0; i<size; i++){
//         cout<<brr[i]<<" ";
//     }
// }

// void reverseArray(int arr[], int size){
//     int brr[size];
//     for(int i=size-1; i>=0; i--){
//        brr[size-1-i]=arr[i];
//     }
//     printArray(brr,size);
// }
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int size = 5;

//     reverseArray(arr, size);

//    return 0;
// }

 
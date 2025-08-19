// 21. numeric hollow half pyramid
/* 
numbers printinhg-- 
1.col=0
2.col=row
3.row=n-1
and the no are col+1
else spaces
*/

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the n : ";
//     cin>>n;

//     for(int row=0; row<n; row++){
//         for( int col=0; col<row+1; col++){
//             if(col == 0 || col ==  row || row == n-1){
//                  cout<<col+1<<" ";
//             }
//             else {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//    return 0;
// }

//22. numeric hollow inverted half pyramid

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;

//     for(int row=0; row<n; row++){
//         for(int col=row+1; col<=n; col++){
//             if(col == row+1 || col == n || row == 0){
//                 cout<<col<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//    return 0;
// }

// 23. numeric palindrome equilateral pyramid 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;

//     for(int row=0; row<n; row++){

//         //spaces
//         for(int col=0; col<n-row-1; col++){
//             cout<<" ";
//         }

//         for(int col=0; col<row+1; col++ ){
//             cout<<col+1;
//         }

//         // reverse
        
//         for(int col=row; col>=1; col--){
//             cout<<col;
//         }

//         cout<<endl;
//     }
//    return 0;
// }

// 24. solid half diamond

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row =0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row-1; col++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
//    return 0;
// }

// 25. fancy patterns

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row++){
//        int start_num=8-row;
//        int num=row+1;
//        int count_num=num;

//        for(int col=0; col<17; col++){
//         if(col==start_num && count_num >0){
//             cout<<num;
//             start_num+=2;
//             count_num--;
//         }
//         else{
//             cout<<"*";
//         }
//        }
//         cout<<endl;
//     }
//    return 0;
// }

//26. fancy 2 -- doubt

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

// int i=1;

//  for(int row=0; row<n; row=row+1){
//         for(int col=0; col<=row; col=col+1){
//             cout<<i;
//             i++;
//         }
//         cout<<endl;
//     }

//  int j=i-n;
//  for(int row=0; row<n; row++){
//     int start=j;
//     for(int col=0; col<=n-row-1; col++){
//         cout<<start;
//         start++;
//     }
//     start=start-(n-row-1);
//     cout<<endl;
//  }   
//    return 0;
// }

// 27. fancy 3
// 1
// 121
// 12321
// 121
// 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;

//  for (int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//         cout<<col+1;   
//     }
//     for(int col=row; col>=1; col=col-1){
//         cout<<col;
//     }
//     cout<<endl;
//  }
//  for(int row=0; row<n; row++){
//     for(int col=0; col<n-row-1; col++){
//         cout<<col+1;
//     }
//     for(int col=n-row-2; col>=1; col=col-1){
//         cout<<col;
//     }
//     cout<<endl;
//  }

//    return 0;
// }

// 28. floyd's triangle pattern 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int start=1;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<start<<" ";
//             start++;
//         }
//         cout<<endl;
//     }

//    return 0;
// }

//29. pascals triangle -- binomial formula c=c*(row-col)/col

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int C = 1;

    for(int row=1; row<=n; row++){
        C=1;
        for(int col=1; col<=row; col++){
            cout<<C<<" ";
            C = C * (row-col) / col;
        }
        cout<<endl;
    }
   return 0;
}

//30. butter fly pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row++){
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }
//         for(int col=0; col<2*(n-row-1); col++){
//             cout<<" ";
//         }
//         for(int col=0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row; col++){
//             cout<<"*";
//         }
//         for(int col=0; col<2*row; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//    return 0;
// }


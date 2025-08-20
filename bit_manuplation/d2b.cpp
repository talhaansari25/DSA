//decimal 

// #include<iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter a number : ";
//     cin >> a;
//     cout<<"Enter a number : ";
//     cin >> b;
//     float ans1 = 0;
//     float ans2 = 0;
//     int i = 0;
//     int j = 0;
    


//      while (a != 0) {

//         int bit;
//         bit = a & 1;
//         ans1 = (bit * pow(10 , i) ) + ans1;
//         a = a >> 1 ;
//         i++;
//     }

//      while (b != 0) {

//         int bit;
//         bit = b & 1;
//         ans2 = (bit * pow(10 , j) ) + ans2;
//         b = b >> 1 ;
//         j++;
//     }

//     cout<<"Answer is : "<<ans1<<endl;
//     cout<<"Answer is : "<<ans2<<endl;
//    return 0;
// }

// M1. division method in bit form

// #include<iostream>
// using namespace std;

// int decimalToBinary(int n){
//     while(n>0){
//         int bit = n%2;
//         cout<<bit<<endl;
//         n=n/2;
//     }

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int binary = decimalToBinary(n);

//    return 0;
// }

// m1. division method in no form

// #include<iostream>
// #include<cmath>
// using namespace std;

// int decimalToBinary(int n){
//     int binaryno=0;
//     int i=0;
//     while(n>0){
//         int bit = n%2;
//         binaryno = bit*pow(10,i++)+binaryno;
//         n=n/2;
//     }
//     return binaryno;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int binary = decimalToBinary(n);
//     cout<<binary<<endl;

//    return 0;
// }

// M2. bitwise method


#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit = (n&1);
        binaryno = bit*pow(10,i++)+binaryno;
        n=n>>1;
    }
    return binaryno;
}

int main()
{
    int n;
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<binary<<endl;

   return 0;
}



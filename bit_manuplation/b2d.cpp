// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {

// int n;
// cout << "Enter a number: ";
// cin>>n;
// int ans = 0;
// int digit;
// int i = 0;

//    while (n != 0 ) {

//     digit = n % 10;
    
//     if (digit == 1) {
//         ans = ans + pow(2, i);
//     }
//     n = n / 10;
//     i++;
//    }
//    cout << "Answer is : "<< ans << endl;
//    return 0;
// }

// 1. method 1

#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit = n%10;
        decimal=decimal+bit*pow(2, i++);
        n=n/10;
    }
    return decimal;
}
int main()
{ 
    int binaryno;
    cin>>binaryno;
    cout<<binaryToDecimal(binaryno)<<endl;

   return 0;
}



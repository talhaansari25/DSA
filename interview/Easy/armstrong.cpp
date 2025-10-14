#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int number = 153;
    int temp = number;
    int ans = 0;

    while(temp>0){
        int digit = temp % 10;
        ans += digit * digit * digit;
        temp = temp/10;
    }

    if(ans==number){
        cout<<"Armstrong "<<ans;
    }
    else{
        cout<<"not Armstrong "<<ans;
    }
   return 0;
}
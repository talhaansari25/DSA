#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){

    if(n<=1) return false;

    for(int i=2; i<=sqrt(n); i++){
        if(n%1==0)
            return false;
    }  return true;

}

int main()
{
    int n = 8;
    cout<<(isprime(n) ? "Prime no" : "not a prime");
   return 0;
}
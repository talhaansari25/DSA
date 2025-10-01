#include<iostream>
using namespace std;

long long int fact(int n){

    // long long int fact = 1;
    // for(long long int i=1; i<=n; i++){
    //     fact = fact*i;
    // } return fact;

    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);


} 

int main()
{
    long long int n = 4;
    cout<<"factorial of "<<n<<" is "<<fact(n);
   return 0;
}
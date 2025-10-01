#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(int n){

    // M1 to * % / then compare

    // int number = n, rev = 0;
    // while(n>0){
    //     rev = rev * 10 + (n%10);
    //     n = n/10;
    // }
    // return number == rev ;


    //M2 convert to string

    // string s = to_string(n);
    // string rev = s;
    // reverse(rev.begin(),rev.end());
    // return rev == s;


    //M3 convert string then 2 pointer

    // string s = to_string(n);
    // int left = 0, right = s.size()-1;
    // while(left<right){
    // if(s[left]!= s[right]) return false;
    // left++, right--;
    // } return true;


    //M4 checking half string and comparing to nxt half handlinf edge cases

    if(n<0 || n%10==0 && n!=0) return false;
    int original = n;
    int revHalf = 0;
    while(n>revHalf){
        revHalf = revHalf*10+(n%10);
        n = n/10;
    }
    return(n == revHalf || n == revHalf/10);
   
   
}

int main()
{
    int n = 121;
    cout <<(isPalindrome(n) ? "palindrome" : "Not a palindrome");
   return 0;
}
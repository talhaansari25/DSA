// 11. full pyramid
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

        for(int row=0; row<n; row+=1){
            for(int col=0; col<n-row-1; col+=1){
                cout<<" ";

            }
            for(int col=0; col<row+1; col+=1){
                cout<<"* ";
            }
            cout<<endl;
        }
        
    
   return 0;
}
*/

//12. inverted full
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<row; col+=1){
            cout<<" ";

        }
        for(int col=0; col<n-row; col+=1){
            cout<<"* ";
        }
        cout<<endl;

    }
   return 0;
}
*/

//13. solid full diamond
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

        for(int row=0; row<n; row+=1){
            for(int col=0; col<n-row-1; col+=1){
                cout<<" ";

            }
            for(int col=0; col<row+1; col+=1){
                cout<<"* ";
            }
            cout<<endl;
        }

      for(int row=0; row<n; row+=1){
        for(int col=0; col<row; col+=1){
            cout<<" ";

        }
        for(int col=0; col<n-row; col+=1){
            cout<<"* ";
        }
        cout<<endl;
  
        
      }
   return 0;
}
*/

//14. hollow diamond

/*
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;

    for(int row=0; row<n; row+=1){
        // space
        for(int col=0; col<n-row-1; col+=1){
            cout<<" ";

        }
        //star
        for(int col=0;col<2*row+1; col+=1){
            if(col== 0 || col==2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

        for(int row=0; row<n; row+=1){
            for(int col=0; col<row; col+=1){
                cout<<" ";

            }
            for(int col=0; col<2*n-(2*row+1); col+=1){
                if(col==0 || col==2*n-2*row-2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }


    
   return 0;
}
*/
// 15. flipped solid diamond
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;
    
//     for(int row=0; row<n; row+=1){
//         for(int col=0; col<n-row; col+=1){
//             cout<<"*";
//         }

//         for(int col=0; col<2*row+1; col+=1){
//             cout<<" ";

//         }
//         for(int col=0; col<n-row; col+=1){
//             cout<<"*";
//         }
//         cout<<endl;
//         }
//     for(int row=0; row<n; row+=1){
//         for(int col=0; col<row+1; col+=1){
//             cout<<"*";
//         }
//         for(int col=0; col<2*n-2*row-1; col+=1){
//             cout<<" ";
//         }
//          for(int col=0; col<row+1; col+=1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//    return 0;
// }

// 16. fancy pattern

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0; row<n; row+=1){
//         for(int col=0; col<row+1; col+=1){
//             cout<<row+1;
//             if(col!= row){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//      for(int row=0; row<n; row+=1){
//         for(int col=0; col<n-row; col+=1){
//             cout<<n-row;
//             if(col!= n-row-1){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//      }
//    return 0;
// }

//17. fancy 2

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<row+1; col+=1){
            cout<<col+1;
        }
        for(int col=row; col>=1; col=col-1){
            cout<<col;
        }
        cout<<endl;
    }
   return 0;
}

//18.fancy3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row+=1){
//         for(int col=0; col<row+1; col+=1){
//             int ans=col+1;
//             char ch= ans+'A'-1;
//             cout<<ch;

//         }
//         for(int col=row; col>=1; col=col-1){
//             int ans= col;
//             char ch = ans+'A'-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
//    return 0;
// }

//19. no. full pyramid

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row++){
//         //spaces
//         for(int col=0; col<n-row-1; col++){
//             cout<<" ";
//         }

//         // no
//         for(int col=0; col<row+1; col++){
//             cout<<row+col+1;
//         }

//         //reverse
//         int start=2*row;
//         for(int col=0; col<row; col++){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//     }
//    return 0;
// }

//20. numeric hollow full pyramid

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for(int row=0; row<n; row=row+1){
//         //spaces
//         for(int col=0; col<n-row-1; col++){
//             cout<<" ";
//         }
//         // elements
//         int start=1;
//         for(int col=0; col<2*row+1; col++){
//             //firt or last
//             if(row==0 || row==n-1){
//                 if(col%2==0){
//                     cout<<start;
//                     start++;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 //fist col
//                 if(col==0){
//                     cout<<1;
//                 }
//                 else if(col==2*row){
//                     cout<<row+1;
//                 }
//                 else{
//                     cout<<" ";
//                 } 
//             }
//         }
//         cout<<endl;
//     }
//    return 0;
// }

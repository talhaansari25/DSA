// 1. solid rectangle pattern

/*
 #include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n-2; row=row+1){
        for(int col=0; col<n; col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
   return 0;
}
*/

//2. hollow rectangle

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n-2; row=row+1){
        if(row==0 ||row==n-3){
            for(int col=0; col<n; col=col+1){
                cout<<"* ";
            }
        }
        else {

            cout<<"* ";
            for(int i=0; i<n-2; i=i+1){
                cout<<"  ";

            }
            cout<<"* ";
           
        }
        cout<<endl;

    }
    
   return 0;
*/

// 3. solid square pattern

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n; col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }

   return 0;
}

*/

// 4.hollow squaure pattern

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        
        if(row==0 ||row==n-1){
            for(int col=0; col<n; col=col+1){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i=0; i<n-2; i=i+1){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
   return 0;
}
*/

// 5. solid half pyramid


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<row+1; col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }


    
   return 0;
}


//6. inverted solid half pyramid

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n-row; col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }

   return 0;
}
*/

// 7.no half pyramid

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<row+1; col=col+1){
            cout<<col+1;
        }
        cout<<endl;
    }
   return 0;
}
*/

// 8. inverted no half pyramid
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n-row; col=col+1){
            cout<<col+1;
        }
        cout<<endl;
    }
   return 0;
}

*/

// 9. hollow half pyramid

/*
#include<iostream>
using namespace std;
int main()
{
      int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;
     int col, row;

    for(int row=0; row<n; row++){
      for(int col=0; col<n; col=col+1){
         if(col==0 || row==n-1|| col==row){
            cout<<"* ";
        }
        else {
            cout<<"  ";
            }
       
        }  
         cout<<endl;
    }

   return 0;
}
*/

//10. hollow inverted half pyramid

/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;

    for(int row=0; row<n; row+=1){
        for(int col=0; col<n; col+=1){
            if(col==0 || row==0|| col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
   return 0;
}
*/


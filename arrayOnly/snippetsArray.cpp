// 2d array in C++

#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];                                      // declaration
    int arr1[2][2] = {1, 2, 3, 4};                      // declaration with initialization...using this metthod we will dwclare the array
    int arr2[3][3] = {{2, 3, 4}, {3, 1, 6}, {3, 6, 4}}; // Declaration with initialization and also we use this method
    
    for (int i =0 ; i<3; i++)
    {
        for(int j =0 ;j< 3;j++)
        {
            cout<<arr2 [i][j]<<" ";
        }
        cout<<endl;
    }

     cout<<"enter the value of 2 x 2 matrix\n";

     for (int i=0;i<2;i++)
     {
         for(int j =0;j<2;j++)
         {
             cin>>arr2[i][j];
         }
         cout<<endl;
     }

     for(int i=0;i<2;i++)
     {
         for(int j=0; j<2;j++)
         {
            cout<<arr1[i][j]<<" ";
         }
         cout<<endl;
     }

    return 0;
}


//echo "enter a number"
// read a 
// echo "enter your secon number"
// read b

// c=$(expr $a + $b)
// echo $c
// done
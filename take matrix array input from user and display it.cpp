/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

// take matrix array input from user and display it
#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];

    // Input
    cout << "Enter the elements of the 3x3 matrix:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Output
    cout << "\nThe matrix is:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

/* output for this code

Enter the elements of the 3x3 matrix:
1 2 3 
4 5 6
7 8 9

The matrix is:
1 2 3 
4 5 6 
7 8 9 

*/

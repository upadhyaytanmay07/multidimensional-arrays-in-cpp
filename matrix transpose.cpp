/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include <iostream>
using namespace std;

int main() 
{
    const int rows = 2, cols = 3;
    int matrix[rows][cols] = {{1, 2, 3},
                              {4, 5, 6}};
    int transpose[cols][rows];
    
    // Compute transpose
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    // Print transpose
    cout << "Transpose matrix:" << endl;
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/* output for this code

Transpose matrix:
1 4 
2 5 
3 6 

*/  

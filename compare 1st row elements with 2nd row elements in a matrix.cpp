/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include <iostream>
using namespace std;

int main() 
{
    const int rows = 2, cols = 3;
    int matrix[rows][cols] = 
    {
        {5, 10, 15},
        {2, 10, 20}
    };
    
    cout << "Comparison results (first row vs second row):" << endl;
    for (int j = 0; j < cols; j++) 
    {
        if (matrix[0][j] > matrix[1][j]) 
        {
            cout << "Element " << j << ": First row is greater" << endl;
        } else if (matrix[0][j] < matrix[1][j]) 
        {
            cout << "Element " << j << ": Second row is greater" << endl;
        } else 
        {
            cout << "Element " << j << ": Both are equal" << endl;
        }
    }
    
    return 0;
}

/* output for this code

Element 0: First row is greater
Element 1: Both are equal
Element 2: Second row is greater

*/

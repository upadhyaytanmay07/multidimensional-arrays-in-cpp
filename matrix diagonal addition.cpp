/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include <iostream>
using namespace std;

int main() 
{
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    
    int sum = 0;
    
    // Add main diagonal elements
    for (int i = 0; i < 3; i++) 
    {
        sum += matrix[i][i];
    }
    
    cout << "Sum of main diagonal: " << sum << endl;
    return 0;
}

/* output of this code

Sum of main diagonal: 15

*/  

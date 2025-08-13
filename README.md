# Aim
To understand and implement various operations on 2D arrays (matrices) in C++, including:
        
        Matrix Addition
        
        Matrix Multiplication
        
        Matrix Transpose
        
        Diagonal Addition (Sum of Diagonals)
        
        Row Comparison

# Software Used 
        VS Code

        Windows
# Theory

Multidimensional Arrays in C++ 

1. Definition

A multidimensional array is an array of arrays.

It extends the concept of a 1D array to 2D, 3D, or higher dimensions.

Example:

        2D Array (Matrix): int matrix[3][3]; (rows × columns)
        
        3D Array: int cube[2][3][4]; (layers × rows × columns)

2. Memory Representation

Stored in row-major order (contiguous memory blocks).

Example:

        int arr[2][3] = {{1,2,3}, {4,5,6}} is stored as 1,2,3,4,5,6 in memory.

3. Initialization

Static Initialization:

cpp

        int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

Dynamic Initialization (using loops):

cpp

        for(int i=0; i<2; i++) {
            for(int j=0; j<3; j++) {
                cin >> matrix[i][j];
            }
        }
        
4. Uses & Applications

✅ Matrices in Mathematics & Physics (linear algebra, transformations)

✅ Game Development (2D/3D grids, maps, pixel data)

✅ Image Processing (storing RGB pixel values in a 2D/3D array)

✅ Scientific Computing (storing multi-dimensional datasets)

✅ Database Tables (representing rows and columns)

✅ Graph Algorithms (adjacency matrix for graphs)

5. Advantages

✔ Easy to Understand (logical structure for grids/tables)

✔ Fast Access (O(1) time for direct indexing)

✔ Efficient Memory Usage (contiguous allocation)

6. Limitations

❌ Fixed Size (static arrays require predefined dimensions)

❌ Memory Wastage (if not fully utilized)

❌ No Built-in Bounds Checking (can lead to buffer overflows)

7. Alternatives in Modern C++

a.Vectors of Vectors (vector<vector<int>>) for dynamic resizing.

b.Dynamic Arrays (new and delete for heap allocation).

c.Libraries (Eigen, Armadillo) for advanced matrix operations.

# Algorithm

# Program 1
Objective : addition of matrix in C++

🔢 Steps:
1. Start

2. Read matrix dimensions

                Prompt user to enter row
                
                Prompt user to enter column

3. Declare matrices

                Create three 2D arrays: arr1[row][column], arr2[row][column], arr3[row][column]

4. Input elements of Matrix 1

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Read arr1[i][j]

5. Input elements of Matrix 2

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Read arr2[i][j]

6. Compute Matrix Addition

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Set arr3[i][j] = arr1[i][j] + arr2[i][j]

7. Display Matrix 1

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Print arr1[i][j]

8. Display Matrix 2

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Print arr2[i][j]

9. Display Resultant Matrix (Addition)

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Print arr3[i][j]

10. End

# Program 2
Objective : addition of diagonal elements of matrix

Today
#include <iostream> using namespace std; int main() { int row,column; cout<<"Enter the number of rows: "<<endl; cin>>row; cout<<"Enter the number of columns: "<<endl; cin>>column; int arr1[row][column],arr2[row][column],arr3[row][column]; cout<<"Array 1: "<<endl; for (int i=0;i<row;i++) { for (int j=0;j<column;j++) { cin>>arr1[i][j]; } } cout<<"Array 2: "<<endl; for (int i=0;i<row;i++){ for (int j=0;j<column;j++) { cin>>arr2[i][j]; } } for (int i=0;i<row;i++) { for (int j=0;j<column;j++) { arr3[i][j]=arr1[i][j]+arr2[i][j]; } } cout<<"Array 1: "<<endl; for (int i=0;i<row;i++) { for (int j=0;j<column;j++) { cout<<arr1[i][j]<<"\t"; } cout<<endl; } cout<<"Array 2: "<<endl; for (int i=0;i<row;i++){ for (int j=0;j<column;j++) { cout<<arr2[i][j]<<"\t"; } cout<<endl; } cout<<"Addition: "<<endl; for (int i=0;i<row;i++) { for (int j=0;j<column;j++) { cout<<arr3[i][j]<<"\t"; } cout<<endl; } } /*Output of the code Enter the number of rows: 3 Enter the number of columns: 3 Array 1: 1 2 3 4 5 6 7 8 9 Array 2: 9 8 7 6 5 4 3 2 1 Array 1: 1 2 3 4 5 6 7 8 9 Array 2: 9 8 7 6 5 4 3 2 1 Addition: 10 10 10 10 10 10 10 10 10 */ give theorm for this code
Sure! Here's a theorem-style explanation that encapsulates the logic and behavior of your C++ program:

🧮 Theorem: Matrix Addition of Two-Dimensional Arrays
Statement: Let 
𝐴
 and 
𝐵
 be two matrices of dimensions 
𝑚
×
𝑛
, where 
𝑚
 is the number of rows and 
𝑛
 is the number of columns. Then, there exists a matrix 
𝐶
 of the same dimensions such that:

𝐶
[
𝑖
]
[
𝑗
]
=
𝐴
[
𝑖
]
[
𝑗
]
+
𝐵
[
𝑖
]
[
𝑗
]
for all 
0
≤
𝑖
<
𝑚
,
 
0
≤
𝑗
<
𝑛
Proof (via Algorithm): Given:

Two matrices arr1 and arr2 of size row × column

A third matrix arr3 to store the sum

The program:

Accepts user input for dimensions row and column.

Reads elements of arr1 and arr2.

Computes arr3[i][j] = arr1[i][j] + arr2[i][j] for each valid index.

Displays all three matrices.

Conclusion: The program demonstrates the element-wise addition of two matrices. The resulting matrix arr3 contains the sum of corresponding elements from arr1 and arr2, satisfying the theorem.

Would you like a visual diagram or pseudocode version of this theorem too?

give algorithm for the code given above
Absolutely! Here's a clear and structured algorithm for your C++ program that performs matrix addition:

🧮 Algorithm: Matrix Addition of Two 2D Arrays
Input:

Number of rows row

Number of columns column

Elements of matrix arr1[row][column]

Elements of matrix arr2[row][column]

Output:

Matrix arr3[row][column] containing the sum of arr1 and arr2

🔢 Steps:

1. Start

2. Read matrix dimensions

                Prompt user to enter row
                
                Prompt user to enter column

3. Declare matrices

                Create three 2D arrays: arr1[row][column], arr2[row][column], arr3[row][column]

4. Input elements of Matrix 1

                For each i from 0 to row - 1:

                For each j from 0 to column - 1:

                Read arr1[i][j]

5. Input elements of Matrix 2

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Read arr2[i][j]

6. Compute Matrix Addition

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Set arr3[i][j] = arr1[i][j] + arr2[i][j]

7. Display Matrix 1

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Print arr1[i][j]

8. Display Matrix 2

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Print arr2[i][j]

9. Display Resultant Matrix (Addition)

                For each i from 0 to row - 1:
                
                For each j from 0 to column - 1:
                
                Print arr3[i][j]

10. End

# Program 3
Objective : multiplication of two matrix

🔢 Steps:

1. Start

2. Read dimensions

        Input row1, column1 for Matrix 1
        
        Input row2, column2 for Matrix 2

3. Check multiplication condition
        
        If column1 != row2, print "Wrong dimensions" and terminate
        
        Else, proceed

4. Declare matrices

        arr1[row1][column1]
        
        arr2[row2][column2]
        
        arr3[row1][column2] initialized to 0

5. Input elements of Matrix 1

        For i = 0 to row1 - 1:
        
        For j = 0 to column1 - 1:
        
        Read arr1[i][j]

6. Input elements of Matrix 2

        For i = 0 to row2 - 1:
        
        For j = 0 to column2 - 1:
        
        Read arr2[i][j]

7. Matrix Multiplication
        
        For i = 0 to row1 - 1:
        
        For j = 0 to column2 - 1:
        
        Set arr3[i][j] = 0
        
        For k = 0 to column1 - 1:
        
        arr3[i][j] += arr1[i][k] * arr2[k][j]

8. Display Matrix 1

        For each element in arr1, print in matrix format

9. Display Matrix 2

        For each element in arr2, print in matrix format

10. Display Resultant Matrix (Multiplication)

        For each element in arr3, print in matrix format

11. End

# Program 4
Objective : to print the transpose of a matrix

🔢 Steps:

1. Start

2. Initialize matrix

3. Define a 2×3 matrix:

        matrix = {
          {1, 2, 3},
          {4, 5, 6}
        }
4. Declare transpose matrix

        Create a matrix transpose[cols][rows] (i.e., 3×2)

5. Compute transpose

        For i = 0 to rows - 1:
        
        For j = 0 to cols - 1:
        
        Set transpose[j][i] = matrix[i][j]

6. Display transpose matrix

        For i = 0 to cols - 1:
        
        For j = 0 to rows - 1:
        
        Print transpose[i][j]

7. End

# Program 5
Objective : to take a matrix array input from user and display it 

🔢 Steps:

1. Start

2. Declare matrix

        Create a 2D array arr[3][3]

3. Input matrix elements

        Print "Enter the elements of the 3x3 matrix:"
        
        For i = 0 to 2:
        
        For j = 0 to 2:
        
        Read arr[i][j] from user

4. Display matrix

        Print "The matrix is:"
        
        For i = 0 to 2:
        
        For j = 0 to 2:
        
        Print arr[i][j] followed by a space
        
        Print newline after each row

5. End

# Program 6
Objective : to compare elements of 1st row to the elements of the 2nd row in a matrix

🔢 Steps:

1. Start

2. Initialize matrix

        Define a 2×3 matrix:

        matrix = {
          {5, 10, 15},
          {2, 10, 20}
        }

3. Print header

        Display "Comparison results (first row vs second row):"

4. Compare elements column-wise

        For j = 0 to cols - 1 (i.e., 0 to 2):
        
        If matrix[0][j] > matrix[1][j]:
        
        Print "Element j: First row is greater"
        
        Else if matrix[0][j] < matrix[1][j]:
        
        Print "Element j: Second row is greater"
        
        Else:
        
        Print "Element j: Both are equal"

5. End

Conclusion

Multidimensional arrays are essential for structured data storage in C++, widely used in mathematics, gaming, and scientific computing. While they have limitations in flexibility, they remain efficient for fixed-size data handling.

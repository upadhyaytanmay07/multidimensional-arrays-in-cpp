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

Conclusion

Multidimensional arrays are essential for structured data storage in C++, widely used in mathematics, gaming, and scientific computing. While they have limitations in flexibility, they remain efficient for fixed-size data handling.

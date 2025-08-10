Implement CPP 2D-Arrays or Matrix
Aim:
To study and implement 2-Dimensional Arrays in C++

Software used:
Mingw compiler

Visual Studio Code

Online C++ compiler

Program-1: Printing of a Matrix
Explanation:
This C++ program demonstrates how to create and display a 2D matrix using user input. It begins by prompting the user to enter the number of rows and columns, then declares a fixed-size matrix capable of storing up to 56 rows and 46 columns. Using nested loops, it collects individual elements for each cell of the matrix and stores them accordingly. After input, the program prints the matrix in a structured format, row by row. It showcases fundamental concepts like arrays, loops, and input/output operations.

Algorithm:

Start

Declare variables: a, b, and a 2D array matrix

Prompt the user to enter the number of rows and read a

Prompt the user to enter the number of columns and read b

Use nested loops to input each element of the matrix

Use nested loops to display the matrix in row-column format

End

Program-2: Addition of Two Matrices
Explanation:
This C++ program performs matrix addition for two user-defined matrices of size a × b. It uses 2D arrays, nested loops, and basic input/output operations to read, store, and compute the sum of corresponding elements from two matrices. Matrix addition is only valid when both matrices have the same dimensions.
If C and D are two matrices of size a × b, their sum S is also a matrix of size a × b, where:
S[i][j] = C[i][j] + D[i][j]

Algorithm:

Start

Declare variables a, b, and 2D arrays c, d, s

Prompt the user to enter the number of rows and read a

Prompt the user to enter the number of columns and read b

Display message for matrix addition

Prompt and read elements of the first matrix using nested loops

Display the first matrix

Prompt and read elements of the second matrix using nested loops

Display the second matrix

Add corresponding elements of both matrices and store in matrix s

Display the sum matrix

End

Program-3: Multiplication of Two Matrices
Explanation:
This program performs matrix multiplication between two user-defined matrices. It first takes inputs for the dimensions of both matrices and checks if multiplication is valid by ensuring the number of columns in the first matrix equals the number of rows in the second. Using three nested loops, it calculates the product matrix by summing the products of corresponding elements.
Rule: If matrix A is of size a × b and matrix B is of size x × y, then the product matrix will be of size a × y.

Algorithm:

Start

Declare variables a, b, x, y for matrix dimensions

Prompt and read rows (a) and columns (b) of the first matrix

Prompt and read rows (x) and columns (y) of the second matrix

If b != x, display "Invalid conditions" and stop

Declare matrices c, d, and p

Prompt and read elements of the first matrix

Prompt and read elements of the second matrix

Initialize each element of product matrix p[i][j] to 0

Use three nested loops to compute matrix multiplication

Display the product matrix p

End

Program-4: Addition of the Diagonal Elements
Explanation:
This program calculates the sum of both diagonals in a square matrix. The main diagonal includes elements where row and column indices are equal (matrix[i][i]), while the secondary diagonal includes elements where the column index is n - i - 1.
If the matrix size is odd, the center element lies on both diagonals and is counted twice, so it is subtracted once from the total.

Algorithm:

Start

Declare integer n for matrix size

Prompt and read n

Declare 2D array matrix and variables a = 0, b = 0

Prompt and read matrix elements

Display the matrix

Loop from i = 0 to n - 1 to sum diagonal elements

Compute ds = a + b

If n is odd, subtract the center element matrix[n / 2][n / 2] once

Display the adjusted diagonal sum ds

End

Program-5: Transpose of a Matrix
Explanation:
This program computes the transpose of a matrix. Transposing a matrix means converting its rows into columns and vice versa (transpose[j][i] = matrix[i][j]). It displays both the original and transposed matrices.

Algorithm:

Start

Input rows a and columns b

Declare matrix[a][b] and transpose[b][a]

Input elements into matrix

Display the original matrix

For each element matrix[i][j], set transpose[j][i] = matrix[i][j]

Display the transpose matrix

End

Conclusion:
Through these five programs, we explored the core operations on 2D arrays in C++, including:

Matrix creation

Display

Addition

Multiplication

Diagonal summation

Transpose

Each program demonstrates nested loops, array indexing, and conditional logic—essential tools for handling structured data. These implementations reinforce the theoretical understanding of matrices and their applications in mathematics, computer graphics, and data science.

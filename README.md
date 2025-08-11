# Implementation of Matrix Operations in C++

## Aim
To study and implement 2-Dimensional Arrays in C++.

## Software Used
- Mingw compiler  
- Visual Studio Code  
- Online C++ compiler  

---

## Program 1 – Printing of a Matrix

**Explanation & Theory:**  
This C++ program demonstrates how to create and display a 2D matrix using user input. It begins by prompting the user to enter the number of rows and columns, then declares a fixed-size matrix capable of storing up to 56 rows and 46 columns. Using nested loops, it collects individual elements for each cell of the matrix and stores them accordingly. After input, the program prints the matrix in a structured format, row by row. It showcases fundamental concepts like arrays, loops, and input/output operations.

**Algorithm:**
1. Start  
2. Declare variables `a`, `b`, and a 2D array `matrix[56][46]`  
3. Prompt the user to enter the number of rows and read `a`  
4. Prompt the user to enter the number of columns and read `b`  
5. Use nested loops to input each element of the matrix  
6. Use nested loops to display the matrix in row-column format  
7. End  

---

## Program 2 – Addition of Two Matrices

**Explanation & Theory:**  
This C++ program performs matrix addition for two user-defined matrices of size `a × b`. It uses 2D arrays, nested loops, and basic input/output operations to read, store, and compute the sum of corresponding elements from two matrices. Matrix addition is only valid when both matrices have the same dimensions. If `C` and `D` are two matrices of size `a × b`, their sum `S` is also a matrix of size `a × b`, where each element is calculated as:  
S[i][j] = C[i][j] + D[i][j]


**Algorithm:**
1. Start  
2. Declare variables `a`, `b`, and 2D arrays `c[100][100]`, `d[100][100]`, `s[100][100]`  
3. Prompt the user to enter the number of rows and read `a`  
4. Prompt the user to enter the number of columns and read `b`  
5. Display message for matrix addition  
6. Prompt and read elements of the first matrix using nested loops  
7. Display the first matrix  
8. Prompt and read elements of the second matrix using nested loops  
9. Display the second matrix  
10. Add corresponding elements of both matrices and store in matrix `s`  
11. Display the sum matrix  
12. End  

---

## Program 3 – Multiplication of Two Matrices

**Explanation & Theory:**  
This C++ program performs matrix multiplication between two user-defined matrices. It first takes input for the dimensions of both matrices and checks if multiplication is valid by ensuring the number of columns in the first matrix equals the number of rows in the second. Using three nested loops, it calculates the product matrix by summing the products of corresponding elements.  

Matrix multiplication follows the rule:  
If matrix `A` is of size `a × b` and matrix `B` is of size `x × y`, then the product matrix will be of size `a × y`, and each element is computed as the dot product of row `i` from `A` and column `j` from `B`.

**Algorithm:**
1. Start  
2. Declare variables `a`, `b`, `x`, `y` for matrix dimensions  
3. Prompt and read rows (`a`) and columns (`b`) of the first matrix  
4. Prompt and read rows (`x`) and columns (`y`) of the second matrix  
5. If `b != x`, display "Invalid conditions" and stop  
6. Declare matrices `c[100][100]`, `d[100][100]`, and `p[100][100]`  
7. Prompt and read elements of the first matrix using nested loops  
8. Prompt and read elements of the second matrix using nested loops  
9. Initialize each element of product matrix `p[i][j]` to 0  
10. Use three nested loops to compute matrix multiplication  
11. Display the product matrix `p`  
12. End  

---

## Program 4 – Addition of the Diagonal Elements

**Explanation & Theory:**  
This C++ program calculates the sum of both diagonals in a square matrix. The user inputs the matrix size `n` and its elements. The main diagonal includes elements where row and column indices are equal (`matrix[i][i]`), while the secondary diagonal includes elements where the column index is `n - i - 1`. Two variables `a` and `b` accumulate the sums of these diagonals.  

If the matrix size is odd, the center element lies on both diagonals and is counted twice. To correct this, the program subtracts the center element once from the total. This logic ensures accurate diagonal summation.

**Algorithm:**
1. Start  
2. Declare integer `n` for matrix size  
3. Prompt and read `n`  
4. Declare 2D array `matrix[100][100]` and variables `a = 0`, `b = 0`  
5. Prompt and read matrix elements using nested loops  
6. Display the matrix  
7. Loop from `i = 0` to `n - 1` to calculate sums of both diagonals  
8. Compute `ds = a + b`  
9. If `n` is odd, subtract the center element `matrix[n / 2][n / 2]` once  
10. Display adjusted diagonal sum `ds`  
11. End  

---

## Program 5 – Transpose of a Matrix

**Explanation & Theory:**  
This C++ program computes the transpose of a matrix. The user inputs the number of rows `a` and columns `b`, followed by the matrix elements. The original matrix is stored in `matrix[a][b]`, and its transpose is stored in `transpose[b][a]`.  

Transposing a matrix means converting its rows into columns and vice versa—i.e., `transpose[j][i] = matrix[i][j]`. This operation is useful in linear algebra, image processing, and data transformations.

**Algorithm:**
1. Start  
2. Input rows `a` and columns `b`  
3. Declare `matrix[a][b]` and `transpose[b][a]`  
4. Input elements into `matrix`  
5. Display original matrix  
6. For each element `matrix[i][j]`, set `transpose[j][i] = matrix[i][j]`  
7. Display transpose  
8. End  

---

## Conclusion
Through these five programs, we explored the core operations on 2D arrays in C++, including matrix creation, display, addition, multiplication, diagonal summation, and transpose. Each program demonstrates the use of nested loops, array indexing, and conditional logic—essential tools for handling structured data.  

These implementations reinforce the theoretical understanding of matrices and their practical applications in fields like mathematics, computer graphics, and data science. By mastering these foundational concepts, learners build confidence in manipulating multi-dimensional data and solving complex problems efficiently using C++.


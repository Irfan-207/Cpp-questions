// C++ Matrix Programs
#include<iostream>
#include<cmath>
using namespace std;
int row1 , column1;
int row2 , column2; // Global variable 
void menu(){
    cout << "\n1 . Add Two Matrices" << endl;
    cout << "\n2 . Check Whether Two Matrices Are Equal or Not" << endl;
    cout << "\n3 . Compute the Sum of Diagonals of a Matrix" << endl;
    cout << "\n4 . Print Boundary Elements of a Matrix" << endl;
    cout << "\n5 . Find the Transpose of a Matrix" << endl;
    cout << "\n6 . Find the Determinant of a Matrix" << endl;
    cout << "\n7 . Find the Normal and Trace of Matrix" << endl;
    cout << "\n8 . Multiply Two Matrices" << endl;
    cout << "\n9 . Rotate Matrix Elements of a Matrix" << endl;
    cout << "\n10. Interchange Elements of First And Last Rows in Matrix" << endl;
    cout << "\n11. Interchange Elements of First And Last Columns In Matrix" << endl;
}

// Function prototyping
void add();
void check_equal();
void Diagonals_sum();
void Print_Boundary();
void Transpose();
// Function to calculate the determinant of a matrix
int DeterminantHelper(int matrix[10][10], int n);
void Determinant();
void Normal_trace();
void Multiply();
void rotate();
void Interchange_row();
void Interchange_column();

int main()
{
    menu();
    int choice ;
    cout << "\nEnter your choice : ";
    cin >> choice;
        switch (choice)
        {
            case 1 :
            {
                add();
                break;
            }
            case 2 :
            {
                check_equal();
                break;
            }
            case 3 :
            {
                Diagonals_sum();
                break;
            }
            case 4 :
            {
                Print_Boundary();
                break;
            }
            case 5 :
            {
                Transpose();
                break;
            }
            case 6 :
            {
                Determinant();
                break;
            }
            case 7 :
            {
                Normal_trace();
                break;
            }
            case 8 :
            {
                Multiply();
                break;
            }
            case 9 :
            {
                rotate();  
                break;
            }
            case 10 :
            {
                Interchange_row();
                break;
            }
            case 11:
            {
                Interchange_column();
                break;
            }
            default:
            {
                cout << "Sorry ! Invalid choice .";
                break;
            }
        }
    return 0;
}
// Function to add two matrix
void add()
{
    // First matrix
    cout << "\nEnter the row number of the first matrix : ";
    cin >> row1;
    cout << "\nEnter the column number of the first matrix : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
    
    // Second matrix
    cout << "\nEnter the row number of the second matrix : ";
    cin >> row2;
    cout << "\nEnter the column number of the second matrix : ";
    cin >> column2;

    int arr2[row2][column2];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < column2; j++) {
                    cin >> arr2[i][j];
                }
            }

        // Print two matrix
        cout << "\nFirst matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }
        cout << "\nSecond matrix : \n";
            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < column2; j++) {
                    cout << arr2[i][j] << " ";
                }
                cout << endl;
            }
    
    // ADD TWO MATRIX
        if (row1 != row2 && column1 != column2) {
            cout << "\nAddition is not possible !";
        }
        
        else {
            int result[row1][column2];
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    result[i][j] = arr1[i][j] + arr2[i][j];
                }
            }
            
                // Print the resultant matrix
                cout << "\nResultant Matrix : \n";
                for (int i = 0; i < row1; i++) {
                    for (int j = 0; j < column1; j++) {
                        cout << result[i][j] << " ";
                    }
                    cout << endl;
                }
        }
}
// Function to Check Whether Two Matrices Are Equal or Not
void check_equal()
{
    // First matrix
    cout << "\nEnter the row number of the first matrix : ";
    cin >> row1;
    cout << "\nEnter the column number of the first matrix : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
    
    // Second matrix
    cout << "\nEnter the row number of the second matrix : ";
    cin >> row2;
    cout << "\nEnter the column number of the second matrix : ";
    cin >> column2;

    int arr2[row2][column2];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < column2; j++) {
                    cin >> arr2[i][j];
                }
            }

        // Print two matrix
        cout << "\nFirst matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }
        cout << "\nSecond matrix : \n";
            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < column2; j++) {
                    cout << arr2[i][j] << " ";
                }
                cout << endl;
            }
        
        // CHECK EQUAL
            if (row1 != row2 && column1 != column2) {
                cout << "\n This two Matrices are not equal . Sorry!";
            }
            else {
                bool equal = true;
                for (int i = 0; i < row1; i++)
                {
                    for (int j = 0; j < column2; j++) {
                        if (arr1[i][j] != arr2[i][j]) {
                            equal = false;
                        }
                    }
                }
                    // Final output
                    if (equal) {
                        cout << "\nMatrices are identical." ;
                    }
                    else {
                        cout << "\nMatrices are not Equal.";
                    }
            }
}
// Function to Compute the Sum of Diagonals of a Matrix
void Diagonals_sum()
{
    // First matrix
    cout << "\nEnter the row number  : ";
    cin >> row1;
    cout << "\nEnter the column number  : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
        // Print the matrix
        cout << "\nEntered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }

        // Calculate the Diagonals
        int sum = 0;
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    if (i == j) {
                        sum += arr1[i][j];
                    }
                }
            }
            cout << "\nPrincipal Diagonals : " << sum;

        sum = 0;
        for (int i = row1; i >= 0; i--) {
            for (int j = column1; j >= 0; j--) {
                if ((i+j) == (row1-1)) {
                    sum += arr1[i][j];
                }
            }
        }
            cout << "\nSecondary Diagonals : " << sum;
}
// Function to Print Boundary Elements of a Matrix
void Print_Boundary()
{
    // First matrix
    cout << "\nEnter the row number  : ";
    cin >> row1;
    cout << "\nEnter the column number  : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
        // Print the matrix
        cout << "\nEntered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }

        // Print the boundaries
        cout << "\nBordered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {

                    if (i == 0 || j == 0 || i == row1-1 || j == column1 - 1) {
                        cout << arr1[i][j] << " ";
                    }
                    else{
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }
            
}
// Function to print Transpose matrix
void Transpose()
{
    // First matrix
    cout << "\nEnter the row number  : ";
    cin >> row1;
    cout << "\nEnter the column number  : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
        // Print the matrix
        cout << "\nEntered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }

        // Transpose matrix
        int trans[row1][column1];
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    trans[j][i] = arr1[i][j] ;
                }
            }
                cout << "\nTranspose matrix : \n";
                    for (int i = 0; i < row1; i++)
                    {
                        for (int j = 0; j < column1; j++)
                        {
                            cout << trans[i][j] << " ";
                        }
                        cout << endl;
                    }
}
// Helper function to calculate the determinant of a submatrix
int DeterminantHelper(int matrix[10][10], int n) {
    // Base case for 1x1 matrix
    if (n == 1) return matrix[0][0];

    // Base case for 2x2 matrix
    if (n == 2) return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    int det = 0;
    int submatrix[10][10];

    // Recursive case for larger matrices
    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue; // Skip the column to form the submatrix
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += pow(-1, x) * matrix[0][x] * DeterminantHelper(submatrix, n - 1);
    }
    return det;
}
// Function to find a Determinant of a matrix
void Determinant() {
    int row1, column1;

    // First matrix
    cout << "\nEnter the row number: ";
    cin >> row1;
    cout << "\nEnter the column number: ";
    cin >> column1;

    int arr1[row1][column1]; 
    cout << "\nEnter the elements: ";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cin >> arr1[i][j];
        }
    }

    // Print the matrix
    cout << "\nEntered matrix:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // Check if the matrix is square; determinant can only be calculated for square matrices
    if (row1 != column1) {
        cout << "\nDeterminant can only be calculated for square matrices.";
        return;
    }

    // Special case for 1x1 matrix
    if (row1 == 1 && column1 == 1) {
        cout << "\nThis is a 1x1 matrix. The Determinant is: " << arr1[0][0];
        return;
    }

    // Special case for 2x2 matrix
    if (row1 == 2 && column1 == 2) {
        int det = (arr1[0][0] * arr1[1][1]) - (arr1[0][1] * arr1[1][0]);
        cout << "\nThis is a 2x2 matrix. The Determinant is: " << det;
        return;
    }

    // Initialize determinant for larger matrices
    int det = 0;

    // Use recursive expansion by minors to calculate the determinant for larger matrices
    for (int i = 0; i < row1; i++) {
        int subi = 0, subj = 0;
        int submatrix[10][10];

        // Create submatrix for minor calculation
        for (int x = 1; x < row1; x++) {
            subj = 0;
            for (int j = 0; j < column1; j++) {
                if (j == i) continue; // Skip the column to form the submatrix
                submatrix[subi][subj] = arr1[x][j];
                subj++;
            }
            subi++;
        }

        // Calculate determinant using the submatrix
        det += pow(-1, i) * arr1[0][i] * DeterminantHelper(submatrix, row1 - 1);
    }
    cout << "\nThe determinant of the matrix is: " << det;
}
// Function to print the normal and trace of a matrix
void Normal_trace()
{
    // Declaring matrix
    cout << "\nEnter the row number : ";
    cin >> row1;
    cout << "\nEnter the column number : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements  : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
    // Print the matrix
        cout << "\nEntered matrix : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }
    
    // Find the trace
        if (row1 != column1) {
            cout << "\nSorry !! The trace an't be calculated .";
        }
        else {
                int sum = 0;
                for (int i = 0; i < row1; i++) {
                    sum += arr1[i][i];
                }
                    cout << "\nTrace : " << sum;
        }

    // Find normal
    int sum = 0;
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                     sum += arr1[i][j] * arr1[i][j];
                }
            }
                double normal = sqrt(sum);
                cout << "\nNormal : " << normal;
}
// Function to multiply two matrix
void Multiply()
{
    // First matrix
    cout << "\nEnter the row number of the first matrix : ";
    cin >> row1;
    cout << "\nEnter the column number of the first matrix : ";
    cin >> column1;

    int arr1[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> arr1[i][j];
                }
            }
    
    // Second matrix
    cout << "\nEnter the row number of the second matrix : ";
    cin >> row2;
    cout << "\nEnter the column number of the second matrix : ";
    cin >> column2;

    int arr2[row2][column2];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < column2; j++) {
                    cin >> arr2[i][j];
                }
            }

        // Print two matrix
        cout << "\nFirst matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << arr1[i][j] << " ";
                }
                cout << endl;
            }
        cout << "\nSecond matrix : \n";
            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < column2; j++) {
                    cout << arr2[i][j] << " ";
                }
                cout << endl;
            }

        // Multiply matrix
            int result[row1][column2];
            if (column1 != row2) {
                cout << "\nThis matrices can't be multiplied. Sorry!!";
            }
            
            else {
                if (row1 == 1 && column1 == 1 && row2 == 1 && column2 == 1) {
                    cout << "\nResult : " << arr1[0][0] * arr2[0][0] ;
                }
                else{
                    cout << "\nResultant matrix : \n";
                    for (int i = 0; i < row1; i++) {
                        for (int j = 0; j < column2; j++) {
                            result[i][j] = 0;
                                for (int k = 0; k < row2; k++){
                                    result[i][j] += arr1[i][k] * arr2[k][j];
                                }
                                cout << result[i][j] << " ";
                        }
                        cout << endl;
                    }
                    
                }
            }
}
// Function to rotate a matrix
void rotate()
{
    // Declaring matrix
    cout << "\nEnter the row number : ";
    cin >> row1;
    cout << "\nEnter the column number : ";
    cin >> column1;
    int matrix[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> matrix[i][j];
                }
            }
    // Print the matrix
        cout << "\nEntered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << matrix[i][j] << " "; 
                }
                cout << endl;
            }
           
            cout << "\nHow mant time you want to rotate the matrix : ";
            int rotate;
            cin >> rotate;
            // Rotate the matrix by 90 degrees clockwise (only for square matrices)
            // Perform the rotations
            rotate = rotate % 4;
            if (row1 == column1)
            {
                while (rotate > 0)
                {
                    // Step 1: Transpose the matrix
                        for (int i = 0; i < row1; i++) {
                            for (int j = i; j < column1; j++) {
                                int temp = matrix[i][j];
                                matrix[i][j] = matrix[j][i];
                                matrix[j][i] = temp;
                            }
                        }
                    // Step 2: Reverse each row
                    for (int i = 0; i < row1; i++) {
                        for (int j = 0; j < column1/2; j++) {
                            int temp = matrix[i][j];
                            matrix[i][j] = matrix[i][column1 - j -1];
                            matrix[i][column1 - j -1] = temp;
                        }
                    }
                        rotate--;
                }
                // Print the rotated matrix
                cout << "Matrix after 90 degrees clockwise rotation:" << endl;
                    for (int i = 0; i < row1; i++) {
                        for (int j = 0; j < column1; j++) {
                            cout << matrix[i][j] << " ";
                        }
                        cout << endl;
                    }
            }
            else {
                cout << "\nSorry ! Rotation can't possible.";
            }
        
}
// Function to Interchange Elements of First And Last Rows in Matrix
void Interchange_row()
{
    // Declaring matrix
    cout << "\nEnter the row number : ";
    cin >> row1;
    cout << "\nEnter the column number : ";
    cin >> column1;
    int matrix[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> matrix[i][j];
                }
            }
    // Print the matrix
        cout << "\nEntered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << matrix[i][j] << " "; 
                }
                cout << endl;
            }

    // Interchange element
        for (int j = 0; j < column1; j++) {
            int temp = matrix[0][j];
            matrix[0][j] = matrix[row1 - 1][j];
            matrix[row1-1][j] = temp;
        }
            //  Print the modified matrix
            cout << "\nAfter Interchanging : \n";
                for (int i = 0; i < row1; i++) {
                    for (int j = 0; j < column1; j++) {
                        cout << matrix[i][j] << " ";
                    }
                    cout << endl;
                }
}
// Function to Interchange Elements of First And Last Rows in Matrix
void Interchange_column()
{
    // Declaring matrix
    cout << "\nEnter the row number : ";
    cin >> row1;
    cout << "\nEnter the column number : ";
    cin >> column1;
    int matrix[row1][column1];
        cout << "\nEnter the elements : ";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cin >> matrix[i][j];
                }
            }
    // Print the matrix
        cout << "\nEntered matrix : \n";
            for (int i = 0; i < row1; i++) {
                for (int j = 0; j < column1; j++) {
                    cout << matrix[i][j] << " "; 
                }
                cout << endl;
            }

    // Interchange element
        for (int i = 0; i < row1; i++) {
            int temp = matrix[i][0];
            matrix[i][0] = matrix[i][column1-1];
            matrix[i][column1 - 1] = temp;
        }
            //  Print the modified matrix
            cout << "\nAfter Interchanging : \n";
                for (int i = 0; i < row1; i++) {
                    for (int j = 0; j < column1; j++) {
                        cout << matrix[i][j] << " ";
                    }
                    cout << endl;
                }
}
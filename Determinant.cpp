#include <cmath>
#include <cassert>

double** A_hat(double** Matrix, int size, int col);
double Determinant(double** Matrix, int size);

int main(int argc, char* argv[])
{

    return 0;
}

// A-hat function deletes the first row and the j-th column of a given matrix
double** A_hat(double** Matrix, int size, int col)
{
    assert(size != 1);  // Inserted matrix should be at least square
    auto** A = new double*[size - 1];  // Outcome matrix
    for (int i = 0; i < size - 1; i++) { A[i] = new double[size - 1]; }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (j < col) { A[i][j] = Matrix[i+1][j]; }
            else { A[i][j] = Matrix[i+1][j+1]; }
        }
    }
    return A;
}

// Determinant function is recursive
double Determinant(double** Matrix, int size)
{
    if (size == 1) { return Matrix[0][0]; } // If given matrix is of dimension 1
    else
    {
        double result = 0;  // Outcome of this function
        for (int j = 0; j < size; j++)
        {
            double cofactor = Determinant(A_hat(Matrix, size, j), size-1);
            result += pow(-1, j)*Matrix[0][j]*cofactor;
        }
        return result;
    }
}

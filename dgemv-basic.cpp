const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {
   // implementation of basic matrix multiply
    for (int i = 0; i < n; i++)
    {
        // get row
        y[i] += A[i * n] * x[0];

        for (int j = 1; j < n; j++)
        {
            y[i] += A[i * n + j] * x[j];
        }
    }
}

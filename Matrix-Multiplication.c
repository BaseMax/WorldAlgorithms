void matrix_multiplication(int count, const int array1[][2], const int array2[][2], int result[][2]) {
    int i, j, k;
    for (i = 0; i < count; i++) {
        for (j = 0; j < count; j++) {
            for (k = 0; k < count; k++) {
                result[i][j] = result[i][j] + array1[i][k] * array2[k][j];
            }
        }
    }
}

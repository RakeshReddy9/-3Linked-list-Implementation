#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, k;

    // Input the number of rows and columns for the matrix
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    // Input the number of non-zero elements
    cout << "Enter the number of non-zero elements: ";
    cin >> k;

    // Create a 2D vector to represent the sparse matrix and initialize all elements to 0
    vector<vector<int>> sparseMatrix(m, vector<int>(n, 0));

    // Input the non-zero elements (row, column, value)
    cout << "Enter the non-zero elements (row, column, value): " << endl;
    int r, c, v;
    for (int i = 0; i < k; i++) {
        cin >> r >> c >> v;

        // Set the value in the sparse matrix at the specified row and column
        sparseMatrix[r][c] = v;
    }

    // Print the sparse matrix
    cout << "Sparse Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << sparseMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

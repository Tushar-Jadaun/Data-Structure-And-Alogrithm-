#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return; // empty matrix
    int cols = matrix[0].size();
    
    for (int col = 0; col < cols; col++) {
        if (col % 2 == 0) {
            // Print downwards
            for (int row = 0; row < rows; row++) {
                cout << matrix[row][col] << " ";
            }
        } else {
            // Print upwards
            for (int row = rows - 1; row >= 0; row--) {
                cout << matrix[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Wave Print of the Matrix: " << endl;
    wavePrintMatrix(matrix);

    return 0;
}

#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int v1 = 0, v2 = 0;
    int i = 0, j = 0;
    int r = nRows, c = nCols;
    int count = 0;
    while (count < (r * c))
    {
        for (j; j < nCols; j++)
        {
            cout << input[i][j] << " ";
            count++;
        }
        j -= 1;
        v2 += 1;
        i += 1;
        for (i; i < nRows; i++)
        {
            cout << input[i][j] << " ";
            count++;
        }
        i -= 1;
        nCols -= 1;
        j -= 1;
        ;
        for (j; j >= v1; j--)
        {
            cout << input[i][j] << " ";
            count++;
        }
        j += 1;
        nRows -= 1;
        i -= 1;
        for (i; i >= v2; i--)
        {
            cout << input[i][j] << " ";
            count++;
        }
        i += 1;
        v1 += 1;
        j += 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
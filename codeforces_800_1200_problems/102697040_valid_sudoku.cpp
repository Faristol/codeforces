#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<vector<int>> valid_input = {
    {1, 2, 3, 4, 5, 6, 7, 8, 9},
    {4, 5, 6, 7, 8, 9, 1, 2, 3},
    {7, 8, 9, 1, 2, 3, 4, 5, 6},
    {2, 3, 1, 5, 6, 4, 8, 9, 7},
    {5, 6, 4, 8, 9, 7, 2, 3, 1},
    {8, 9, 7, 2, 3, 1, 5, 6, 4},
    {3, 1, 2, 6, 4, 5, 9, 7, 8},
    {6, 4, 5, 9, 7, 8, 3, 1, 2},
    {9, 7, 8, 3, 1, 2, 6, 4, 5}};
vector<vector<int>> invalid_input = {
    {1, 1, 1, 4, 5, 6, 7, 8, 9},
    {4, 5, 1, 7, 8, 9, 1, 2, 3},
    {7, 8, 9, 1, 2, 3, 4, 5, 6},
    {2, 3, 1, 5, 6, 4, 8, 9, 7},
    {5, 6, 1, 8, 9, 7, 2, 3, 1},
    {8, 9, 7, 2, 3, 1, 5, 1, 4},
    {3, 1, 2, 6, 4, 5, 9, 1, 8},
    {6, 1, 5, 9, 7, 8, 3, 1, 2},
    {9, 7, 8, 3, 1, 2, 6, 4, 5}};
// Sudoku is a popular number puzzle involving placing digits (1-9) in a 9 by 9 grid.
// A sudoku is considered valid if all of the following are true:

// -All digits are integers from 1 to 9

// -No number occurs in the same row twice

// -No number occurs in the same column twice

// -No number occurs in the same 3 by 3 box twice.

// Given a sudoku board, print whether or not it is valid.

bool isSudokuValid(vector<vector<int>> &sudoku_grid)
{
    // es podria fer en sets o en unordered_set
    // una forma elegant seria un vector de bool
    // check row
    for (const auto &row : sudoku_grid)
    {
        vector<bool> seen_row(9, false);
        for (const int &num : row)
        {
            if (seen_row[num - 1])
            {
                return false;
            }
            seen_row[num - 1] = true;
        }
    }
    // check column
    for (int i = 0; i < 9; i++)
    {
        vector<bool> seen_column(9, false);
        for (int j = 0; j < 9; j++)
        {
            int num = sudoku_grid[j][i];
            if (seen_column[num - 1])
            {
                return false;
            }
            seen_column[num - 1] = true;
        }
    }
    // check 3x3 grid
    for (int block_row = 0; block_row < 9; block_row += 3)
    {
        for (int block_column = 0; block_column < 9; block_column += 3)
        {
            vector<bool> seen_block(9, false);
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    int num = sudoku_grid[block_row + i][block_column + j];
                    if (seen_block[num - 1])
                    {
                        return false;
                    }
                    seen_block[num - 1] = true;
                }
            }
        }
    }
    return true;
}

int main()
{
    // vector<vector<int>> sudoku_grid(9, vector<int>(9));
    // for (int i = 0; i < 9; i++)
    // {
    //     string line;
    //     getline(cin, line);
    //     istringstream iss(line);
    //     for (int j = 0; j < 9; ++j)
    //     {
    //         int num;
    //         if (!(iss >> num) || (num < 1 || num > 9))
    //         {
    //             return 1;
    //         }
    // }endl;
    // }
    // else
    // {
    //     cout << "INVALID" << endl;
    // }
    if (isSudokuValid(valid_input))
    {
        cout << "VALID" << endl;
    }
    else
    {
        cout << "INVALID" << endl;
    }
    if (isSudokuValid(invalid_input))
    {
        cout << "VALID" << endl;
    }
    else
    {
        cout << "INVALID" << endl;
    }
}
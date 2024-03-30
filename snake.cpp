#include <iostream>

using namespace std;

const int MAX_N = 100; 

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxSnakeLength(int board[MAX_N][MAX_N], int row, int col, int N) {
    if (row >= N || col >= N)
        return 0;

    if (board[row][col] == 0)
        return 0;

    int right = maxSnakeLength(board, row, col + 1, N);
    int down = maxSnakeLength(board, row + 1, col, N);

    return max(right, down) + board[row][col];
}

int main() {
    int N;
    cin >> N;

    int board[MAX_N][MAX_N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    cout <<maxSnakeLength(board, 0, 0, N) << endl;

    return 0;
}

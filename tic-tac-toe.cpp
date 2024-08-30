#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];
char current_player = 'X';

void initialize_board() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            board[i][j] = ' ';
        }
    }
}

void display_board() {
    cout << "Current board:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "--|---|--\n";
    }
}

bool is_winner() {
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == current_player && board[i][1] == current_player && board[i][2] == current_player)
            return true;
        if (board[0][i] == current_player && board[1][i] == current_player && board[2][i] == current_player)
            return true;
    }
    if (board[0][0] == current_player && board[1][1] == current_player && board[2][2] == current_player)
        return true;
    if (board[0][2] == current_player && board[1][1] == current_player && board[2][0] == current_player)
        return true;

    return false;
}

bool is_draw() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void switch_player() {
    current_player = (current_player == 'X') ? 'O' : 'X';
}

void player_input() {
    int row, col;
    while (true) {
        cout << "Player " << current_player << ", enter your move (row and column): ";
        cin >> row >> col;
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') {
            board[row - 1][col - 1] = current_player;
            break;
        } else {
            cout << "Invalid move. Try again.\n";
        }
    }
}

void play_game() {
    initialize_board();
    while (true) {
        display_board();
        player_input();
        if (is_winner()) {
            display_board();
            cout << "Player " << current_player << " wins!\n";
            break;
        }
        if (is_draw()) {
            display_board();
            cout << "It's a draw!\n";
            break;
        }
        switch_player();
    }
}

int main() {
    char play_again;
    do {
        play_game();
        cout << "Do you want to play again? (y/n): ";
        cin >> play_again;
    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}


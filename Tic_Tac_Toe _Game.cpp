#include <iostream> 
using namespace std; 


bool checkforWin(char board[3][3], char player) 
{ 
	

	for (int i = 0;i <3; i++) { 
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
			return true; 
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
			return true; 
	} 
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
		return true; 
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
		return true; 
	return false; 
} 
void drawtheBoard(char board[3][3]) 
{ 
	cout << "\n-------------\n"; 
	for (int i = 0; i < 3; i++) { 
		cout << "| "; 
		for (int j = 0; j < 3; j++) { 
			cout << board[i][j] << " | "; 
		} 
		cout << "\n-------------\n"; 
	} 
} 
 

int main() 
{ 
	
	char board[3][3] = { { ' ', ' ', ' ' }, 
						{ ' ', ' ', ' ' }, 
						{ ' ', ' ', ' ' } }; 
	char player = 'X'; 
	int row, col; 
	int turn; 
	cout << "Welcome to Tic-Tac-Toe Game!\n"; 
    cout<< "There  are two players in h game.First player is X & second player is Y.1 2";
	

	for (turn = 0; turn < 9; turn++) { 
		
		drawtheBoard(board); 

		
		while (true) { 
			cout << "Player " << player << ", enter row (0-2) and column (0-2): "; 
			cin >> row >> col; 

			if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2) { 
				cout << "Invalid move!. TRY AGAIN.\n"; 
			} 
			else { 
				break; 
		} 
    }

		board[row][col] = player; 
		if (checkforWin(board, player)) { 
			drawtheBoard(board); 
			cout << "Player " << player << " WINS!\n"; 
			break;  
		} 

		
		player  = (player == 'X') ? 'O' : 'X'; 
	} 

	drawtheBoard(board); 

	if (turn == 9 && !checkforWin(board, 'X') && !checkforWin(board, 'O')) { 
		cout << "It's a DRAW! Let us play another game.\n"; 
	} 

	return 0; 
}

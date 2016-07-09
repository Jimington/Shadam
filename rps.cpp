/**
 * PROGRAM: rps.cpp
 * AUTHOR: <#Type your own name here#>
 * UNIQNAME: <#Type your uniqname here#>
 *
 * EECS 183: Project 2, Fall 2014
 *
 * <#A description of the project here#>
 */

#include <iostream>
#include <string>

using namespace std;

/*************************************************************************
 * The following functions have already been implemented for you.
 * You should use them when writing the other functions.
 *************************************************************************/

/**
 * Requires: Nothing.
 * Modifies: Nothing.
 * Effects : Prints a pretty header to introduce the user to the game.
 */
void printInitialHeader();

/**
 * Requires: error_number be either 1 or 2.
 * Modifies: Nothing.
 * Effects : if error_number is 1, prints an error message indicating
 *               an illegal name was entered.
 *           if error_number is 2, prints an error message indicating
 *               an illegal move was entered.
 */
void printErrorMessage(int error_number);


/*************************************************************************
 * You must implement all of the following functions.
 *************************************************************************/

/**
 * Requires: player_number is either 1 or 2.
 * Modifies: Nothing.
 * Effects : Prompts the user to enter their name. Names may have spaces
 *           within them. Example: Kermit the Frog, Fozzie
 *           If an empty name is given, print error message 1, and
 *           return a default name.
 *           For player 1, the default name is: Rocky
 *           For player 2, the default name is: Hulk
 * Prompt  : Player [player_number], enter your name:
 * Used In : main()
 */
string getName(int player_number) {
  cout << "Enter name for Player " << player_number << ": ";
  string name;
  getline(cin, name);
  if (name == "") {
    if (player_number == 1) {
      name = "Rocky";
    }
    else {
      name = "Hulk";
    }
  }
  return name;
}

/**
 * Requires: Nothing.
 * Modifies: Nothing.
 * Effects : Returns true if and only if move is a valid move character.
 * Used In : getMove()
 */
bool isMoveGood(char move) {
  if (move != 'r' && move != 'p' && move != 's') {
    return false;
  }
  return true;
}

/**
 * Requires: player_name is the name of the player being prompted for a move.
 * Modifies: Nothing.
 * Effects : Prompts the player for their move and returns it.
 *           This function should accept the first non-whitespace character as
 *           the move
 *           If an illegal character is entered for their move, print error
 *           message 2 and return rock as a default.
 * Prompt  : [player_name], enter your move:
 * Used In : doRound()
 */
char getMove(string player_name) {
  cout << player_name << ", your move: ";
}

/**
 * Requires: move is the move of the player being checked for a win.
 *           opponent_move is the move of the opponent.
 * Modifies: Nothing.
 * Effects : Returns true if and only if the player who made move won.
 * Used In : doRound()
 */
bool isRoundWinner(char move, char opponent_move);

/**
 * Requires: Nothing.
 * Modifies: Nothing.
 * Effects : If winner_name is empty, prints a message indicating the round is
 *           a draw. Otherwise, prints a congratulatory message to the winner.
 * Prompt  : This round is a draw!
 *           [winner_name] wins the round!
 * Used In : doRound()
 */
void announceRoundWinner(string winner_name);

/**
 * Requires: p1_name and p2_name are the names of the respective players.
 * Modifies: Nothing.
 * Effects : Simulates a complete round, returning 0 if the round was a draw;
 *           1 if player 1 won; 2 if player 2 won.
 * Used In : main()
 */
int doRound(string p1_name, string p2_name);

/**
 * Requires: player_num is 1 or 2,
 *           r1_result, r2_result, r3_result is 0,1, or 2
 *           r1_result is result of round 1 play as determined by doRound(...)
 *           similar for r2_result and r3_result.
 * Modifies: Nothing.
 * Effects : Returns the number of times that player_num won.
 * Used In : main()
 */
int getWinCount(int player_num, int r1_result, int r2_result, int r3_result);

/**
 * Requires: Nothing.
 * Modifies: Nothing.
 * Effects : If winner_name is blank, prints that the game was a draw.
 *           Otherwise, prints a congratulatory message to the winner.
 * Prompt  : No winner!
 *           Congratulations [winner_name]!
 *           You won EECS 183 Rock-Paper-Scissors!
 * Used In : main()
 */
void announceWinner(string winner_name);


int main() {
    // Print the header
    void printInitialHeader();
    // Get the player names

    // Simulate the first 2 rounds

    // Check if either player already clinched a win:
    //    If they have, announce the winner.
    //    Otherwise, simulate the third round, find who has more wins,
    //        and announce the winner.
    
    return 0;
}


/*************************************************************************
 * Put all function implementations below here.
 *************************************************************************/

void printInitialHeader() {
    cout << "----------------------------------------" << endl;
    cout << "               EECS 183                 " << endl;
    cout << "          Rock-Paper-Scissors           " << endl;
    cout << "----------------------------------------" << endl << endl;
}

void printErrorMessage(int error_number) {
    if (error_number == 1) {
        cout << endl << "ERROR: Illegal name given, using default" << endl;
    } else if (error_number == 2) {
        cout << endl << "ERROR: Illegal move given, using default" << endl;
    } else {
        cout << "This should never print!";
    }
}


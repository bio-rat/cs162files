/*
 * Matthew Hawkins
 * CS 162 Lab 1 Demo
 * CLAs, Structs, 2D Arrays 
 * /

/*STEPS FOR PROGRAM*/
/*
* 1) Take in input - DONE
* 2) Create my 2D array - DONE
* 3) Fill the array - Done
* 4) Print the array - Done
* 5) Delete the array
*/


#include <iostream>
#include <stdlib.h> // atoi()

using namespace std;

struct mult_div_values {
     int mult;
     float div;
};

char ** create_board(int num){
    char ** board = new char *[num];
    for(int x = 0; x < num; x++){
        board[x] = new char[num];
    }
    return board;
}

void populate_board(char ** board, int num){
    char input;
    for(int x = 0; x < num; x++){
        for(int y = 0; y < num; y++){
            cout << "Please enter an X or an O: ";
            cin >> input;
            board[x][y] = input;
        }
    }
}

void print_board(char ** board, int num){
    for(int x = 0; x < num; x++){
        for(int y = 0; y < num; y++){
            cout << board[x][y];
        }
        cout << endl;
    }
}

void delete_board(char ** board, int num){
    for(int x = 0; x < num; x++){
        delete [] board[x];
    }
    delete [] board;
}

int main(int argc, char * argv[]){

    int dimensions = atoi(argv[1]);

    // mult_div_values example;
    // example.mult = 10;
    // example.div = 2.5;

    // mult_div_values example_2;
    // example_2.mult = 12;
    // example_2.div = 3.5;

    char ** game_board = create_board(dimensions);
    populate_board(game_board, dimensions);
    print_board(game_board, dimensions);
    delete_board(game_board, dimensions);
    
    return 0;
}




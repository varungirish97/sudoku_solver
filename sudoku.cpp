#include "puzzle.h"

const int NUM_ROWS      =   9;
const int NUM_COLUMNS   =   9;

int main()
{
    std::vector<std::vector<int>> puzzle = {
                                                {2,0,0,     0,4,1,      0,0,0},
                                                {0,1,7,     0,0,0,      0,0,0},
                                                {9,6,0,     0,0,2,      8,0,0},
                                                {0,4,5,     3,0,0,      0,0,0},
                                                {0,0,0,     0,1,0,      0,0,0},
                                                {0,0,0,     0,0,6,      9,3,0},
                                                {0,0,3,     1,0,0,      0,4,2},
                                                {0,0,0,     0,0,0,      6,9,0},
                                                {0,0,0,     2,7,0,      0,0,8}
                                            };
    Puzzle myPuzzle(puzzle);
    myPuzzle.printPuzzle();
    myPuzzle.solvePuzzle();
    myPuzzle.printPuzzle();
    return 0;
}
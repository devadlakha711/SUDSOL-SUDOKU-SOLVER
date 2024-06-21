/* Copyright 2024 DEV ADLAKHA */
#include<iostream>
#include"../src/sudoku_solver.h"

/* NOTE: If you only need to utilise the Grid object,
 * you can just import the "grid.h" header alone. */

int main() {
    sudoku::Grid grid;
    grid.set_initial_state_from_file("samples/sample1.txt");
    std::cout << grid << std::endl;

    sudoku::solve(&grid);
    std::cout << grid << std::endl;

    return 0;
}

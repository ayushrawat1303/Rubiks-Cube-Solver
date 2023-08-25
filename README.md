# Rubiks-Cube-Solver Project
This project includes implementing various cube representations and solving strategies, including DFS,BFS,IDDFS, to solve shuffled Rubik's cubes.
Part-1 : Create generic/base class for the structure of cube which will have all the function declarations in it.
Part-2 : Make the representation of Cube(can be in 3d array, 1d array, bitboard), also add functionalities like printing it, converts color to its corresponding color letter, moves and also shuffles the cube given.
Part-3 : Now we implement the solving strategy for jumbled cube. DFS has time constraint and BFS has memory constraint so we are using IDDFS algorithms which optimises on time like BFS and on memory like DFS.
My plan is to further extend this project by using IDA* algorithm by Sir Korf, as it includes heuristic approach to find the solved state of cube by implementing a guided search which will significantly optimise searching. 

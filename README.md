# C++ Practice Exercises

Solutions to a series of practice exercises from various locations and code challenge websites. The challenge is typically commented in the `main.cpp` file. The completed solutions to questions include tests, where possible. Tests are included in `main.cpp` which makes calls to functions being tested from the header `main.hpp`.

## Compiling and Execution

Compilation of the C++ files requires the use of `c++11` with the `g++` compiler. TO compile the `main.cpp` file, navigate to the directory that has the file and run the following from a unix terminal:
```
g++ -std=c++11 main.cpp -o main
```
This will create an executable `main` which can be run with the following command `./main`, provided the file has execution permissions. Note that execution permissions can be changed using the following command from the terminal:
```
chmod +x main.cpp
```
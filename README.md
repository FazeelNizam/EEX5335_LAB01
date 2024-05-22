# EEX5335_LAB01 - Fibonacci Sequence Calculator

This project contains a C program that calculates the Fibonacci number for a user-specified term using process creation and management in a Linux environment.

## Prerequisites

- GCC (GNU Compiler Collection)
- Linux or Windows with WSL (Windows Subsystem for Linux)
  > I used WSL - `Ubuntu 18.04.6 LTS` to do this Lab exercise so in this procedure I explained how to use this code in the WSL environment.
- Basic understanding of command-line operations

## Getting Started

### Cloning the Repository

- Clone the repository to your local machine using Git:

```sh
git clone https://github.com/FazeelNizam/EEX5355_LAB01.git
```

### Compiling the Code

- Open the Ubuntu terminal (on Windows with WSL) `Ubuntu 18.04 LTS` and open the home folder:

```sh
explorer.exe .
```

- Move the `lab01.c` file into your Linux directory or Navigate to the directory where you cloned the repository.

- Compile the program using GCC:

```sh
gcc lab01.c
```

### Running the Program

- After compilation, you can run the program by specifying a Fibonacci term as an argument. For example, to calculate the Fibonacci number for term 5:

```sh
./a.out 5
```

- You should see output similar to the following:

```ruby
Fibonacci value for term 5 is: 5
Child process ID: <child_process_id>
Child process complete. Parent process ID: <parent_process_id>
```

### Notes

- Ensure that the term you provide is a non-negative integer. (Anyway, the program will handle it!!! :))
- The program uses recursive computation for the Fibonacci sequence, which may be inefficient for large terms.

### Troubleshooting

- If you encounter a "Permission denied" error, ensure the compiled program has execute permissions:

  ```sh
  chmod +x lab01.c
  ```

- If the `gcc` compiler is not installed, you can install it using:

  ```sh
  sudo apt update
  sudo apt install gcc
  ```

### Contributing

Feel free to open issues or submit pull requests if you have any suggestions or improvements.

### Acknowledgments

- Based on examples from:
  > "Operating System Concepts" by Abraham Silberschatz, Peter B. Galvin, and Greg Gagne.
  > How to create child process using fork() || Duplicate Process video by DexTutor
  ```sh
  https://www.youtube.com/watch?v=VdCkrykPy_k&t=2s
  ```

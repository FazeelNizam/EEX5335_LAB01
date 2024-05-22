#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

// Function to compute Fibonacci number for a specific term
int compute_fibonacci(int term) {
    if (term <= 0) {
        return 0;
    } else if (term == 1) {
        return 1;
    } else {
        return compute_fibonacci(term - 1) + compute_fibonacci(term - 2);
    }
}

int main(int argc, char *argv[]) {
    // Ensure the user provides exactly one command line argument
    if (argc != 2) {
        fprintf(stderr, "How to use?\nType: %s <Fibonacci term>\n", argv[0]);
        return 1;
    }

    // Convert the command line argument to an integer
    int term = atoi(argv[1]);
    if (term < 0) {
        fprintf(stderr, "Term must be a non-negative integer.\n");
        return 1;
    }

    // Create a new process using fork()
    pid_t process_id = fork();
    if (process_id < 0) {
        // Error occurred during fork
        perror("Fork failed");
        return 1;
    } else if (process_id == 0) {
        // Child process: calculate the Fibonacci value for the given term
        int fibonacci_value = compute_fibonacci(term);
        printf("Fibonacci value for term %d is: %d\n", term, fibonacci_value);
        printf("Child process ID: %d\n", getpid());
    } else {
        // Parent process: wait for the child process to complete
        wait(NULL);
        printf("Child process complete. Parent process ID: %d\n", getpid());
    }

    return 0;
}

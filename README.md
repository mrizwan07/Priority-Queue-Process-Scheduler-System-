# Scheduler Project

This project consists of multiple files for implementing a scheduler system for processes.

## Files Overview

1. **Source.cpp:**
   - Contains the main function to demonstrate the functionality of the scheduler system.
   - Creates an array of `Process` objects and initializes them with some predefined values.
   - Initializes a `Scheduler` object with the array of processes and a time quantum.
   - Calls the `assignProcessor` function of the `Scheduler` object to simulate process execution.

2. **Scheduler.cpp:**
   - Defines the member functions of the `Scheduler` class declared in `Scheduler.h`.
   - Constructor initializes the scheduler with an array of processes and a time quantum.
   - `assignProcessor` function simulates the process execution using a round-robin scheduling algorithm.

3. **Process.cpp:**
   - Defines the member functions of the `Process` class declared in `Process.h`.
   - Contains constructors and getter/setter functions for process properties such as ID, name, and execution time.

4. **Scheduler.h:**
   - Header file declaring the `Scheduler` class and its member functions.

5. **Process.h:**
   - Header file declaring the `Process` class and its member functions.

## Functionality

- The project demonstrates the scheduling of processes using a round-robin algorithm with a fixed time quantum.
- Processes are initialized with specific IDs, names, and execution times.
- The `Scheduler` class manages the execution of processes and displays their details during execution.

## Example Usage

```cpp
// Example usage in Source.cpp
#include <iostream>
#include "Process.h"
#include "Scheduler.h"
using namespace std;

int main() {
    // Create an array of processes
    Process arr[4] = {
        Process(1, "notepad", 20),
        Process(13, "mp3Player", 5),
        Process(4, "bcc", 30),
        Process(11, "explorer", 2)
    };

    // Initialize a scheduler with the array of processes and a time quantum
    Scheduler s(arr, 4, 5);
    
    // Simulate process execution
    s.assignProcessor();

    return 0;
}

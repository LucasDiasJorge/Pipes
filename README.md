# Pipes

Pipes are one of the most widely used IPC methods. As we can understand from its name, it is a channel with two ends.
 
# IPC Mechanisms

Since processes don't share the same address space, stack and registers, we need to use IPC method to make the processes cooperate, one of this methods is pipes.

# Pipes and FIFOs (main.c)

This project demonstrates interprocess communication using pipes in C. It creates a parent process and a child process, where the child process reads data from a pipe created by the parent process and echoes it to the stdout.

Prerequisites
To compile and run this project, you need:

GCC (GNU Compiler Collection)
Instructions
Follow these steps to compile and run the project:

Clone the repository:

```shell
git clone <repository_url>
```
Navigate to the project directory:

```shell
cd <project_directory>
```
Compile the code using GCC:

```shell
gcc main.c -o main
```
Run the executable:

```shell
./main
```
Explanation
The main logic of the program is divided into three parts:

Creating a pipe:

The pipe is created using the pipe system call, which returns two file descriptors representing the read and write ends of the pipe.
Forking a child process:

The fork system call is used to create a child process.
The child process has a process ID (PID) of 0, while the parent process receives the child's PID.
Both the parent and child processes continue execution from the point where fork was called.
Communication between parent and child processes:

In the child process:
The child process closes the write end of the pipe (mypipe[1]).
It reads data from the pipe using fgetc and echoes it to the stdout.
In the parent process:
The parent process closes the read end of the pipe (mypipe[0]).
It writes some sample text to the pipe using fprintf.
Further Information
For more details, you can refer to section 15 of "The GNU C Library Reference Manual" (pages 450 to 454).

Make sure to replace <repository_url> and <project_directory> with the actual URL and directory path of your project, respectively. Also, include any additional information or instructions specific to your project that you feel are necessary.

I hope this helps! Let me know if you have any further questions.
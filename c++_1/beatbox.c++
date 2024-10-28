// Single-line comment: This is a low-level C++ program without using #include

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

void print(char* str) {
    // This function prints a string using inline assembly
    asm(
        "movl $4, %%eax;" // syscall number for sys_write
        "movl $1, %%ebx;" // file descriptor 1 = stdout
        "int $0x80;"      // interrupt to make the system call
        :
        : "c"(str), "d"(6) // "c" is the message, "d" is the message length
    );
}

int main() {
    // Variable declaration
    int num1 = 10;
    int num2 = 20;

    // Conditional statement
    if (num1 < num2) {
        print("Yes\n");
    } else {
        print("No\n");
    }

    // Calling function to add numbers
    int sum = addNumbers(num1, num2);

    // You can output the sum here using assembly as well, but it's more complex without libraries

    return 0;
}
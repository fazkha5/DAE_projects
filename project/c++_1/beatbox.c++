int addNumbers(int a, int b) {
    return a + b;
}

void print(char* str) {
   
    asm(
        "movl $4, %%eax;" 
        "movl $1, %%ebx;"
        "int $0x80;"     
        :
        : "c"(str), "d"(6) 
    );
}

int main() {
   
    int num1 = 10;
    int num2 = 20;

   
    if (num1 < num2) {
        print("Yes\n");
    } else {
        print("No\n");
    }

    
    int sum = addNumbers(num1, num2);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define stacksize 10

struct stack {
    int item[stacksize];
    int top;
};

struct stack s;

// Push operation
void push(int x) {
    if (s.top == stacksize - 1) {
        printf("⚠️ Stack Overflow! Cannot push %d\n", x);
        return;
    }
    s.top++;
    s.item[s.top] = x;
    printf("✅ Pushed %d\n", x);
}

// Pop operation
int pop() {
    if (s.top == -1) {
        printf("⚠️ Stack Underflow! Nothing to pop\n");
        return -1;
    }
    int x = s.item[s.top];
    s.top--;
    printf("✅ Popped %d\n", x);
    return x;
}

// Peek (stackTop) operation
int stackTop() {
    if (s.top == -1) {
        printf("⚠️ Stack is empty!\n");
        return -1;
    }
    return s.item[s.top];
}

// Display all elements
void display() {
    if (s.top == -1) {
        printf("⚠️ Stack is empty!\n");
        return;
    }
    printf("📌 Stack elements (top → bottom): ");
    for (int i = s.top; i >= 0; i--) {
        printf("%d ", s.item[i]);
    }
    printf("\n");
}

int main() {
    s.top = -1;
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Stack Top\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                value = stackTop();
                if (value != -1)
                    printf("🔝 Top item is: %d\n", value);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("👋 Exiting program...\n");
                exit(0);
            default:
                printf("⚠️ Invalid choice! Try again.\n");
        }
    }
    return 0;
}

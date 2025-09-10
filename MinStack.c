#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int mainStack[MAX], minStack[MAX];
int topMain = -1, topMin = -1;

// Push operation
void push(int x) {
    if (topMain == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    mainStack[++topMain] = x;

    // If the min stack is empty or the new element is <= current min
    if (topMin == -1 || x <= minStack[topMin]) {
        minStack[++topMin] = x;
    }

    printf("Pushed %d\n", x);
}

// Pop operation
void pop() {
    if (topMain == -1) {
        printf("Stack Underflow!\n");
        return;
    }
    int removed = mainStack[topMain--];

    // If the popped element is the current minimum
    if (removed == minStack[topMin]) {
        topMin--;
    }

    printf("Popped %d\n", removed);
}

// Top element
int top() {
    if (topMain == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return mainStack[topMain];
}

// Get minimum element
int getMin() {
    if (topMin == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return minStack[topMin];
}

int main() {
    push(-2);
    push(0);
    push(-3);

    printf("Current Minimum: %d\n", getMin()); // Output: -3
    pop();
    printf("Top Element: %d\n", top());        // Output: 0
    printf("Current Minimum: %d\n", getMin()); // Output: -2

    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 1000

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}


char pop() {
    if (top == -1)
        return '#';
    return stack[top--];
}


int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}


int isBalanced(char expr[]) {
    for (int i = 0; i < strlen(expr); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else {
            char popped = pop();
            if (!isMatching(popped, ch))
                return 0;
        }
    }

    return (top == -1);
}

int main() {
    printf("Name: Chandni Amesar PRN: 25070521218 Batch: 2025-29\n");

    char expr[1000];

    printf("Enter expression: ");
    scanf("%s", expr);

    if (isBalanced(expr))
        printf("true\n");
    else
        printf("false\n");

    return 0;

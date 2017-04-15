//stack implementation
#include <bits/stdc++.h>
using namespace std;

int top = -1;

void push(int stack[], int x, int n){
    if(top == n-1)
        cout << "Stack is full!" << endl;
    else{
        top += 1;
        stack[top] = x;
    }
}

bool isEmpty(){
    if (top == -1)
        return true;
    else
        return false;
}

void pop(int stack[], int n){
    if(isEmpty())
        cout << "Stack is empty!" << endl;
    else
        top -= 1;
}

int size(){
    return top + 1;
}

int topElement(int stack[]){
    return stack[top];
}

int main(){
    int stack[5];
    push(stack, 2, 5);
    cout << "Current size of the stack is " << size() << endl;
    push(stack, 4, 5);
    push(stack, 5, 5);
    cout << "Current size of the stack is " << size() << endl;
    cout << "Top element " << topElement(stack) << endl;
    push(stack, 10, 5);
    push(stack, 19, 5);
    push(stack, 0, 5);
    pop(stack, 5);
    cout << "Current size of the stack is " << size() << endl;
    return 0;
}

















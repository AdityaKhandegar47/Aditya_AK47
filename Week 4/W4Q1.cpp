void MyStack::push(int x) {
    if (top < 999) {
        arr[++top] = x;
    }
}

int MyStack::pop() {
    if (top == -1) {
        return -1;
    }
    return arr[top--];
}
#include <iostream>

using namespace std;

void printDigits(int n) {
    if (n < 10) {
        cout << n;
        return;
    }
    cout << n % 10;
    printDigits(n / 10);
}

int main() {
    for (int i = 2189; i <= 2209; i++) {
        cout << "Number: " << i << ", digits in reverse order: ";
        printDigits(i);
        cout << endl;
    }
    return 0;
}
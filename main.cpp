#include <iostream>

using namespace std;

int fib(int position) {
    if (position < 1) {
        throw std::logic_error("Position of number must be greater than 0");
    }

    int n1 = 1;
    int n2 = 1;
    int fib = 1;

    for (; position > 2; position--) {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;
    }

    return fib;
}

int main() {
    cout << fib(7) << endl;
    return 0;
}

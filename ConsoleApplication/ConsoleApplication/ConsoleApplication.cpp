#include <iostream>

using namespace std;

bool equal(int N, int S) {
    if (N == 0)
        return S == 0;
    return equal(N / 10, S - N % 10);
}

int main() {
    cout << boolalpha;
    cout << equal(12345, 15) << endl; 
    cout << equal(24, 7) << endl;     
    cout << equal(100, 1) << endl;    

    return 0;
}

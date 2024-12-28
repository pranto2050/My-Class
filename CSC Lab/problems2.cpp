


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    bool is_palindrome = true;
    for (int i = 0; i < N / 2; ++i) {
        if (A[i] != A[N - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

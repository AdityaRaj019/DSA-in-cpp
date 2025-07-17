
#include <iostream>
using namespace std;

double power(double x, int n) {
    long binform = abs(n);
    double ans = 1.0;

    if (n == 0 || x == 1.0) return 1.0;
    if (x == 0.0) return 0.0;
    if (x == -1.0) return (n % 2 == 0) ? 1.0 : -1.0;

    if (n < 0) {x = 1.0 / x ; binform = -binform;};

    while (binform != 0) {
        if (binform % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }

    return ans;
}

int main() {
    int n;
    double x;
    cin >> x >> n;  // enter x first, then n
    double answer = power(x, n);
    cout << "Result: " << answer << endl;
    return 0;
}

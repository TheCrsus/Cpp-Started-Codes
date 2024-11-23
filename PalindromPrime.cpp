#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed == original;
}

bool isPalindromePrime(int n) {
    return isPalindrome(n) && isPrime(n);
}

int main() {
    for (int i = 2; i < 400; i++) {
        if (isPalindromePrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}


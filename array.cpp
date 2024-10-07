#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a[10] = {2, 3, 19, 88, 100, 28, 47, 31, 14, 25};
    
    cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < 10; i++) {
        if (isPrime(a[i])) {
            cout << a[i] << " ";
        }
    }

    return 0;
}

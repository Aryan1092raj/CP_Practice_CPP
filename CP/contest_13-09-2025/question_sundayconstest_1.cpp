#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
long long prime_sum_in_range(int l, int r) {
    long long sum = 0;
    if (l <= 2 && r >= 2) {
        sum += 2;
    }
    int start = (l % 2 == 0) ? l + 1 : l;
    if (start < 3) start = 3;
    for (int i = start; i <= r; i += 2) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << prime_sum_in_range(l, r) << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n, m, k;
    cin >> n >> m >> k;

    if (k <= n * m && (k % n == 0 || k % m == 0))
        cout << "можно разделить";
    else
        cout << "нельзя разделить";

    return 0;
}
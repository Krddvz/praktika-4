#include <iostream>
using namespace std;

int main() {
    long long A, B;
    char zn;
    cin >> A >> zn >> B;

    if (zn == '+') cout <<"A + B = "<< A + B;
    else if (zn == '-') cout <<"A - B = "<< A - B;
    else if (zn == '*') cout<<"A + B = " << A * B;
    else if (zn == '/') {
        if (B == 0) cout << "Error";
        else cout <<"A / B = "<< A / B;
    }
    return 0;
}
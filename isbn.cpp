#include <iostream> 
using namespace std;
int main() {
    long long int isbn, a, b, c, d;
    a = 1000000000;
    cout << "請輸入ISBN-10:";
    cin >> isbn; 
    for (int i = 1; i < 10; i++) {
        b = isbn / a;
        c = c + b * i;
        isbn = isbn - b * a;
        a = a / 10;
    }
    d = isbn % 10;
    c = c % 11;
    if (c == d) {
        cout << "YES";
    }
    else {
        cout << "NO";
    } 
}

#include <iostream>
using namespace std;

int main() {
    int c, n;
    cin >> c >> n;

    int count = 1;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> *(a+i) >> *(b+i);

        if (c == b[i]) {
            count++;
            c = a[i];
        }
    }

    cout << c << " " << count;
    return 0;
}

#include <iostream>
using namespace std;

const int N = 100000;
int sumDiv[N + 1];

int main() {
    for (int i = 1; i <= N / 2; i++) {
        for (int j = 2 * i; j <= N; j += i) {
            sumDiv[j] += i;
        }
    }

    int L, R;

    while (cin >> L >> R) {
        if (L == 0 && R == 0)
            break;

        int ans = 0;

        for (int a = L; a <= R; a++) {
            int b = sumDiv[a];

            if (b > a && b <= R && sumDiv[b] == a)
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}

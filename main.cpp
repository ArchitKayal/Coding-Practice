#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int fl = 0;
        vector<int> l(n);
        for (int i = 0; i < n; ++i) {
            cin >> l[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += l[i];
        }
        if (sum == 0) {
            cout << "YES" << endl;
            continue;
        }

        int tmp = l[0];
        for (int i = 1; i < n; ++i) {
            if (l[i] >= tmp) {
                l[i] -= tmp;
                tmp = l[i];
                l[i] = 0;
            } else {
                fl = 1;
                break;
            }
        }

        if (fl == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() {
    int n, l, cnt = 1, af;
    cin >> n;
    vector <int> a(n), st1, st2, act;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    st1.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        if (st1.back() > a[i]) {
            st1.push_back(a[i]);
            cnt++;
        }
        else {
            act.push_back(1);
            act.push_back(cnt);
            int cnt1 = 0;
            cnt = 1;
            while (st1.size() > 0 && st1.back() < a[i] ) {
                st2.push_back(st1.back());
                st1.pop_back();
                cnt1++;
            }
            act.push_back(2);
            act.push_back(cnt1);
            st1.push_back(a[i]);
        }
        if (st2.size() > 0 && st2.back() > a[i]) {
            cout << 0;
            return 0;
        }
    }
    if (cnt > 0) {
        act.push_back(1);
        act.push_back(cnt);
    }
    act.push_back(2);
    act.push_back(st1.size());
    for (int i = 0; i < act.size(); i += 2)
        cout << act[i] << " " << act[i + 1] << endl;
}
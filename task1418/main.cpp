#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int i, n, cnt;
vector<int> v;
int main(void) {
    scanf("%d", &n);
    v.resize(n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    sort(v.begin(), v.end());
    cnt = 1;
    for (i = 0; i < n - 1; i++)
        if (v[i] != v[i + 1]) cnt++;
    printf("%d\n", cnt);
    return 0;
}
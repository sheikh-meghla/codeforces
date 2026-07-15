#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long a[n];

        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        long long need = 1;
        int ok = 1;

        for (int i = 0; i < n; i++) {
            if (a[i] < need) {
                ok = 0;
                break;
            }

            long long extra = a[i] - need;

            if (i != n - 1)
                a[i + 1] += extra;

            need++;
        }

        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
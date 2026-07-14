#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int count = 0;
        int ans = 0;
        int len;
        scanf("%d", &len);

        char ch[len + 1];

        scanf("%s", ch);

        for (int i = 0; i < len; i++) {

            if (ch[i] == '#') {
                count++;
            } else {
                int time = (count + 1) / 2;

                if (time > ans) {
                    ans = time;
                }

                count = 0;
            }
        }

        int time = (count + 1) / 2;

        if (time > ans) {
            ans = time;
        }

        printf("%d\n", ans);
    }

    return 0;
}
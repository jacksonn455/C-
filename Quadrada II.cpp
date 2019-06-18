#include <stdio.h>

using namespace std;

int main() {
    int num;
    scanf("%d", &num);

    while (num != 0) {
        int matriz[num][num];

        for (int i = 0; i < num; i++) {
            for (int j = i; j < num; j++) {
                matriz[j][i] = j + 1 - i;
                matriz[i][j] = j + 1 - i;
            }
        }

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                printf((j == num - 1) ? "%3d\n" : "%3d ", matriz[i][j]);
            }
        }

        printf("\n");
        scanf("%d", &num);
    }

    return 0;
}

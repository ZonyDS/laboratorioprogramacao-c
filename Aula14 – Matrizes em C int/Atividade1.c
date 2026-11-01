#include <stdio.h>

int main() {
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
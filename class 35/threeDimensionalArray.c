#include <stdio.h>

int main() {
    int test[2][3][4] = {
        {{3,4,2,3}, {0,-3,9,11}, {23,12,23,2}},
        {{13,4,56,3}, {5,9,3,5}, {3,1,4,9}}
    };
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            for (int k=0; k<4; k++) {
                printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
            }
        }
    }
    return 0;
}
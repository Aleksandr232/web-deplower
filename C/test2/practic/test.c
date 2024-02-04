#include <stdio.h>

int main() {
    int dom[][10] = {
        {0,0,0,0,1,2,0,0,0,0},
        {0,0,0,1,0,0,2,0,0,0},
        {0,0,1,0,0,0,0,2,0,0},
        {0,1,3,3,3,3,3,3,2,0},
        {1,0,4,0,0,0,0,4,0,2},
        {0,0,4,0,0,0,0,4,0,0},
        {0,0,4,0,0,0,0,4,0,0},
        {0,0,4,0,0,0,0,4,0,0},
        {0,0,4,0,0,0,0,4,0,0},
        {0,0,4,5,5,5,5,4,0,0}
    };

    char symbol[] = {' ', '/', ' ', '-', '|', '_'};

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            switch (dom[x][y]) {
                case 0: 
                    printf("%c", symbol[dom[x][y]]);
                    continue;
                case 1: 
                    printf("%c", symbol[dom[x][y]]);
                    continue;
                case 2: 
                    printf("%c", symbol[dom[x][y]]);
                    continue;
                case 3: 
                    printf("%c", symbol[dom[x][y]]);
                    continue;
                case 4:
                    printf("%c", symbol[dom[x][y]]);
                    continue;
                case 5:
                    printf("%c", symbol[dom[x][y]]);
                    continue;        
                default:
                    break;
            }
        }
        printf("\n"); // Add a newline character after printing each row
    }

    return 0;
}
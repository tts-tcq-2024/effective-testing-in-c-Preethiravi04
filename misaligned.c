#include <stdio.h>
#include <assert.h>

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int pairNumber = 0;
    int i, j;
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            pairNumber = i * 5 + j + 1;
            printf("%d | %s | %s\n", pairNumber, majorColor[i], minorColor[j]);
        }
    }
    return pairNumber;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}

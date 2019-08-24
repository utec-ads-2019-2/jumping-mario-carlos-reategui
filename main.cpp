#include <iostream>

int main() {
    int testCases;
    scanf("%u", &testCases);
    for(unsigned int i = 0; i < testCases; i++) {
        unsigned int highJumps = 0, lowJumps = 0, numberOfJumps, currentElevation, nextJump;
        scanf("%u %u", &numberOfJumps, &currentElevation);
        for(unsigned int j = 0; j < numberOfJumps - 1; j++) {
            scanf("%u", &nextJump);
            if(currentElevation < nextJump) highJumps++;
            if(currentElevation > nextJump) lowJumps++;
            currentElevation = nextJump;
        }
        printf("Case %u: %u %u\n", i + 1, highJumps, lowJumps);
    }
    return 0;
}

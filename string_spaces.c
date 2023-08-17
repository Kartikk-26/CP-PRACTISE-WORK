#include <stdio.h>
#include <string.h>

int main() {
    char entry[100];
    int SpaceCount = 0;

    printf("Enter a string: ");
    fgets(entry, sizeof(entry), stdin);

    for (int i = 0; entry[i] != '\0'; i++) {
        if (entry[i] == ' ' && entry[i+1]!=' ' && entry[i+1] != '\0') {
            SpaceCount++;
        }
    }

    printf("NUMBER OF SPACE COUNT: %d\n",SpaceCount);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char entry[100];
    int SpaceCount = 0;

    printf("Enter a string: ");
    fgets(entry, sizeof(entry), stdin);

    for (int i = 0; entry[i] != '\0'; i++)
    {
        if(entry[i]=='A'||entry[i]=='a')
        entry[i]='1';
        if(entry[i]=='E'||entry[i]=='e')
        entry[i]='2';
        if(entry[i]=='I'||entry[i]=='i')
        entry[i]='3';
        if(entry[i]=='O'||entry[i]=='o')
        entry[i]='4';
        if(entry[i]=='U'||entry[i]=='u')
        entry[i]='5';

    }
    puts(entry);

    return 0;
}

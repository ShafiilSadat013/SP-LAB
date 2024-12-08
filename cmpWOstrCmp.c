#include <stdio.h>
#include <string.h>

// Function to compare two strings
int comp(char *s1, char *s2) {
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main() {
    char s1[100], s2[100];

    // Input strings
    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    // Compare and output result
    if (comp(s1, s2) == 0)
        printf("The strings are Equal\n");
    else
        printf("The strings are Not Equal\n");

    return 0;
}

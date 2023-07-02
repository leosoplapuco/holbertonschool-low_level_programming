#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2) {
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }
    
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    
    char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }
    
    strcpy(result, s1);
    strcat(result, s2);
    
    return result;
}

int main() {
    char *s1 = "Hello, ";
    char *s2 = "world!";
    
    char *concatenated = str_concat(s1, s2);
    if (concatenated == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Concatenated string: %s\n", concatenated);
    
    free(concatenated); // Remember to free the dynamically allocated memory
    
    return 0;
}


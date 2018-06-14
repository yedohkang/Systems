#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_header.h"

int my_strlen(char *s) {
    int length = 0;
    while (s[length]) {
        length ++;
    }
    return length;
}

char *my_strcpy(char *dest, char *source) {
    int i = 0;
    while (source[i]) {
        dest[i] = source[i];
        i ++;
    }
    dest[i] = 0;
    return dest;
}

char *my_strncat(char *dest, char *source, int n) {
    int i = 0;
    while (dest[i]) {
        i ++;
    }
    int j = 0;
    while (j < n) {
        dest[i] = source[j];
        i ++;
        j ++;
    }
    dest[i] = 0;
    return dest;
}

int my_strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] && s2[i]) {
        if (s1[i] - s2[i]) {
            return s1[i] - s2[i];
        }
        i ++;
    }
    return s1[i] - s2[i];
}

char *my_strchr(char *s, char c) {
    int i = 0;
    while (s[i]) {
        if (s[i] == c) {
            return s + i;
        }
        i ++;
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>


int str_len(char str[]);
void str_concat(char result[], char str1[], char str2[]);
bool str_cmp(char str1[], char str2[]);


void main() {
    char str[] = "Hello, how are you??";
    printf("The length of string is: %i\n", str_len(str));

    char result[100];
    char str1[] = "My name is ";
    char str2[] = "Jesse Kim!";
    str_concat(result, str1, str2);
    printf("Concatenated string is: %s\n", result);

    char str11[] = "Apple";
    char str12[] = "apple";
    printf("Apple and apple are equal: %i\n", str_cmp(str11, str12));
}


int str_len(char str[]) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}


void str_concat(char result[], char str1[], char str2[]) {
    int len_str1 = str_len(str1);
    int len_str2 = str_len(str2);
    int count = 0;

    for (int i = 0; i < len_str1; i++) {
        result[count] = str1[i];
        count++;
    }

    for (int i = 0; i < len_str2; i++) {
        result[count] = str2[i];
        count++;
    }

    result[count] = '\0';
}


bool str_cmp(char str1[], char str2[]) {
    int len_str1 = str_len(str1);
    int len_str2 = str_len(str2);

    if (len_str1 != len_str2) {
        return false;
    }

    for (int i = 0; i < len_str1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void longestCommonPrefix(char ** strs, int strsSize){
    int shortest_len = strlen(strs[1]);

    for (int i = 0; i < strsSize; i++)
        if (strlen(strs[i]) < shortest_len) shortest_len = strlen(strs[i]);
    char *res = malloc(sizeof(char) * shortest_len);
    for (int i = 0; i < strsSize; i++) {
            int n = strcmp(strs[i], strs[i + 1]);
            if (n > 0) strncpy(res, strs[i], n);
    }
    return res;
}
int main()
{
    char *str[3] = {"flower","flow","flight"};
    longestCommonPrefix(str, 3);
}
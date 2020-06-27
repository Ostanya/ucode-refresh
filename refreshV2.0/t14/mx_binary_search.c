#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    unsigned left = *count = 0;
    unsigned right = size - 1;
    unsigned mid;
    
    if (!*arr)
        return -1;
    while (left <= right) {
        mid = (right + left) / 2;
        ++*count;
        if (mx_strcmp(arr[mid], s) == 0)
            return mid;
        else if (mx_strcmp(arr[mid], s) > 0)
            right = mid - 1;
        else
            left = mid + 1;
    }
    *count = 0;
    return -1;
}

/*int main (void) {
    char *arr[] =  {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;
    mx_binary_search(arr, 6, "aBz", &count);
    printf("%i\n", mx_binary_search(arr, 6, "aBz", &count));
    printf("%i\n", count);
}*/

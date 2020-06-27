#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size) ;

char *mx_strdup(const char *s1) {
    char *dup = mx_strnew(mx_strlen(s1));
    
    if (!dup)
    	return NULL;
    mx_strcpy(dup, s1);
    return dup;
}

int mx_strcmp(const char *s1, const char *s2);
void mx_printchar(char c);
int mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    int i;
    int j;

    for (i = 1; i < argc; i++) {
        for (j = 1; j < argc - 1; j++) {
            if (mx_strcmp(argv[j], argv[j + 1]) > 0) {
                char *tmp = argv[j + 1];
                argv[j + 1] = argv[j];
                argv[j] = tmp;
            }
        }
    }
    for (i = 1; i < argc; ++i) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}

void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 0; i < 26; i++) {
        int inc = 97;
        if (i % 2 == 0) {
            inc = 65;
        }
    	mx_printchar((char)(i + inc));
    }
    mx_printchar('\n');
}

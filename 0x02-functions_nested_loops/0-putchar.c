int _putchar(char c);

int main(void) {
    char str[] = "_putchar\n";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        _putchar(str[i]);
    }

    return 0;
}

int _putchar(char c) {
    return (write(1, &c, 1));
}

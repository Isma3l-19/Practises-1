#include <stdio.h>
#include <stdarg.h>

void my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move past '%'
            switch (*format) {
                case 'd':
                    printf("%d", va_arg(args, int));
                    break;
                case 'f':
                    printf("%f", va_arg(args, double));
                    break;
                case 's':
                    printf("%s", va_arg(args, char *));
                    break;
                default:
                    putchar(*format);
                    break;
            }
        } else {
            putchar(*format);
        }
        format++;
    }

    va_end(args);
}

int main() {
    int num = 42;
    double pi = 3.14159265359;
    char *message = "Hello, World!";

    my_printf("Number: %d, Pi: %f, Message: %s\n", num, pi, message);

    return 0;
}

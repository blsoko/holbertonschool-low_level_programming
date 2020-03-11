#ifndef HOLBERTON
#define HOLBERTON
int _putchar(char c);
typedef __SIZE_TYPE__ size_t;
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* HOLBERTON */

#ifndef FILE_I_O
#define FILE_I_O
#include <stddef.h>
#include <sys/types.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void buffer_file(char *from, char *to);
#endif

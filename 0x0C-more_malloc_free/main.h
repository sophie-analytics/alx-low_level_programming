#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

void simple_print_buffer(char *buffer, unsigned int size);
#endif

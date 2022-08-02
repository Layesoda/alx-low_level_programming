#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
=======
void free_grid(int **grid, int height);

char *str_concat(char *s1, char *s2);

char *_strdup(char *str);

int _putchar (char c);

char *create_array(unsigned int size, char c);

int **alloc_grid(int width, int height);

>>>>>>> 0260e778ae46ae3cf3ddb609bbce5631ee4b8854
char *argstostr(int ac, char **av);
#endif

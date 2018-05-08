#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* C语言中的内存分配和管理函数: calloc, free, malloc, realloc */
int main() {
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = malloc(200 * sizeof(char));

    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory!\n");
        free(description);
        return 1;
    }
    description = strcpy(description, "Zara Ali is a DPS student. ");

    /* 假设需要更大的描述信息 */
    description = realloc(description, 100 * sizeof(char));
    if (description == NULL ) {
        fprintf(stderr, "Error - unable to allocate required memory!\n");
    } else {
        strcat(description, "She is in calss 10th.");
    }
    printf("Name = %s\n", name);
    printf("Description = %s\n", description);
    free(description);
    return 0;

}


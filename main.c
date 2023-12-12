#include <stdio.h>
#include <string.h>

void help() {
    printf("Usage: simple-cli-c <PATTERN> <VALUE>\n\
        PATTERNS:\n\
        show-text, show-file\n");
}

int main( int argc, char *argv[] ) {
    if (argc < 3) {
        help();
    } else if (strcmp(argv[1], "show-text") == 0) {
        printf(strcat(argv[2], "\n"));
    } else if (strcmp(argv[1], "show-file") == 0) {
        FILE *file = fopen(argv[2], "r");
        char content[100];
        fgets(content, 100, file);
        printf(strcat(content, "\n"));
    } else {
        help();
    }
    
    return 0;
}
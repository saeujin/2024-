#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE* f1 = fopen(argv[1], "rt");
    FILE* f2 = fopen(argv[2], "rt");
    char a, b;

    if (f1 == NULL || f2 == NULL) {
        puts("file open error");
    }

    while (1) {
        a = fgetc(f1);
        b = fgetc(f2);

        if (a != b) {
            printf("두 개의 파일은 일치하지 않습니다.\n");
            break;
        }
        else if (a == EOF && b == EOF) {
            printf("두 개의 파일은 완전히 일치합니다.\n");
            break;
        }
    }
    fclose(f1);
    fclose(f2);

    return 0;
}
#include <stdio.h>

int main(int argc, char* argv[]) {
    char word[50];
    int A = 0;
    int P = 0;
    int i;
    FILE* f = fopen(argv[1], "rt");

    if (f == NULL) {
        puts("file open error");
        return 1;
    }

    for (i = 0; fscanf(f, "%s", word) != EOF; i++) {
        if (word[0] == 'A' || word[0] == 'a')
            A++;
        else if (word[0] == 'P' || word[0] == 'p')
            P++;
    }

    printf("A로 시작하는 단어의 수 : %d\n", A);
    printf("P로 시작하는 단어의 수 : %d\n", P);
    return 0;
}
#include <stdio.h>

typedef struct book_info {
    char title[50];
    char author[20];
    int page;
}book;

int main(void) {
    book arr[3];
    int i;

    printf("도서 정보 입력\n");

    for (i = 0; i < 3; i++) {
        printf("저자: ");
        fgets(arr[i].author, sizeof(arr[i].author), stdin);
        printf("제목: ");
        fgets(arr[i].title, sizeof(arr[i].title), stdin);
        printf("페이지 수: ");
        scanf("%d", &arr[i].page);
        fflush(stdin);
    }

    printf("\n");
    printf("도서 정보 출력\n");

    for (i = 0; i < 3; i++) {
        printf("book%d", i + 1);
        printf("저자: %s", arr[i].author);
        printf("제목: %s", arr[i].title);
        printf("페이지 수: %d\n", arr[i].page);
    }

    return 0;

}
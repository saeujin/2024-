#include <stdio.h>

typedef struct book_info {
    char title[50];
    char author[20];
    int page;
}book;

int main(void) {
    book arr[3];
    int i;

    printf("���� ���� �Է�\n");

    for (i = 0; i < 3; i++) {
        printf("����: ");
        fgets(arr[i].author, sizeof(arr[i].author), stdin);
        printf("����: ");
        fgets(arr[i].title, sizeof(arr[i].title), stdin);
        printf("������ ��: ");
        scanf("%d", &arr[i].page);
        fflush(stdin);
    }

    printf("\n");
    printf("���� ���� ���\n");

    for (i = 0; i < 3; i++) {
        printf("book%d", i + 1);
        printf("����: %s", arr[i].author);
        printf("����: %s", arr[i].title);
        printf("������ ��: %d\n", arr[i].page);
    }

    return 0;

}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[10];
    char pnum[20];
} PERINF;

void insert(PERINF* a, int* used, int* max_size) {
    if (*used >= *max_size) {
        puts("�� �̻� ������ ������ �Ұ��մϴ�.");
        return;
    }
    puts("[INSERT]");
    printf("\n");
    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s", a[*used].name);
    printf("��ȭ��ȣ�� �Է��ϼ��� : ");
    scanf("%s", a[*used].pnum);
    puts("�����Ͱ� ���ԵǾ����ϴ�.");
    (*used)++;
}

void delete(PERINF* a, int* used) {
    char sear[10];
    int count = 0;
    puts("[DELETE]");
    printf("\n");
    for (int i = 0; i < *used; i++) {
        printf("%d��\n\n%s\n%s\n\n", i + 1, a[i].name, a[i].pnum);
    }
    printf("������ ����� �̸��� �Է��ϼ��� : ");
    scanf("%s", sear);
    for (int j = 0; j < *used; j++) {
        if (strcmp(sear, a[j].name) == 0) {
            count++;
            for (int k = j; k < *used - 1; k++) {
                strcpy(a[k].name, a[k + 1].name);
                strcpy(a[k].pnum, a[k + 1].pnum);
            }
            (*used)--;
            puts("�����Ͽ����ϴ�.");
            break;
        }
    }
    if (count <= 0)
        puts("ã�� �� �����ϴ�.");
    printf("\n");
}

void search(PERINF* a, int used) {
    char sear[10];
    int count = 0;
    puts("[SEARCH]");
    printf("\n");
    printf("�˻��� ����� �̸��� �Է��ϼ��� : ");
    scanf("%s", sear);
    for (int j = 0; j < used; j++) {
        if (strcmp(sear, a[j].name) == 0) {
            printf("\n%s\n%s\n\n", a[j].name, a[j].pnum);
            count++;
            break;
        }
    }
    if (count <= 0)
        puts("�˻� ����� �����ϴ�.");
    printf("\n");
}

void printAll(PERINF* a, int used) {
    puts("[Print All]");
    printf("\n");
    if (used > 0) {
        for (int i = 0; i < used; i++)
            printf("%d��\n\n%s\n%s\n\n", i + 1, a[i].name, a[i].pnum);
    }
    else
        puts("�����Ͱ� �����ϴ�");
    printf("\n");
}

void saveDataToFile(PERINF* a, int used) {
    FILE* fp = fopen("D:\\phonebook.txt", "wt");
    if (fp != NULL) {
        for (int i = 0; i < used; i++)
            fprintf(fp, "%s %s\n", a[i].name, a[i].pnum);
        fclose(fp);
    }
    else {
        puts("������ ���忡 �����Ͽ����ϴ�.");
    }
}

void loadDataFromFile(PERINF* a, int* used, int* max_size) {
    FILE* fp = fopen("D:\\phonebook.txt", "rt");
    int count = 0;

    if (fp) {
        while (count < *max_size && fscanf(fp, "%s %s", a[count].name, a[count].pnum) != EOF) {
            count++;
        }

        *used = count;
        fclose(fp);
    }
    else {
        puts("������ �� �� �����ϴ�.");
    }
}

int main(void) {
    int sel, max_size = 30, used = 0;
    PERINF* mem = (PERINF*)malloc(sizeof(PERINF) * max_size);

    loadDataFromFile(mem, &used, &max_size);
    puts("--------------��ȭ��ȣ ���� ���α׷��Դϴ�.----------------");
    puts("����Ͻ� ����� �����ϼ���.");

    while (1) {
        puts("***** MENU *****");
        puts("1. Insert");
        puts("2. Delete");
        puts("3. Search");
        puts("4. Print All");
        puts("5. Exit");
        printf("Choose the item : ");
        scanf("%d", &sel);

        if (sel == 1)
            insert(mem, &used, &max_size);
        else if (sel == 2)
            delete(mem, &used);
        else if (sel == 3)
            search(mem, used);
        else if (sel == 4)
            printAll(mem, used);
        else if (sel == 5) {
            saveDataToFile(mem, used);
            break;
        }
        else
            puts("�ٽ� �Է��ϼ��� ");
    }

    free(mem);
    return 0;
}
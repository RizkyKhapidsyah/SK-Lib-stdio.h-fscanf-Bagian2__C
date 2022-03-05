#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* fp;
    char name[50];
    int age;

    fp = fopen("example.txt", "w");
    fprintf(fp, "%s %d", "Manusia", 32);
    fclose(fp);

    fp = fopen("example.txt", "r");
    fscanf(fp, "%s %d", name, &age);
    fclose(fp);

    printf("Hello %s, You are %d years old\n", name, age);

    _getch();
    return 0;
}
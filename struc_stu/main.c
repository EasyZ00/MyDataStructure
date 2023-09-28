#include <stdio.h>

int main() {
    typedef struct student{
        char numb[20];
        char name[20];
        char sex[7];

    }student,*stu;
    student s1;
    stu p=&s1;
    scanf("%s %s %s",&s1.numb,&s1.name,&s1.sex);
    printf("%s\n%s\n%s",p->numb,p->name,p->sex);
    return 0;
}

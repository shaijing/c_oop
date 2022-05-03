//
// Created by Chaos on 2022/5/3.
//
#include"Student.h"




Student * StudentInit(){
    Student* s = (Student*)malloc(sizeof(Student));
    memset(s, 0, sizeof(Student));
    s->user=UserInit();
    s->setGrade=setGrade;
    s->getGrade=getGrade;
    return s;
}
void StudentDe(struct student* s){
    free(s->user);
    s->user=NULL;
    printf("User pointer pointing to null!\n");
    free(s);
    s=NULL;
    printf("Student pointer pointing to null!\n");

}

void setGrade(Student* s, int grade) {
    if (s == NULL)
        printf("Error: setGrade() - user is NULL\n");
    s->grade = grade;
}


int getGrade(Student* s) {
    if (s == NULL) {
        printf("Error: getGrade() - user is NULL\n");
        return -1;
    }
    return s->grade;
}
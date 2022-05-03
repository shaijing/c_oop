//
// Created by Chaos on 2022/5/3.
//
#ifndef C_OOP_STUDENT_H
#define C_OOP_STUDENT_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "User.h"

typedef struct student {
    struct user * user;

    int grade;


    struct student* (*StudentInit)();
    void (*studentDe)(struct student*);



    int (*getGrade)(struct student*);
    void (*setGrade)(struct student*, int);
} Student;

Student * StudentInit();
void StudentDe(struct student*);


void setGrade(Student*, int);
int getGrade(Student*);










#endif //C_OOP_STUDENT_H

//
// Created by Chaos on 2022/5/4.
//
#ifndef C_OOP_WORKER_H
#define C_OOP_WORKER_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "User.h"


typedef struct worker {
    struct user * user;

    int salary;


    struct worker* (*WorkerInit)();
    void (*WorkerDe)(struct worker*);



    int (*getSalary)(struct worker*);
    void (*setSalary)(struct worker*, int);
} Worker;

Worker * WorkerInit();
void WorkerDe(Worker *);


void setSalary(Worker*, int);
int getSalary(Worker*);

void w_print(void *);


#endif //C_OOP_WORKER_H
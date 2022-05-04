//
// Created by Chaos on 2022/5/4.
//
#include "Worker.h"


Worker * WorkerInit(){
    Worker* s = (Worker*)malloc(sizeof(Worker));
    memset(s, 0, sizeof(Worker));

    s->user=UserInit();

    s->setSalary=setSalary;
    s->getSalary=getSalary;
    return s;
}
void WorkerDe(Worker* s){
    free(s->user);
    s->user=NULL;
    printf("User pointer pointing to null!\n");
    free(s);
    s=NULL;
    printf("Worker pointer pointing to null!\n");

}


void setSalary(Worker * w, int salary) {
    if (w == NULL)
        printf("Error: setSalary() - worker is NULL\n");
    w->salary = salary;
}


int getSalary(Worker* w) {
    if (w == NULL) {
        printf("Error: getSalary() - worker is NULL\n");
        return -1;
    }
    return w->salary;
}



void w_print(void *p){
    if(p==NULL){
        printf("Error: print() - worker is NULL\n");
    }
    Worker * w = (Worker *)p;
    printf("Worker print\n");
    printf("Worker name: %s,worker salary:%d\n",w->user->username,w->salary);
}
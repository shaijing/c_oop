//
// Created by Chaos on 2022/5/3.
//
#include"Student.h"
#include"Worker.h"

int main(int argc, char **argv) {
    //User Class
    User *u = UserInit();
    u->setId(u, 1);
    u->setUserName(u, "User");
    printf("User Class: id = %d, username = %s\n", u->getId(u), u->getUserName(u));
    UserDe(u);

    putchar('\n');

    //Student Class
    Student *s = StudentInit();
    s->setGrade(s, 100);
    s->user->setId(s->user, 1);
    s->user->setUserName(s->user, "Student");
    printf("Student Class: id=%d,student name:%s,grade=%d\n", s->user->getId(s->user), s->user->getUserName(s->user),
           s->getGrade(s));

    s->user->print=s_print;
    s_print(s);
    StudentDe(s);


    putchar('\n');

    //Worker Class
    Worker *w = WorkerInit();
    w->setSalary(w,8000);
    w->user->setId(w->user,1);
    w->user->setUserName(w->user,"Worker");
    printf("Worker Class: id=%d,worker name:%s,salary=%d\n", w->user->getId(w->user), w->user->getUserName(w->user),
           w->getSalary(w));
    w_print(w);
    WorkerDe(w);
    return 0;
}

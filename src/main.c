//
// Created by Chaos on 2022/5/3.
//
#include"Student.h"


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
    StudentDe(s);


    return 0;
}

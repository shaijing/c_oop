//
// Created by Chaos on 2022/5/3.
//
#ifndef C_OOP_USER_H
#define C_OOP_USER_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct user {
    int id;
    char *username;


    struct user* (*UserInit)();

    void (*UserDe)(struct user);

    void (*setId)(struct user*, int);

    void (*setUserName)(struct user*, char*);



    int (*getId)(struct user*);

    char* (*getUserName)(struct user*);

} User;

User* UserInit();
void UserDe(User* u);

void setId(User* user, int id);
void setUserName(User* user, char* username);



int getId(User* user);
char* getUserName(User* username);

#endif //C_OOP_USER_H
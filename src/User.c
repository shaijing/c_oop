//
// Created by Chaos on 2022/5/3.
//

#include "User.h"

User* UserInit() {
    User* u = (User*)malloc(sizeof(User));
    memset(u, 0, sizeof(User));
    u->id = 0;
    u->username = "default";

    u->getId = getId;
    u->getUserName = getUserName;

    u->setId = setId;
    u->setUserName = setUserName;


    return u;
}

void UserDe(User* u) {
    if (u == NULL)
        printf("Error: deUser() - user is NULL\n");
    free(u);
    u=NULL;
    printf("User pointer pointing to null!\n");

}

void setId(User* u, int id) {
    if (u == NULL)
        printf("Error: setId() - user is NULL\n");
    u->id = id;
}

void setUserName(User* u, char* username) {
    if (u == NULL)
        printf("Error: setUserName() - user is NULL\n");
    u->username = username;
}



int getId(User* u) {
    if (u == NULL) {
        printf("Error: getId() - user is NULL\n");
        return 0;  // TODO: return error code
    }
    return u->id;
}

char* getUserName(User* u) {
    if (u == NULL) {
        printf("Error: getUserName() - user is NULL\n");
        return "error";  // TODO: return error code
    }
    return u->username;
}

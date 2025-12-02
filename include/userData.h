#pragma once
#include "../include/include.h"

// Only need this forward declaration because we use pointers
class User;

class UserData{
private:
    static const int MAX_USERS = 5;
    const string filename = "data/UserLoginData.csv";
    User *user[MAX_USERS];
    fstream file;
    int user_id;
public:
    void saveUser(User &u); // save user to disk
    void loadUser(); // load users from disk to program memory
    void deleteUser(); // delete user from disk
    void checkUserExists(); // self explanatory
};
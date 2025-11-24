#pragma once
#include <iostream>
#include <string>
using std::string;

void showMainMenu();
void showloginMenu();
string currentUser = ""; // Variable to store current user
void logoutandquit();
void switchuser();
void deletetasks();
void edittasks();
void addtasks();
void viewtasks();
bool signupUser(string username); // Function to signup user, bool can be true or false
bool LoginUser(string username); // Function to login user, bool can be true or false

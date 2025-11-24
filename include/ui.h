#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

void showMainMenu();
void showloginMenu();
void logoutandquit();
void switchuser();
void deletetasks();
void edittasks();
void addtasks();
void viewtasks();
bool signupUser(string username); // Function to signup user, bool can be true or false
bool LoginUser(string username); // Function to login user, bool can be true or false

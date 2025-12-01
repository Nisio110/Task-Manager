#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

const static string dbg_prefix = "[DEBUG] ";
const static string prefix = "~ ";

void showMainMenu();
void showLoginMenu();
void printTaskDetails();

void viewtasks();
void addtasks();
void edittasks();
void deletetasks();
void switchuser();
void logoutandquit();

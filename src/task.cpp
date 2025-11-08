#include "../include/task.h"

// starting by implementing getters and setters.
std::string task::getName(){return name;}
void task::setName(std::string s){name = s;}

std::string task::getStatus(){return status;}
void task::setStatus(std::string s){status = s;}

std::string task::getDescription(){return description;}
void task::setDescription(std::string s){description = s;}

std::string task::getDeadline(){return deadline;}
void task::setDeadline(std::string s){deadline = s;}

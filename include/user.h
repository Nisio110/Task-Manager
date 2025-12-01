#pragma once
#include <string>
using std::string;
static int num_users{};

class User{
private:
  string name{};
  string password{};
  int id{};
public:
  // Constructor
  User(std::string name, std::string pass);

  // Getters
  inline std::string getName(){return name;}
  inline int getID(){return id;}

};
#include "../include/user.h"
#include <iostream>

using std::cout;

User::User(std::string n, std::string p){
  cout << "User \"" << n << "\" Created\n";
  num_users += 1; // Counter for unique ID
  id = num_users;
  password = p;
  name = n;
}
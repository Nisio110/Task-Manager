#include "../include/include.h"

User::User(std::string n, std::string p){
  cout << dbg_prefix << "User \"" << n << "\" Created\n";
  num_users += 1;
  id = num_users;
  password = p;
  name = n;
}

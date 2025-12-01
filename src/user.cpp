#include "../include/user.h"
#include "../include/task.h"
#include "../include/ui.h"
using std::cout;

User::User(std::string n, std::string p){
  cout << dbg_prefix << "User \"" << n << "\" Created\n";
  num_users += 1;
  id = num_users;
  password = p;
  name = n;
}

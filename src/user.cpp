#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"
// Static member variable definitions
int User::num_users = 0;
string User::current_user = "";

User::User(std::string n, std::string p){
  cout << dbg() << "User \"" << n << "\" Created\n";
  num_users += 1;
  id = num_users;
  password = p;
  name = n;
}

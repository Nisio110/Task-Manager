#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"
// Static member variable definitions
int User::num_users = 0;
string User::current_user = "";

User::User(std::string n){
  cout << dbg() << "User \"" << n << "\" Created\n";
  num_users += 1;
  id = num_users;
  setName(n);
}

bool User::userLogin(string name){
  for (int i; i < num_users; i++)
  {
    //UserData::u[i]->
  }
  return false;
}
bool User::userSignup(string name){
  return false;
}
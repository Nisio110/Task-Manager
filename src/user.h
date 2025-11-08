/*
# User class
## Private 
### Data
  + username 
  + password
### Functions
  + Save data to file
## Public
### Functions
  + New user signup
  + Delete user
  + Login
  + Check existing users
  + Logout
*/
#pragma once
#include <string>

class user{
private:
  std::string name{};
  std::string password{};
public:
  user(); // Constructor for user registration

  void saveUser();
  void deleteUser();
  
  std::string getName();
  void setName();
  std::string getPassword();
  void setPassword();

};

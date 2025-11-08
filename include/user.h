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
  user(std::string name, std::string pass)


  void saveUser();
  void deleteUser();
  
  inline std::string getName(){return name;}
  inline void setName(std::string s){name = s;}
  inline std::string getPassword(){return password;}
  inline void setPassword(std::string s){password = s;}
};
  //inline std::string getName(){ return name; }

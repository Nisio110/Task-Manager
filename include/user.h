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
using std::string;

class User{
private:
  string name{};
  string password{};
  string current_user{}; 
public:
  // Functions
  bool userLogin(string name,string pass);
  bool userSignup(string name, string pass);
  void switchUser();
  void logoutAndQuit();
  // Data Storage
  void saveUser();
  void deleteUser();

  // Constructor
  user(std::string name, std::string pass);

  // Getters and Setters
  inline std::string getName(){return name;}
  inline void setName(std::string s){name = s;}
  inline std::string getPassword(){return password;}
  inline void setPassword(std::string s){password = s;}

};

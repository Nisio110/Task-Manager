#pragma once
#include <string>
using std::string;
static int num_users{};

class User{
private:
  string name{};
  string password{};
  string current_user{}; 
  int id{};
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
  User(std::string name, std::string pass);

  // Getters and Setters
  inline std::string getName(){return name;}
  inline void setName(std::string s){name = s;}
  inline std::string getPassword(){return password;}
  inline void setPassword(std::string s){password = s;}
  inline int getID(){return id;}
  inline void setID(int i){id = i;}

};

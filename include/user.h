#pragma once
#include "../include/include.h"

class User{
private:
  string name{};
  string password{};
  int id{};
  static string current_user; 
  static int num_users;
  const static int MAX_USERS = 5;
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
  User(string name, string pass);

  // Getters  
  inline string getName(){return name;}
  inline string getPassword(){return password;}
  inline int getID(){return id;}
  inline static string getCurrentUser(){return current_user;}

  // Setters
  inline void setName(string s){name = s;}
  inline void setPassword(string s){password = s;}
  inline void setID(int i){id = i;}
  inline static void setCurrentUser(string _user){current_user = _user;}

  
  static bool userLoginUI(string current_user);
  static bool userSignupUI(string current_user);
};

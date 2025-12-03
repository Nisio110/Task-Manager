#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"
#include "../include/userData.h"

void UserData::saveUser(User &user){
    // Create the file
    cout << dbg() << "Creating user file..." << "\n";
    file.open(filename, ios::app);
    if (!file.fail()){
        cout << dbg() << "User file opened successfully!\n";
        cout << dbg() << "...File creation successful!\n";
    }
    else {
        file.clear();
        cout << dbg() << "File failed to open :(\n";
    }
    // ^^ This should be its own function

    // Write data to the file
    string data_div = ",", user_div = "\n", qt = "\"";
    file << qt << user.getID() << qt << data_div
         << user_div;
        
}
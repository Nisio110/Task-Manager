#include "../include/include.h"

int main(){
    Task t("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    Task t2("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    User u("Oisin", "123");
    TasksFile tf;
    tf.saveTask(u,t);
    tf.saveTask(u,t2);
    return 0;
}

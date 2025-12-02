#include "../include/include.h"

void testTaskSaving();
void program();

int main(){
    testTaskSaving();
    return 0;
}




void testTaskSaving(){
    Task t("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    Task t2("SampleTask_2","A sample task created for testing purposes", "03/12/2025", "pending");
    User u("Oisin", "123");
    TaskData tf;
    tf.saveTask(u,t);
    tf.saveTask(u,t2);
}

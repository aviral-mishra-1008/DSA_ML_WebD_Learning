//Question 1
/*Write  a  program  in  C  that  creates  a  child  process,  waits  for  the termination  of  the  child  and  lists
process  ID  (PID),  together  with  the  state  in  which  the  process  was  terminated  (in  decimal  and hexadecimal). */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
   pid_t p = fork();
   if(p==-1){
       perror("Error forking process");
       exit(EXIT_FAILURE);
   }
   if(p==0){
      printf("Executing child process.....\n");
      sleep(2);
      printf("The process id of child is: %d \n",getpid());
      }
   else{
    int status;
    wait(&status);
    printf("the exit status is: %d\n",status); //this also works ;/
     if (WIFEXITED(status)){
            printf("Child process exited with status: %d\n", WEXITSTATUS(status)); //these are called as macros and macros are basically the same thing we define in #Define blah blah, so in header file somewhere a function of form of macros is defined and basically it is responsible for checking if the child exited with success by WIFEXITED(status) and then the WEXITSTATUS(status) returns the status of the child process
    }
    else{
            printf("Child process exited abnormally\n");
    }
    printf("The process id of parent is: %d \n",getpid());
   }
  return 0;       
}

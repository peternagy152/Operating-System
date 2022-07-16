#ifndef FOS_KERN_MONITOR_H
#define FOS_KERN_MONITOR_H
#ifndef FOS_KERNEL
# error "This is a FOS kernel header; user programs should not #include it"
#endif

#include <inc/types.h>

// Function to activate the kernel command prompt
void run_command_prompt();
int execute_command(char *command_string);

// Declaration of functions that implement command prompt commands.
int command_help(int , char **);
int command_kernel_info(int , char **);
int command_ver(int number_of_arguments, char **arguments);
int command_add(int number_of_arguments, char **arguments);

/*ASSIGNMENT-1*/
uint32 IsPalindrome(char** arguments);
int command_palindrome(int , char **);
uint32 CheckNumOfArgs(char** arguments, int numOfArgs);

/*ASSIGNMENT-1 BONUS*/
int command_xcc(int , char **);
void ExecuteCommands();

#endif	// !FOS_KERN_MONITOR_H

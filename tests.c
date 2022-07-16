#include <kern/tests.h>

//define the white-space symbols
#define WHITESPACE "\t\r\n "

void TestAssignment1()
{
	cprintf("\n========================\n");
	cprintf("Automatic Testing of Q1:\n");
	cprintf("========================\n");
	TestAss1Q1();
	cprintf("\n========================\n");
	cprintf("Automatic Testing of Q2:\n");
	cprintf("========================\n");
	TestAss1Q2();
	cprintf("\n========================\n");
	cprintf("Automatic Testing of Q3:\n");
	cprintf("========================\n");
	TestAss1Q3();
}
int TestAss1Q1()
{
	//cprintf("Q1 Automatic Test: under preparation. will be available later isA\n");
	int retValue = 0;
	int i = 0;
	//CASE1: palindrome word
	char cr1[100] = "ip acaramanamaraca";
	int numOfArgs = 0;
	char *args[MAX_ARGUMENTS] ;
	strsplit(cr1, WHITESPACE, args, &numOfArgs) ;

	uint32 ret = IsPalindrome(args) ;
	if (ret != 1)
	{
		cprintf("[EVAL] IsPalindrome: Failed\n");
		return retValue;
	}

	//CASE2: not palindrome
	char cr2[100] = "ip OperatingSystems";
	numOfArgs = 0;
	strsplit(cr2, WHITESPACE, args, &numOfArgs) ;

	ret = IsPalindrome(args) ;
	if (ret != 0)
	{
		cprintf("[EVAL] IsPalindrome: Failed\n");
		return retValue;
	}

	//CASE3: palindrome
	char cr3[100] = "ip aa";
	numOfArgs = 0;
	strsplit(cr3, WHITESPACE, args, &numOfArgs) ;

	ret = IsPalindrome(args) ;
	if (ret != 1)
	{
		cprintf("[EVAL] IsPalindrome: Failed\n");
		return retValue;
	}

	cprintf("[EVAL] IsPalindrome: Succeeded\n");

	return 0;
}
int TestAss1Q2()
{
	//cprintf("Q2 Automatic Test: under preparation. will be available later isA\n");
	int retValue = 0;
	int i = 0;

	//CASE1: invalid number of args
	char cr1[100] = "ver 1";
	int numOfArgs = 0;
	char *args[MAX_ARGUMENTS] ;
	strsplit(cr1, WHITESPACE, args, &numOfArgs) ;
	uint32 ret = CheckNumOfArgs(args, numOfArgs) ;
	if (ret != 0)
	{
		cprintf("[EVAL] CheckNumOfArgs1: Failed\n");
		return retValue;
	}

	//CASE2: invalid number of args
	char cr2[100] = "add 12 2 3";
	numOfArgs = 0;
	strsplit(cr2, WHITESPACE, args, &numOfArgs) ;
	ret = CheckNumOfArgs(args, numOfArgs) ;
	if (ret != 0)
	{
		cprintf("[EVAL] CheckNumOfArgs2: Failed\n");
		return retValue;
	}

	//CASE3: invalid number of args
	char cr3[100] = "ip sdsd sdsd";
	numOfArgs = 0;
	strsplit(cr3, WHITESPACE, args, &numOfArgs) ;
	ret = CheckNumOfArgs(args, numOfArgs) ;
	if (ret != 0)
	{
		cprintf("[EVAL] CheckNumOfArgs3: Failed\n");
		return retValue;
	}

	//CASE4: invalid number of args
	char cr4[100] = "add 12 13 25";
	numOfArgs = 0;
	strsplit(cr4, WHITESPACE, args, &numOfArgs) ;
	ret = CheckNumOfArgs(args, numOfArgs) ;
	if (ret != 0)
	{
		cprintf("[EVAL] CheckNumOfArgs: Failed\n");
		return retValue;
	}

	//CASE5: valid number of args
	char cr5[100] = "add 12 13";
	numOfArgs = 0;
	strsplit(cr5, WHITESPACE, args, &numOfArgs) ;
	ret = CheckNumOfArgs(args, numOfArgs) ;
	if (ret != 1)
	{
		cprintf("[EVAL] CheckNumOfArgs: Failed\n");
		return retValue;
	}

	//CASE6: valid number of args
	char cr6[100] = "help";
	numOfArgs = 0;
	strsplit(cr6, WHITESPACE, args, &numOfArgs) ;
	ret = CheckNumOfArgs(args, numOfArgs) ;
	if (ret != 1)
	{
		cprintf("[EVAL] CheckNumOfArgs: Failed\n");
		return retValue;
	}

	cprintf("[EVAL] CheckNumOfArgs: Succeeded\n");

	return 0;
}
int TestAss1Q3()
{
	cprintf("Q3 Test: manually try the test cases in the doc. \n..."
			"OR, you can do it automatically by un-commenting the code in tests.c (TestAss1Q3()), it should output the same results in the Examples of the Assignment Document\n");
/*
	int retValue = 0;
	int i = 0;

	//CASE1:
	//should execute the help command
	char cr0[100] = "help";
	execute_command(cr0) ;

	//should execute the add command
	char cr1[100] = "add 2 3";
	execute_command(cr1) ;

	//CASE2: should print the description of the "add"
	char cr2[100] = "add";
	execute_command(cr2) ;

	//CASE3: should print the commands that start with kernel
	char cr3[100] = "kernel";
	execute_command(cr3) ;

	//CASE4: should print the commands that start with ru
	char cr4[100] = "ru";
	execute_command(cr4) ;

	//CASE5: should print unknown command
	char cr5[100] = "smm";
	execute_command(cr5) ;

*/
	return 0;
}


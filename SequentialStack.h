#ifndef _STACK_H_
#define _STACK_H_
#define MAXSIZE 1000
//typedef char ElementType;
//int stack
typedef struct {
	int* array;
	int Top;
	int len;
}intStack;

intStack* intCreateStack();						//create stack
void intPush(intStack* PtrS, int item);	//insertion
int intPop(intStack* PtrS);				//departion
int intIsEmpty(intStack* S);						//
void intClearStack(intStack* PtrS);		
int intGetTop(intStack* s);		

//char stack
typedef struct {
	char* array;
	int Top;
	int len;
}charStack;

charStack* charCreateStack();						//create stack
void charPush(charStack* PtrS, char item);	//insertion
char charPop(charStack* PtrS);				//departion
int charIsEmpty(charStack* S);						//
void charClearStack(charStack* PtrS);		
char charGetTop(charStack* s);		

//double stack
typedef struct {
	double* array;
	int Top;
	int len;
}doubleStack;

doubleStack* doubleCreateStack();						//create stack
void doublePush(doubleStack* PtrS, double item);	//insertion
double doublePop(doubleStack* PtrS);				//departion
int doubleIsEmpty(doubleStack* S);						//
void doubleClearStack(doubleStack* PtrS);		
double doubleGetTop(doubleStack* s);		


#endif
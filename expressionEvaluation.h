/*************************************************************************
	> File Name: expressionEvaluation.h
	> Author: HaoJie
	> Mail: 954487858@qq.com 
	> Created Time: 2018年07月16日 星期一 16时22分47秒
 ************************************************************************/
#ifndef _EXPRESSIONEVALUATION_H_
#define _EXPRESSIONEVALUATION_H_
#include<stdio.h>
int infixToPostfix(char* infoxExpression, char postfixExpression[]);
int computeValueFromPostfix(char* postfixExpression, double *value);
int Priority(char c);
int getNumOfExpression(char* postfixExpression, double numberArray[]);

#endif


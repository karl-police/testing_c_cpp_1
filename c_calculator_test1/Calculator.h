#pragma once

/*
	"C" does not have Classes nor can you define functions inside of a struct.
	You can have a pointer however.
*/

typedef enum Calculator_OPERATOR {
	Calc_INVALID = -1,
	Calc_ADDITION,
	Calc_SUBTRACTION
} Calculator_OPERATOR;

typedef struct {
	/*
		Calculate, "op" can be "+" or "-"
	*/
	double (*calculate)(double, double, char);
} Calculator_t;

double impl_Calculator_calculate(double num_A, double num_B, char op);

Calculator_t CalculatorInit();
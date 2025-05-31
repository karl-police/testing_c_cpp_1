#include "Calculator.h"

// Constructor for the Calculator
Calculator_t CalculatorInit() {
	Calculator_t calc;

	// Connect the pointers
	calc.calculate = &impl_Calculator_calculate;

	return calc;
};


Calculator_OPERATOR Calculator_charToOp(char in) {
	switch (in) {
	case '+':
		return Calc_ADDITION;
	case '-':
		return Calc_SUBTRACTION;
	default:
		return Calc_INVALID;
	}
};

double impl_Calculator_calculate(double num_A, double num_B, char input_op) {
	Calculator_OPERATOR Op = Calculator_charToOp(input_op);

	double result;

	switch (Op) {
		case Calc_INVALID: {
			printf("Invalid Operator.");
			result = -1;
			break;
		}
		case Calc_ADDITION: {
			result = (num_A + num_B);
			break;
		}
		case Calc_SUBTRACTION: {
			result = (num_A - num_B);
			break;
		}
	}

	return result;
};
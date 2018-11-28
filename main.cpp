#include <iostream>
#include <cmath>
#include <string>


class cText {
public:
	std::string NameTxt() {
		std::string strName;
		std::cout << "Please enter your name here: ";
		std::cin >> strName;
		return strName;
	};

	void Greets(std::string strName) {
		std::cout << "\nHello " << strName << ". \nPlease notice that this is an very simple calculator!";
		Loop();
		std::cout << "For minus write | - |\nFor addition write | + |\nFor division write | / |\nFor multiplication write | * |";
	};

	void Loop() {
		for (int i = 0; i <= 5; i++) {
			std::cout << "\n";
		};
	};
};

class cCalc {
public:
	cText m_Loop;
	void Operator() {
		double num1, num2;
		char chOperator;

		m_Loop.Loop();
		std::cout << "Please type the first value and then the second value:\n";
		std::cin >> num1 >> num2;
		std::cout << "\nPlease, type now your wished operator:\n";
		std::cin >> chOperator;
		std::cout << "\n";
		Calc(chOperator, num1, num2);
	}

	void Calc(char chOperator, double num1, double num2) {
		switch (chOperator)
		{
		case '+':
			std::cout << num1 + num2;
			break;

		case '-':
			std::cout << num1 - num2;
			break;

		case '*':
			std::cout << num1 * num2;
			break;

		case '/':
			std::cout << num1 / num2;
			break;

		default:
			std::cout << "Operator is not correct";
			break;
		}
	}
};


int main() {
	std::string strName;
	cText m_Txt;
	cCalc m_Calc;

	strName = m_Txt.NameTxt();
	m_Txt.Greets(strName);
	m_Calc.Operator();

	std::cin.get();
	return 0;
};

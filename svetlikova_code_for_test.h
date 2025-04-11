#ifndef _SURNAME_MATHTASK_H_
#define _SURNAME_MATHTASK_H_
 
#include <string>
using namespace std;

//функция контроля вводимых данных
bool UserInput(string input) {
	if (input.empty()) return false;
    for (char c : input) {
        if (isalpha(c)) { // isalpha проверяет, является ли символ буквой
            return false;
        }
    }
	try {
		int number = stold(input);
		if (number < 0) return false;
	}
	catch (...) 
	{ return false; }
	return true;
}
//метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
	return NumberA * NumberB ;
}
#endif
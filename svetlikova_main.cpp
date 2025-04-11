#include <iostream>
#include "svetlikova_code_for_test.h"

using namespace std;

int main()
{
	int NumberA = 0, NumberB = 0;
    //ввод переменной A
    EnterDigit(NumberA, "input height A");
    //ввод переменной B
    EnterDigit(NumberB, "input height B");
	
	//вычисление площади прямоугольника
	int RectangleArea = CalcRectangleArea(NumberA, NumberB);
	//вывод значения площади
	cout << "Area of Rectangle is " << RectangleArea << endl;
}
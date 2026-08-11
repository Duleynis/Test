#include <iostream>
#include <locale>

using namespace std;

float Sum(float firstNumber, float secondNumber) {
	return firstNumber + secondNumber;
}

float Multiplication(float firstNumber, float secondNumber) {
	return firstNumber * secondNumber;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	float first, second;
	cin >> first >> second;

	cout << "Сумма чисел: " << Sum(first, second) << "\n";
	cout << "Произведение чисел: " << Multiplication(first, second);
}
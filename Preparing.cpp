#include <iostream>
#include <locale>

using namespace std;

// Сложение чисел
float Sum(float firstNumber, float secondNumber) {
	return firstNumber + secondNumber;
}

// Умножение чисел
float Multiplication(float firstNumber, float secondNumber) {
	return firstNumber * secondNumber;
}

// Деление чисел
float Division(float firstNumber, float SecondNumber) {
	return firstNumber / SecondNumber;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	float first, second;
	cin >> first >> second;

	cout << "Сумма чисел: " << Sum(first, second) << "\n";
	cout << "Произведение чисел: " << Multiplication(first, second) << "\n";
	cout << "Частное чисел " << Division(first, second);
}
#include <iostream>
#include <Windows.h>


using namespace std;
int main()
{
	//Для українізації консолі
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "\t-----------------------------------------------------------\n";
	cout << "tВизначення кількості фруктів\n";
	cout << "\t------------------------------------------------------------\n";
	cout << endl;

	cout << "\tВведіть кількість яблук ";
	int apple;
	cin >> apple;
	cout << "\tВведіть кількість бананів ";
	int banana;
	cin >> banana;

	int fruits=apple + banana;

	cout << "\n\tКількість фруктів " <<fruits<< "\n\n";

	cout << "\t-----------------------------------------------------------\n";
	cout << "\tАвтор програми Хмєль І.В";

	//Для затримки консольного вікна
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
}
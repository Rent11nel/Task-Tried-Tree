#include "List.h"

int main()
{
	SetConsoleOutputCP(1251);
	
	pTree root = NULL;
	string str, s = "";
	ifstream file("file.txt");

	int count;
	cout << "Введите длинну слова: ";
	cin >> count;

	while (file >> str) Add_words(root, str, 0);

	system("cls");
	cout << "Слова в файле:\n\n"; print(root, s);
	cout << "\nЧисло слов длинны "<< count << ": " << Task(count, 0, root) << "\n";
	return 0;
}
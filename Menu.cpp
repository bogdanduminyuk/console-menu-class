#include "Menu.h"

Menu::Menu()
{
}

void Menu::run(vector<string> elements, vector<string(*)()> functions) try
{
    size_t key,
		size = elements.size();
    string error;

	if (size != functions.size()) 
		throw("El != Func");

    while (true)
	{
		for (size_t i = 0; i < size; i++)
			cout << i + 1 << " - " << elements[i] << endl;
        cout << size + 1 << " (or over) - exit" << endl;

		cin >> key;

        if (key > size) {
            cout << "Exit\n";
            break;
        }

        error = functions[key - 1]();

        if (!error.empty())
            throw(error.c_str());

        system("pause");
        system("cls");
	}
}
catch (const char* errmsg)
{
    cout << "ERR+ " << errmsg << endl;
    abort();
}

#include <iostream>
#include <string>

using namespace std;

struct Num
{
	string a;
	string b;
	void nummas() {
		cout << "vvedi a ";
		cin >> a;
		cout << "vvedi b";
		cin >> b;
	}

	void outmas()
	{
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
	}
		
};


int main()
{
	int exit=0;
	int size =1;
	Num* mas = new Num[size];
	do {
		size = size + exit;
		for (int i = size - 1; i < size; i++)
		{
			mas[i].nummas();
			

		}
		cout << "\n**********************************\n";
		for (int i = 0; i < size; i++)
		{
			mas[i].outmas();
		}
		cout << "\n**********************************\n";

		do
		{
			cout << "\nvvedi 1 ili 2-exit ";

			cin >> exit;
		} while (exit!=1 && exit!=2);
		
	} while (exit == 1);
	
	delete[]mas;
	return 0;
}


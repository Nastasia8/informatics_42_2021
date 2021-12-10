#include <iostream>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: cin;

int main (){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

int height; char sim, sim2, sim3, sim4;
cout << "Введите высоту треугольника" << endl;
cin >> height;
cout << "Введите 4 символа, которые будут описывать 4 треугольника" << endl;
cin >> sim;
cout << endl;
cin >> sim2;
cout << endl;
cin >> sim3;
cout << endl;
cin >> sim4;
cout << endl;

cout << endl << "С помощью for" << endl << endl;

for (int i = 0; i <= height - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << sim;
		}
		cout << endl;

	}
    cout << "------------" << endl;

///////////////////////////////////////	
	for (int i = 0; i <= height - 1; i++)
	{
		for (int j = height - 1; j >= i; j--)
		{
			cout << sim2;
		}
		cout << endl;

	}
	cout << "------------" << endl;

///////////////////////////////////////	
    for (int i = 0; i <= height - 1; i++)
	{
		for (int j = 0; j <= height - i - 1; j++)
		{
			cout << " ";
		}
		for (int p = 0; p <= i; p++)
		{
			cout << sim3;
		}
		cout << endl;

	}
	cout << "------------" << endl;

///////////////////////////////////////	
	for (int i = 0; i <= height - 1; i++)
	{
		for (int j = height - 1; j >= height - 1 - i; j--)
		{
			cout << " ";
		}
		for (int p = height - 1; p >= i; p--)
		{
			cout << sim4;
		}
		cout << endl;
    }
	cout << endl << "С помощью while" << endl << endl;
	
///////////////////////////////////////	
	int p = 0;
	int flag = 0;
		while (p < height)
		{	
		int p1 = 0;
			while (p1 < height)
			{
				if (p1 < flag + 1)
				{
					cout << sim;
				}
				p1++;
			} 
		flag++;
		cout << endl;
		p++;
	}
	cout << "------------" << endl;

///////////////////////////////////////	
	p = 0;
	flag = height - 1;
		while (p < height)
		{	
		int p1 = 0;
			while (p1 < height)
			{
				if (p1 > flag)
				{
					cout << " ";
				} else 
					{
						cout << sim2;
					}
				p1++;
			} 
		flag--;
		cout << endl;
		p++;
	}
	cout << "------------" << endl;

///////////////////////////////////////	
	p = 0;
	flag = height;
		while (p < height)
		{	
		int p1 = 0;
			while (p1 < height)
			{
				if (p1 < flag - 1)
				{
					cout << " ";
				} else 
					{
						cout << sim3;
					}
				p1++;
			} 
		flag--;
		cout << endl;
		p++;
	}
	cout << "------------" << endl;

///////////////////////////////////////	
	p = 0;
	flag = 0;
		while (p < height)
			{	
			int p1 = 0;
				while (p1 < height)
				{
					if (p1 < flag)
					{	
						cout << " ";
					} else 
						{
							cout << sim4;
						}
					p1++;
				} 
			flag++;
			cout << endl;
			p++;
	}
	cout << endl;

return 0;
}
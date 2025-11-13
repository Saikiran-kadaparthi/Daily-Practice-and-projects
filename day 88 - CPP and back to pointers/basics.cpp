//basics
#include<iostream>
using namespace std;

int main()
{
	//ouput using std::
	std::cout <<"Hello world!" << std::endl << "Hello world!" << "\n" << "Hello world!";
	//output without using std::
	cout << "\nhello world!\n\n";
	
	//input;
	int a;
	cout << "Enter a number :: ";
	cin >> a;
	cout << "Output :: " << a;
	
	int b, c;
	cout << "\n\nEnter two number :: \n";
	cin >> c >> b;
	cout << "Output : " << c << " " << b;
	
	//string input and out
	string str;
	cout << "\n\nEnter a string : ";
	cin >> str;
	cout << "Entered string : " << str;
	
	
	//Strings with spaces 
	string str2;
	cout << "\n\nEnter a string (works with spaces) : ";
	cin.ignore();
	getline(cin, str2);
	cout << "\nEntered string :: " << str2;
	
	return 0;
}

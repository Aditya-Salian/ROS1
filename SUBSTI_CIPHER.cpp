#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter text: ";
	string text;
	cin>>text;
	cout<<"Enter shift: ";
	int s;
	cin>>s;
	string result = "";
	for (int i=0;i<text.length();i++)
	{
		result += char(int(text[i]+s-65)%26 +65);
	}
	cout << "\nText : " << text;
	cout << "\nShift: " << s;
	cout << "\nCipher: " << result;
	
    string text1=result;
    string result1;
	for (int i=0;i<text1.length();i++)
	{
		result1 += char(int(text1[i]-s-65)%26 +65);
	}
	cout << "\n\nCipher : " << text1;
	cout << "\nShift: " << s;
	cout << "\nText: " << result1;

    
}


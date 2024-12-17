#include<iostream>
using namespace std;
string reverseString(string name)
{
	string reverseoutput;
	for (int i = name.size(); i >= 0; i--)
	{
		reverseoutput = reverseoutput + name[i];
	}
	return reverseoutput;
}
int main()
{
	string name;
	cout << "Enter the Name : ";
	cin >> name;
	cout<< reverseString(name);
}
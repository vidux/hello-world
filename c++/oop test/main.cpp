#include <iostream>

using namespace std;

class Person
{

public:
	Person(string szName, int iYear)
	{
		m_szLastName = szName;
		m_iYearOfBirth = iYear;
	}

	string m_szLastName;
	int m_iYearOfBirth;
	void print()
	{
		cout << "Last name: " << m_szLastName << endl;
		cout << "Year of birth: " << m_iYearOfBirth << endl;
	}
protected:
	string m_szPhoneNumber;
};


//derived class
class Student:public Person
{
public:

	string m_szUniversity;

	Student( szName,  iYear, string szUniversity){
	m_szUniversity = szUniversity;
}

};









int main()
{


}

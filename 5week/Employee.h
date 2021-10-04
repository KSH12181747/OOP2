#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#pragma warning(disable:4996)
#include "Date.h"

class Employee
{
public:
	Employee(const char* const, const char* const, 
		const Date&, const Date&);

	void print() const;
	~Employee();
private:
	char firstName[25];
	char lastName[25];
	const Date birthDate;
	const Date hireDate;
};

#endif
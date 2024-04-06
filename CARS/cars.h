#pragma once
#include <iostream>
#include <stdio.h>
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

class cars
{
public:
	char carname[20];
	int milage;
	char type[20];
	char brand[20];
	char numberplate[20];
	int price;


public:
	void registercar();
	void showavailablebrands();
	
	void deletecar();
	void budgetprice();
	
};

class ev : private cars
{
public:
	int voltagebattery;
	int range;
	int horsepower;

public:
	void displayelectric();
	void displayhybrid();



};







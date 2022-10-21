// ****** cDate.cpp ******
#include "cDate.h"



cDate::cDate()
{
}


cDate::~cDate()
{
}

bool cDate::isAfterNow(int year, int month, int day, int hour, int min)
{
	time(&temp);
	timeinfo = localtime(&temp);

	int yearNow = 1900 + timeinfo->tm_year;
	int monthNow = 1 + timeinfo->tm_mon;
	int dayNow = timeinfo->tm_mday;
	int hourNow = timeinfo->tm_hour;
	int minNow = timeinfo->tm_min;
	
	// 시간 비교 구문 추가

	return true;
}

bool cDate::applyLeafYear(const int& year)
{
	// isLeafYear UPDATE
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
		this->isLeafYear = true;
	else
		this->isLeafYear = false;
	

	// Day/Month UPDATE
	int m[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	m[1] = isLeafYear ? 29 : 28;
	this->daysofMonth = m;
	
	if (isLeafYear)
		return true;
	else
		return false;
}

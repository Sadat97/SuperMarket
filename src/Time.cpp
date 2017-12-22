/*
 * Time.cpp
 *
 *  Created on: Dec 15, 2017
 *      Author: AmrMahmoud
 */
#include <iostream>
#include "../include/Time.h"


using namespace std;

Time::Time()
{
    time_t t = time(0);
    struct tm * now = localtime( & t );

    hour=now->tm_hour;
    if (hour>12)
    	hour-=12;
    minute=now->tm_min;
}

Time::Time(int h,int m){
	hour=h;
    if (hour>12)
    	hour-=12;	
	minute=m;
}


Time Time::operator+(Time &obj) {

		Time checkout;
		checkout.setMinute(obj.getMinute()+minute);

		while (checkout.getMinute() >= 60) {
			checkout.setMinute(checkout.getMinute()-60);
			checkout.setHour(1);
			if (checkout.getHour() > 12)
				checkout.setHour(checkout.getHour()-12);
		}

		checkout.setHour(obj.getHour()+hour);

	if (checkout.getHour() > 12)
		checkout.setHour(checkout.getHour()-12);

	return checkout;
}

void Time::setHour(int h){hour=h;}
void Time::setMinute(int m){minute=m;}

int Time::getHour(){return hour;}
int Time::getMinute(){return minute;}

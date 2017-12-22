/*
 * Time.h
 *
 *  Created on: Dec 15, 2017
 *      Author: AmrMahmoud
 */

#ifndef TIME_H_
#define TIME_H_

class Time {

private:
    int hour,minute;

public:
    Time(int,int);
    Time();
    Time operator +(Time &);
    void setHour(int);
    void setMinute (int);
    int getHour();
    int getMinute();

};



#endif /* TIME_H_ */

//#ifndef __FRIEND_H__
//#define __FRIEND_H__
//
//#include <iostream>
//using namespace std;
//
//class Time
//{
//	friend class Date;     //Date���еĳ�Ա�������Է���Time���˽�г�Ա����
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		:_hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//	friend ostream& operator<<(ostream& out, const Date& d);
//public:
//	/*ostream& operator<<(ostream& out)         //������friend,this��Զָ���һ�����󣬵��µڶ��������������������Ƿ��� ��d1<<cout��
//	{
//		out << _year << "-" << _month << "-" << _day;
//		return out;
//	}*/
//	void setTime(int hour, int minute, int second)
//	{
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//#endif //__FRIEND_H__
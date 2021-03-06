// EX03.cpp : Defines the entry point for the console application.
// The Fan class

#include "stdafx.h"
#include <iostream>
using namespace std;

class Fan
{
public:
	int speed;
	bool on;
	double radius;

	Fan()
	{
		speed = 1;
		on = false;
		radius = 5.0;
	}

	void setSpeed(int fast)
	{
		if ((on && fast >= 1) && fast <= 3)
			speed = fast;
	}

	void speedUp()
	{
		while (speed < 3)
			speed++;
	}

	void slowDown()
	{
		while (speed > 0)
			speed--;
	}

	void setRadius(double newRad)
	{
		if (newRad > 0)
			radius = newRad;
	}

	void turnOn()
	{
		on = true;
	}

	void turnOff()
	{
		on = false;
	}
};

int main()
{
	Fan f1;
	f1.setRadius(10);
	f1.setSpeed(3);
	f1.turnOn();

	Fan f2;
	f2.setRadius(5);
	f2.setSpeed(2);
	f2.turnOff();

	cout << "Fan 1: Speed = " << f1.speed << ", Radius = " << f1.radius << ", On? " << f1.on << endl;
	cout << "Fan 2: Speed = " << f2.speed << ", Radius = " << f2.radius << ", On? " << f2.on << endl;

    return 0;
}


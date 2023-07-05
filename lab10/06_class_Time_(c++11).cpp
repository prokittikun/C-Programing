#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

    int duration;

public:
    Time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;

        int hSecond = 3600 * hour;
        int mSecond = 60 * minute;
        int sSecond = second;
        this->duration = hSecond + mSecond + sSecond;
    }
    Time(int duration)
    {
        this->hour = (duration / 3600) % 24;
        this->minute = (duration % 3600) / 60;
        this->second = (duration % 3600) % 60;

        this->duration = duration;
    }
    int getHour()
    {
        return this->hour;
    }
    int getMinute()
    {
        return this->minute;
    }
    int getSecond()
    {
        return this->second;
    }
    void setHour(int hour)
    {
        this->hour = hour;
    }
    void setMinute(int minute)
    {
        this->minute = minute;
    }
    void setSecond(int second)
    {
        this->second = second;
    }

    Time add(Time other)
    {
        return Time(this->duration + other.getDuration());
    }
    int getDuration()
    {
        if (this->duration < 86400)
        {
            return this->duration;
        }
        else
        {
            return this->duration - 86400;
        }
    }
    int subtract(Time other)
    {
        int sub = this->duration - other.getDuration();
        if (sub < 0)
        {
            return 86400 + sub;
        }
        else
        {
            return sub;
        }
    }
    int equals(Time other)
    {
        if (this->duration == other.getDuration())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    string toString()
    {
        char buffer[50];
        sprintf(buffer, "%02d:%02d:%02d", this->hour, this->minute, this->second);
        return buffer;
    }
};

int main()
{
    Time t1(0, 0, 0);
    Time t2(1, 1, 1);
    Time t3(3661);
    Time t4(87000);
    Time t5(15, 45, 0);

    cout << Time(3599).toString() << endl;
    cout << t1.subtract(t2) << endl;
    cout << t2.subtract(t1) << endl;
    cout << t2.equals(t3) << endl;
    cout << t3.equals(t2) << endl;
    cout << t1.equals(t2) << endl;
    cout << t1.add(Time(1, 2, 3)).toString() << endl;
    cout << Time(12, 0, 0).add(Time(12, 10, 0)).toString() << endl;
    cout << t1.getDuration() << endl;
    cout << t2.getDuration() << endl;
    cout << t4.getDuration() << endl;
    cout << t1.toString() << endl;
    cout << t2.toString() << endl;
    cout << t3.toString() << endl;
    cout << t4.toString() << endl;
    cout << t5.toString() << endl;
}

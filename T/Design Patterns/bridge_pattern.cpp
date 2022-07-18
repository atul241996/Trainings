#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class TimeImp {
  public:
    TimeImp(int hr, int min) {
        hr_ = hr;
        min_ = min;
    }
    virtual void tell()=0;
  protected:
    int hr_, min_;
};

class CivilianTimeImp: public TimeImp {
  public:
    CivilianTimeImp(int hr, int min, int pm): TimeImp(hr, min) {
        if (pm)
          strcpy(whichM_, " PM");
        else
          strcpy(whichM_, " AM");
    }

    /* virtual */
    void tell() {
        cout << "time is " << hr_ << ":" << min_ << whichM_ << endl;
    }
  protected:
    char whichM_[4];
};

class ZuluTimeImp: public TimeImp {
  public:
    ZuluTimeImp(int hr, int min, int zone): TimeImp(hr, min) {
        if (zone == 5)
          strcpy(zone_, " Eastern Standard Time");
        else if (zone == 6)
          strcpy(zone_, " Central Standard Time");
    }

    /* virtual */
    void tell() {
        cout << "time is " << hr_ << min_ << zone_ <<endl;
    }
  protected:
    char zone_[30];
};


class Time {
  public:
    virtual void tell() {
        imp_->tell();
    }
  protected:
    TimeImp *imp_;
};


class CivilianTime: public Time {
  public:
    CivilianTime(int hr, int min, int pm) {
        imp_ = new CivilianTimeImp(hr, min, pm);
    }
};

class ZuluTime: public Time {
  public:
    ZuluTime(int hr, int min, int zone) {
        imp_ = new ZuluTimeImp(hr, min, zone);
    }
};

int main() {
  Time *times[2];
  times[0] = new CivilianTime(2, 30, 1);
  times[1] = new ZuluTime(14, 30, 6);
  for (int i = 0; i < 2; i++)
    times[i]->tell();
}
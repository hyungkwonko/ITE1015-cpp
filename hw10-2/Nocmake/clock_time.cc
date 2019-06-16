
#include "clock_time.h"

using namespace::std;

ClockTime::
ClockTime ()
: hour_(0),
  minute_(0),
  second_(0),
  secondsPerTick_(0),
  deltaTime_(0)
{
  recordStartTime();
}

ClockTime::
ClockTime (int hour, int minute, int second, int secondsPerTick)
: hour_(hour),
  minute_(minute),
  second_(second),
  secondsPerTick_(secondsPerTick),
  deltaTime_(0)
{
  recordStartTime();
}

void ClockTime::
reset ()
// The purpose of this method is to reset the time to the recorded
// start time.
{
  unsigned int temp = startTime_;

  hour_  = temp / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
  temp  -= hour_ * (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

  minute_  = temp / SECONDS_PER_MINUTE;
  temp    -= minute_* SECONDS_PER_MINUTE;

  second_ = temp;
}

void ClockTime::
increment ()
// The purpose of this method is to increment the clock time by the number
// of seconds by which the time is to advance per tick.
{
  deltaTime_ += secondsPerTick_;

  // Compute the new time in terms of seconds.
  int seconds = hour_   * MINUTES_PER_HOUR * SECONDS_PER_MINUTE +
                minute_ * SECONDS_PER_MINUTE                    +
                second_                                         + 
                secondsPerTick_;

  // If the new time is greater than the number of seconds in a day, adjust
  // the new time to reflect the number of seconds past midnight.
  if (seconds > (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE))
    seconds -= (HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

  hour_ = seconds  / (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);
  seconds -= hour_ * (MINUTES_PER_HOUR * SECONDS_PER_MINUTE);

  minute_ = seconds / SECONDS_PER_MINUTE;
  seconds -= minute_ * SECONDS_PER_MINUTE;

  second_ = seconds;
}

void ClockTime::
display () const
// The purpose of this method is to display the values stored in
// an instance of simulation time.
{
  cout << right << setw(2) << setfill('0') << hour_   << ":"
       << right << setw(2) << setfill('0') << minute_ << ":" 
       << right << setw(2) << setfill('0') << second_;
}

void ClockTime::       // Private method
recordStartTime ()
// The purpose of this method is to compute and record the start time.
{
  startTime_ = hour_   * MINUTES_PER_HOUR * SECONDS_PER_MINUTE +
               minute_ * SECONDS_PER_MINUTE                    +
               second_;
}

Clock::Clock(int hour, int minute, int second) { }
Clock::Clock(int hour, int minute, int second, double driftPerSecond) { }
Clock::~Clock() { }

void Clock::reset() {
    _clockTime.reset();
}

void Clock::tick() {
    _clockTime.setTime(_clockTime.hour(), _clockTime.minute(), _clockTime.second(), _tick);
    _clockTime.increment();
    _totalDrift = _driftPerSecond * _clockTime.deltaTime();
}

void Clock::setTick(int _tick) {
    this->_tick = _tick;
}

double Clock::getTotalDrift() {
    return _totalDrift;
}

NaturalClock::NaturalClock(int hour, int minute, int second) : Clock(hour, minute, second) { }

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second) { }

SundialClock::SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second) {
    _driftPerSecond = 0.0;
}

//

MechanicalClock::MechanicalClock(int hour, int minute, int second) : Clock(hour, minute, second) { }

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second) {
    _driftPerSecond = 0.0;
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second) {
    _driftPerSecond = 0.000694444;
}

//

DigitalClock::DigitalClock(int hour, int minute, int second) : Clock(hour, minute, second) { }

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

WristClock::WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second) {
    _driftPerSecond = 0.000347222;
}

//

QuantumClock::QuantumClock(int hour, int minute, int second) : Clock(hour, minute, second) { }

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) { }

AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second) {
    _driftPerSecond = 0.000034722;
}

//

void SundialClock::displayTime() {
    cout << getType() << ", ";
    _clockTime.display();
    cout << ", totalDrift: " << getTotalDrift() << endl;
}

void CuckooClock::displayTime() {
    cout << getType() << ", ";
    _clockTime.display();
    cout << ", totalDrift: " << getTotalDrift() << endl;
}
void GrandFatherClock::displayTime() {
    cout << getType() << ", ";
    _clockTime.display();
    cout << ", totalDrift: " << getTotalDrift() << endl;
}
void WristClock::displayTime() {
    cout << getType() << ", ";
    _clockTime.display();
    cout << ", totalDrift: " << getTotalDrift() << endl;
}
void AtomicClock::displayTime() {
    cout << getType() << ", ";
    _clockTime.display();
    cout << ", totalDrift: " << getTotalDrift() << endl;
}

string SundialClock::getType() {
    return "SundialClock";
}


string CuckooClock::getType() {
    return "CuckooClock";
}
string GrandFatherClock::getType() {
    return "GrandFatherClock";
}
string WristClock::getType() {
    return "WirstClock";
}
string AtomicClock::getType() {
    return "AtomicClock";
}

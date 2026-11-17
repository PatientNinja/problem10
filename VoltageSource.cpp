#include "VoltageSource.hpp"

double VoltageSource::get_voltage() const // Done
{ // returns Component value that is set through the voltageSource class definition, based on that component.
  return Component::get_value();
}
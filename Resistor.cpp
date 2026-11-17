#include "Resistor.hpp"
#include <stdexcept>

void Resistor::set_value(double r)
{ // This fxn overrides set_value for the resistor class.
  if (r < 0) // Checks an invalid resistance and throws
  {
    throw std::invalid_argument("Cannot define a negative resistance");
  }
  Component::set_value(r); // Sets component value
}

double Resistor::get_current() const
{
  double V = get_voltage(); // uses the nodal version of component to get voltage.
  double R = get_value(); // gets value from coponent NON-override
  double I = V / R; // Defines and calculates current through nodal analysis
  if (R == 0.0) // Checks invalid divisor and throws
  {
    throw std::logic_error("Cannot determine current with 0 resistance");
  }
  return I = V / R; // returns the current
}
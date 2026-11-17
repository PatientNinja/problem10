#include "CurrentSource.hpp"

double CurrentSource::get_current() const // Done
{ // returns Component value that is set through the CurrentSource class definition, based on that component.
  return Component::get_value();
}
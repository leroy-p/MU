#include "../includes/Card.hh"

// Constructor
Card::Card(Color color, int value)
{
  this->_color = color;
  this->_value = value;
}

// Destructor
Card::~Card()
{
  std::string color = convertColorToString((int)this->_color);
  std::cout << "Card " << color << "/" << this->_value + " destroyed.";
}

// Getters

Color Card::getColor() const
{
  return this->_color;
}

int Card::getValue() const
  return this->_value;
}

// Helpers

std::string convertColorToString(int color)
{
  std::string color;
  switch (color)
  {
    case RED:
      color = "red";
    case YELLOW:
      color = "yellow";
    case BLUE:
      color = "blue";
    case GREEN:
      color = "green";
    case BLACK:
      color = "black";
    default:
      color = "unknown";
  }
  return color;
}

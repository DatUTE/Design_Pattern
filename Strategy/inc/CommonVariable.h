#pragma once
#include <iostream>

/*!
 *  @brief Define Shape type 
 */
enum class ShapeType
{
    CIRCLE,
    SQUARE,
    RECTANGLE
};

// enumeration types (both scoped and unscoped) can have overloaded operators
std::ostream& operator<<(std::ostream& os, ShapeType c);
#ifndef INCLUDED_DEMPOINT_H
#define INCLUDED_DEMPOINT_H


#ifndef INCLUDED_DEMTYPES_H
#include "DEMTypes.h"
#endif

namespace USGSDEMLib
{
class DEMPoint
{
 public:
  DEMPoint(double x = 0.0, double y = 0.0);
     
  // Accessors
  double getX() const;
  double getY() const;
  void getXY(double& x, double& y) const;

  // Modifiers
  void setX(double x);
  void setY(double y);
  void setXY(double x, double y);
  bool operator<(DEMPoint const& rhs) const {return false;}
  bool operator==(DEMPoint const& rhs) const {return false;}

 private:
  double _x;
  double _y;
};

// Inline Methods for class DEMPoint

inline DEMPoint::DEMPoint(double x, double y)
{
  _x = x;
  _y = y;
}

inline double DEMPoint::getX() const
{
  return _x;
}

inline double DEMPoint::getY() const
{
  return _y;
}

inline void DEMPoint::getXY(double& x, double& y) const
{
  x = _x;
  y = _y;
}

inline void DEMPoint::setX(double x)
{
  _x = x;
}

inline void DEMPoint::setY(double y)
{
  _y = y;
}

inline void DEMPoint::setXY(double x, double y)
{
  _x = x;
  _y = y;
}



typedef std::vector<DEMPoint> DEMPointVector;

} // namespace USGSDEMLib

#endif  // INCLUDED_DEMPOINT_H

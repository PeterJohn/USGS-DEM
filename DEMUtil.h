#ifndef INCLUDED_DEMUTIL_H
#define INCLUDED_DEMUTIL_H


#include <string>
#include <iostream>

namespace USGSDEMLib
{

class DEMUtil
{
 public:
  
  static bool getRecord(std::istream& s, std::string& strbuf,
                        long reclength = 1024);
  // Reads a single record from a DEM. 
  // Returns true if succesful. Returns false if EOF or error.

  static bool getRecord(std::istream& s, char* buf, long reclength = 1024);
  // Same as getRecord above. buf should be at least reclength+1 in size.

  static long getLong(char* const strbuf,   // string to extract long from
                      long const startpos,  // starting position of field
                      long const width)     // width of field
  {
    char temp[1024];
    strncpy(temp, strbuf + startpos, width);
    temp[width] = '\0';
    return atol(temp);
  }

  static bool getDouble(std::string const& strbuf, // string to extract double
                                                   // from
                        long const startpos,  // starting position of field
                        long const width,     // width of field
                        double& val);         // value extracted from field.

 private:

  DEMUtil();
};

} // namespace USGSDEMLib

#endif  // INCLUDED_DEMUTIL_H

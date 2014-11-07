///////////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2007, 2010 Michael A. Jackson for BlueQuartz Software
//  All rights reserved.
//  BSD License: http://www.opensource.org/licenses/bsd-license.html
//
//  This code was written under United States Air Force Contract number
//                           F33615-03-C-5220
//
///////////////////////////////////////////////////////////////////////////////

#ifndef ZEISSDIRECTORYPATTERNS_H_
#define ZEISSDIRECTORYPATTERNS_H_

#include "DREAM3DLib/DREAM3DLib.h"
#include "DREAM3DLib/Common/DREAM3DSetGetMacros.h"

#include <string>

namespace Zeiss {
  namespace DirectoryPatterns {
    const std::string Dot (".");
    const std::string _Files("_Files");
    const  std::string _P ("_p");
    const std::string MetaXML("_meta.xml");
  }
}


/**
 *
 */
class ZeissDirectoryPatterns
{
  public:
    DREAM3D_SHARED_POINTERS(ZeissDirectoryPatterns)
    DREAM3D_TYPE_MACRO(ZeissDirectoryPatterns)
    DREAM3D_STATIC_NEW_MACRO(ZeissDirectoryPatterns)


    virtual ~ZeissDirectoryPatterns();

    DREAM3D_INSTANCE_STRING_PROPERTY(Prefix)
    DREAM3D_INSTANCE_STRING_PROPERTY(Suffix)
    DREAM3D_INSTANCE_STRING_PROPERTY(Extension)

    std::string generateZeissDirectory(int slice);
    std::string generateZeissDirectory(const std::string &slice);

    std::string generateZeissMetaXMLName(int slice);
    std::string generateZeissMetaXMLName(const std::string &slice);

    std::string generateZeissTileName(int slice, int numberWidth, int tileIndex);

    int parseDocumentName(const std::string &guessedPrefix,
                                  const std::string &zeissDocumentName);

    int extractSlice(const std::string &directoryName);

    void print(std::ostream &ostream);

protected:
    ZeissDirectoryPatterns();

  private:


    ZeissDirectoryPatterns(const ZeissDirectoryPatterns&);    // Copy Constructor Not Implemented
    void operator=(const ZeissDirectoryPatterns&);  // Operator '=' Not Implemented
};

#endif /* ZEISSDIRECTORYPATTERNS_H_ */
//
//  HttpResource.h
//  WifiESP8266SmartSwitch
//
//  Created by Sander van Woensel on 24-02-15.
//  Copyright (c) 2015 Sander van Woensel. All rights reserved.
//

#ifndef __ArduinoHttpServer__HttpResource__
#define __ArduinoHttpServer__HttpResource__

#include "Arduino.h"

namespace ArduinoHttpServer
{

//! The resource requested by a client.
class HttpResource
{

public:
    HttpResource(const String& resource);
    HttpResource();

    HttpResource& operator=(const HttpResource& other);

    bool isValid();
    String operator[](const int index) const;
    const String& toString() const;

private:
   static const char RESOURCE_SEPERATOR = '/';

   String m_resource;

};

}

#endif // defined(__ArduinoHttpServer__HttpResource__)
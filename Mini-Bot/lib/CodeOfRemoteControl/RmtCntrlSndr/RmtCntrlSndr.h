#ifndef RemoteControl_h
#define RemoteControl_h

#include "../Util/Util.h"
#include <esp_now.h>
#include <WiFi.h>

class RemoteControl
{
private:
    typedef struct struct_message;
    static void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status);

public:
    static void setup();
    static void loop();
    static void sendData(short speed, short turnLeft, short turnRight);
};

#endif
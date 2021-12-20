/**
 *
 *  Super easy to use Somfy RTS blind controller library example
 *  MQTT subscription example included
 *
 */

#include <ESP8266WiFi.h>
#include <Somfy.h>

#define RF_SENDER 15 // this is where you connected the RF sender data pin

const bool TEST = 0;
const int MAXTRIES = 5; // how many times should we try to reconnent to host

Somfy somfy(RF_SENDER, 0xFFFFFFFB); // initial remote id - change this one,  it will be incremented for remotes added afterwards
                                    //Somfy somfy(0xFFFFFFFB, RF_SENDER); // initial remote id - change this one,  it will be incremented for remotes added afterwards

void setup()
{

  Serial.begin(115200);
  Serial.flush();
}

void loop()
{
  if (Serial.available() > 0)
  {

    String string = Serial.readStringUntil('\n');
  }
}
//   if (string == "setup")
//   {
//     Serial.println("Entrei setup");
//     // somfy.ClearRemotes();

//     somfy.AddRemote("AAAA");
//     // usage: send an MQTT message "[name of blind]+somfyCommand[U|D|S|P]", e.g. "officeU"
//     // you can add more remotes
//     somfy.AddRemote("BBBB");
//     somfy.AddRemote("CCCC");
//     somfy.AddRemote("DDDD");
//     somfy.AddRemote("EEEE");
//     somfy.Setup();
//   }
//   else
//   {
//     somfy.ProcessMessageAndExecuteCommand((char *)string.c_str());
//   }
// }
// }

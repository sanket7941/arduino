#include "LiquidCrystal_I2C.h"
#include <Wire.h>
#include "Arduino.h"
#include "RTClib.h"
#include <avr/pgmspace.h>
int h;
LiquidCrystal_I2C lcd(0x27,16,2);
const int switchPin = 3;     // the number of the switch pin
int switchState = 0;         // variable for reading the switch status
RTC_DS1307 rtc;

void setup()
{
  lcd.init();                  // this is necessary
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
Wire.begin();
Serial.begin(9600);
rtc.begin();
 // Check if the RTC is running.
  if (! rtc.isrunning()) {
    Serial.println("RTC is NOT running");
    pinMode(switchPin, INPUT);
  }

  // This section grabs the current datetime and compares it to
  // the compilation time.  If necessary, the RTC is updated.
  DateTime now = rtc.now();
  DateTime compiled = DateTime(__DATE__, __TIME__);
  if (now.unixtime() < compiled.unixtime()) {
    Serial.println("RTC is older than compile time! Updating");
    rtc.adjust(DateTime(__DATE__, __TIME__));
    
pinMode(switchPin, INPUT);
}
}


void loop()
{
DateTime now = rtc.now();
int h = now.hour()+1;
lcd.setCursor(0,0);
switchState = digitalRead(switchPin);
int m = now.minute();
if (switchState == HIGH)      
{ h = h;}
if (switchState == LOW)
{ h = h-1;}
//  start LCD hour print routine
if (h==1)
{lcd.print("      One     ");}
if (h==2)
{lcd.print("      Two     ");}
if (h==3)
{lcd.print("     Three    ");}
if (h==4)
{lcd.print("      Four    ");}
if (h==5)
{lcd.print("      Five    ");}
if (h==6)
{lcd.print("      Six     ");}
if (h==7)
{lcd.print("     Seven    ");}
if (h==8)
{lcd.print("     Eight    ");}
if (h==9)
{lcd.print("      Nine    ");}
if (h==10)
{lcd.print("      Ten     ");}
if (h==11)
{lcd.print("     Eleven   ");}
if (h==12)
{lcd.print("     Twelve   ");}
if (h==13)
{lcd.print("      One     ");}
if (h==14)
{lcd.print("      Two     ");}
if (h==15)
{lcd.print("     Three    ");}
if (h==16)
{lcd.print("      Four    ");}
if (h==17)
{lcd.print("      Five    ");}
if (h==18)
{lcd.print("      Six     ");}
if (h==19)
{lcd.print("     Seven    ");}
if (h==20)
{lcd.print("     Eight    ");}
if (h==21)
{lcd.print("      Nine    ");}
if (h==22)
{lcd.print("      Ten     ");}
if (h==23)
{lcd.print("     Eleven   ");}
if (h==0)
{lcd.print("     Twelve   ");}

//start LCD minute print routine
lcd.setCursor(0,1);
if (m==0)
{lcd.print("    O'Clock     ");}
if (m==1)
{lcd.print("     Oh One     ");}
if (m==2)
{lcd.print("     Oh Two     ");}
if (m==3)
{lcd.print("    Oh Three    ");}
if (m==4)
{lcd.print("     Oh Four    ");}
if (m==5)
{lcd.print("     Oh Five    ");}
if (m==6)
{lcd.print("     Oh Six     ");}
if (m==7)
{lcd.print("    Oh Seven    ");}
if (m==8)
{lcd.print("    Oh Eight    ");}
if (m==9)
{lcd.print("     Oh Nine    ");}
if (m==10)
{lcd.print("      Ten       ");}
if (m==11)
{lcd.print("     Eleven     ");}
if (m==12)
{lcd.print("     Twelve     ");}
if (m==13)
{lcd.print("    Thirteen    ");}
if (m==14)
{lcd.print("    Fourteen    ");}
if (m==15)
{lcd.print("    Fifteen     ");}
if (m==16)
{lcd.print("    Sixteen     ");}
if (m==17)
{lcd.print("    Seventeen   ");}
if (m==18)
{lcd.print("    Eighteen    ");}
if (m==19)
{lcd.print("    Nineteen    ");}
if (m==20)
{lcd.print("     Twenty     ");}
if (m==21)
{lcd.print("   Twenty-one   ");}
if (m==22)
{lcd.print("   Twenty-two   ");}
if (m==23)
{lcd.print("  Twenty-three  ");}
if (m==24)
{lcd.print("  Twenty-four   ");}
if (m==25)
{lcd.print("  Twenty-five   ");}
if (m==26)
{lcd.print("   Twenty-six   ");}
if (m==27)
{lcd.print("  Twenty-seven  ");}
if (m==28)
{lcd.print("  Twenty-eight  ");}
if (m==29)
{lcd.print("  Twenty-nine   ");}
if (m==30)
{lcd.print("     Thirty     ");}
if (m==31)
{lcd.print("   Thirty-one   ");}
if (m==32)
{lcd.print("   Thirty-two   ");}
if (m==33)
{lcd.print("  Thirty-three  ");}
if (m==34)
{lcd.print("  Thirty-four   ");}
if (m==35)
{lcd.print("  Thirty-five   ");}
if (m==36)
{lcd.print("   Thirty-six   ");}
if (m==37)
{lcd.print("  Thirty-seven  ");}
if (m==38)
{lcd.print("  Thirty-eight  ");}
if (m==39)
{lcd.print("  Thirty-nine   ");}
if (m==40)
{lcd.print("     Forty      ");}
if (m==41)
{lcd.print("   Forty-one    ");}
if (m==42)
{lcd.print("   Forty-two    ");}
if (m==43)
{lcd.print("   Forty-three  ");}
if (m==44)
{lcd.print("   Forty-four   ");}
if (m==45)
{lcd.print("   Forty-five   ");}
if (m==46)
{lcd.print("   Forty-six    ");}
if (m==47)
{lcd.print("   Forty-seven  ");}
if (m==48)
{lcd.print("   Forty-eight  ");}
if (m==49)
{lcd.print("   Forty-nine   ");}
if (m==50)
{lcd.print("     Fifty      ");}
if (m==51)
{lcd.print("   Fifty-one    ");}
if (m==52)
{lcd.print("   Fifty-two    ");}
if (m==53)
{lcd.print("   Fifty-three  ");}
if (m==54)
{lcd.print("   Fifty-four   ");}
if (m==55)
{lcd.print("   Fifty-five   ");}
if (m==56)
{lcd.print("   Fifty-six    ");}
if (m==57)
{lcd.print("   Fifty-seven  ");}
if (m==58)
{lcd.print("   Fifty-eight  ");}
if (m==59)
{lcd.print("   Fifty-nine   ");}
if (h < 12){
lcd.setCursor(14,0);
 lcd.print("AM");}
else{
lcd.setCursor(14,0);
 lcd.print("PM");}    

}





//Bluetooth 2 Relay Control byFat1h

#include <SoftwareSerial.h>
SoftwareSerial bluetoothModulu(0,1);
int role = 8;
int role2 = 9;
void setup() {
Serial.begin(9600);
pinMode(role, OUTPUT);
pinMode(role2, OUTPUT);
}
void loop() {
char ch = Serial.read();
if(ch > 0)
{
switch (ch)
{
case 'a':
digitalWrite(role, HIGH);
break;
case 'b':
digitalWrite(role, LOW);
break;
case 'c':
digitalWrite(role2, HIGH);
break;
case 'd':
digitalWrite(role2, LOW);
break;
}
}
}
//byFat1h

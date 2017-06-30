int outPin = 5;
int outPin2 = 6;
int outPin4 = 10;
int outPin3 = 11;
void setup()
{
Serial.begin(9600); // setup serial
pinMode(outPin, OUTPUT);
pinMode(outPin2, OUTPUT);
pinMode(outPin3, OUTPUT);
pinMode(outPin4, OUTPUT);
}
void loop()
{ 
delay(3000); 
analogWrite(outPin, 50);
digitalWrite(outPin2, LOW);
analogWrite(outPin3, 50);
digitalWrite(outPin4, LOW);
Serial.print(" ");
Serial.print("slow");
delay(3000); 
analogWrite(outPin, 150);
digitalWrite(outPin2, LOW);
analogWrite(outPin3, 150);
digitalWrite(outPin4, LOW);
Serial.print(" ");
Serial.print("med");
delay(3000); 
analogWrite(outPin, 255);
digitalWrite(outPin2, LOW);
analogWrite(outPin3, 255);
digitalWrite(outPin4, LOW);
Serial.print(" ");
Serial.print("fast");
delay(3000); 
analogWrite(outPin, 0);
digitalWrite(outPin2, LOW);
analogWrite(outPin3, 0);
digitalWrite(outPin4, LOW);
Serial.print(" ");
Serial.print("stop");
delay(3000); 
analogWrite(outPin2, 100);
digitalWrite(outPin, LOW);
analogWrite(outPin4, 100);
digitalWrite(outPin3, LOW);
Serial.print(" ");
Serial.print("backwards");
delay(3000); 
analogWrite(outPin, 0);
digitalWrite(outPin2, LOW);
analogWrite(outPin3, 0);
digitalWrite(outPin4, LOW);
Serial.print(" ");
Serial.print("stop");
}

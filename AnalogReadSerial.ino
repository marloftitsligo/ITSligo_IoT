/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
  
   modified 27 Jan 2021
   by Jessica Henry


  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

const int ledPin =  13; //where the led is on in arduino
// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  
while  (Serial.println(sensorValue) >= 500) {
  digitalWrite(ledPin, HIGH);       // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(ledPin, LOW);        // turn the LED off by making the voltage LOW
  delay(500);  
    }
}

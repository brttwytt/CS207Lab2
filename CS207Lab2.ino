/*
  Morse Code

  Turns an LED on and off in various patterns to create the Morse Code "SOS"

  On the Arduino Uno, a jumper wire is connected from pin 10 to the breadboard
  One LED is added to the breadboard in circuit with that cable
  A 560ohm resistor is added to the circuit
  A jumper cable connects the resistor to ground on the breadboard
  A jumper cable connects ground on the breadboard to ground on the arduino
  
  September 27, 2017

  Modified from "Blink" source code
  by Brett Wyatt

  http://www.arduino.cc/en/Tutorial/Blink
*/

int led = 10;    // LED runs though pin 10
int uTime = 240; //240 milliseconds  = one unit of time

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  // First letter S = three dots (or dits)
  digitalWrite(led, HIGH); //LED turns on HIGH
  delay (uTime);           //LED is bright for 240 milliseconds (one dot)
  digitalWrite(led, LOW);  //LED turns off
  delay (uTime);           //LED is off for 240 milliseconds
  digitalWrite(led, HIGH);
  delay (uTime);  
  digitalWrite(led, LOW);
  delay (uTime);
  digitalWrite (led, HIGH);
  delay (uTime);
  digitalWrite(led, LOW);
  delay(uTime*3);          //three units of time = break between letters

  // Second letter O = three dashes (or dahs)
  digitalWrite(led, HIGH);
  delay (uTime*3);         //LED is bright for 3*240 milliseconds (one dash)
  digitalWrite(led, LOW);
  delay (uTime);  
  digitalWrite(led, HIGH);
  delay (uTime*3);  
  digitalWrite(led, LOW);
  delay (uTime);
  digitalWrite (led, HIGH);
  delay (uTime*3);
  digitalWrite(led, LOW);
  delay(uTime*3);

  //Third letter S = three dots (or dits)
  digitalWrite(led, HIGH);
  delay (uTime);
  digitalWrite(led, LOW);
  delay (uTime);  
  digitalWrite(led, HIGH);
  delay (uTime);  
  digitalWrite(led, LOW);
  delay (uTime);
  digitalWrite (led, HIGH);
  delay (uTime);
  digitalWrite(led, LOW);
  delay(uTime*7);          //seven units of time  = break between words
  
}

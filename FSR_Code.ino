/*Developed by Anas Ahmed
  Hackerspace Karachi

  Whatsapp: +92-332-3265201
  Email: anas.ahm5@gmail.com
*/

int sensorPin = A0;    // select the input pin for the FSR
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // Decalaring SERIAL MONITOR things to See the Values of FSR in Arduino
  // by clicking on the MAGNIFIER ICON at the Top-Right corner and Setting the Baudrate at 9600
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);

  //for printing the Value on Serial Monitor
  Serial.print("FSR Value = ");
  Serial.println(sensorValue);

  //a safe delay of 10ms to get the stable values
  delay(10);
}

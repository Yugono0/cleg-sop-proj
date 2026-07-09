const int ledPin = 13;       // LED of the OEM component is connected to digital pin 13
const int OEMSensor = A0;  // the OEM Component is connected to analog pin 0
const int threshold = 100;   // threshold value to decide if the OEM Component is pressed or not


// these variables will change:
int sensorReading = 0;  // variable to store the value read from the sensor pin
bool ledState1   // variable used to store the last LED status, to toggle the light in the oem
void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
bool OEMPressed(bool opsSensor){
  // read the sensor and store it in the variable sensorReading:
  sensorReading=analogRead(OEMSensor)

  if(bool ops sensor== true){
if(sensorReading >=threshold){
  ledState = !ledState; // toggle the status of the ledPin:
  Serial.println("unblocked");// to display unblocked optical sensor message
  return true;
}else{
  return false
}
}
}
//testing 
void loop(){
  if(OEMComponentPressed(true))
}
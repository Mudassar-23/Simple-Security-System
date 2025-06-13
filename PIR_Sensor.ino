
#define SENSOR_PIN 2
#define LED_PIN 8

void setup() {
  Serial.begin(9600);
  pinMode(SENSOR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

}
void loop() 
{
  int sensorValue = digitalRead(SENSOR_PIN);
  
  if (sensorValue)
  {
    digitalWrite(LED_PIN, HIGH);  
    Serial.println("Motion Detected");
  }
  else 
  {
     digitalWrite(LED_PIN, LOW); 
     Serial.println("Motion not Detected");   
  }
delay(500);
 
} 
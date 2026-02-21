 
#define BLYNK_TEMPLATE_ID "TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Rain Water Detection "
#define BLYNK_AUTH_TOKEN "BLYNK_AUTH_TOKEN"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h>
char ssid[] = "WiFi Name";
char pass[] = "Password";
#define RAIN_SENSOR 34
#define SERVO_PIN 18
Servo myServo;
BlynkTimer timer;
void sendSensor()
{
  int rainValue = analogRead(RAIN_SENSOR);
  Serial.println(rainValue);

  Blynk.virtualWrite(V2, rainValue);

  if (rainValue < 2000) {
    myServo.write(90);// Close window
    Blynk.virtualWrite(V0, 1);
  } else {
    myServo.write(0);   // Open window
    Blynk.virtualWrite(V0, 0);
  }
}
void setup()
{
  Serial.begin(115200);
  myServo.attach(SERVO_PIN);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}

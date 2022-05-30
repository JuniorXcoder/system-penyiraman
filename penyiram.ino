 
/* Program Membuat Alarm Jam Digital Dengan Modul RTC dibuat oleh Indobot */

#include <DS3231.h>; 
DS3231  rtc(SDA, SCL); // inisialisasi penggunaan i2c

Time t; //Variabel t tampat menyimpan waktu
int set_jam = 13;     //Set alarm jam
int set_menit = 43;   //Set alarm menit
int set_jamb = 8;     //Set alarm jam
int set_menitb = 00;   //Set alarm menit
int sensor = A0;
int sensorValue;
int pump = 16;
int limit = 00;
void setup()
{
  Serial.begin(9600);
  rtc.begin();
  
  //setting pertama download program
//  rtc.setDate(28, 05, 2022);
//  rtc.setTime(13, 29, 00);
//  rtc.setDOW(6);
  pinMode(pump, OUTPUT);
  pinMode(sensor, INPUT);
}
 
void loop()
{
            sensorValue = analogRead(sensor); 
  Serial.println("Analog Value : "); 
  Serial.println(sensorValue);
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  
  Serial.print(rtc.getDateStr());
  Serial.print(" -- ");
  
  Serial.println(rtc.getTimeStr());
  
  t = rtc.getTime();
  int jam = t.hour;
  int menit = t.min;
  int detik = t.sec;
  
  if(set_jam == jam){
    if(set_menit == menit){
      if(detik = 05){
          sensorValue = analogRead(sensor); 
          Serial.print("Siram 1");
          alarm();
          delay(1000);
          Serial.print("Siram 2");
          sensorValue = analogRead(sensor); 
          alarm();
          delay(1000);
          Serial.print("Siram 3");
          sensorValue = analogRead(sensor); 
          alarm();
          delay(1000);
          Serial.print("Siram 4");
          sensorValue = analogRead(sensor); 
          alarm();
          delay(1000);
          Serial.print("Siram 5");
          sensorValue = analogRead(sensor); 
          alarm();
        }
    }
  }
  if(set_jamb == jam){
    if(set_menitb == menit){
      if(detik = 05){
          sensorValue = analogRead(sensor); 
          Serial.print("Siram 1");
          alarm();
          delay(1000);
          Serial.print("Siram 2");
          sensorValue = analogRead(sensor); 
          alarm();
          delay(1000);
          Serial.print("Siram 3");
          sensorValue = analogRead(sensor); 
          alarm();
          delay(1000);
          Serial.print("Siram 4");
          sensorValue = analogRead(sensor); 
          alarm();
          delay(1000);
          Serial.print("Siram 5");
          sensorValue = analogRead(sensor); 
          alarm();
        }
    }
  }
  delay (1000);
}

void alarm(){
if (sensorValue>limit) {
    digitalWrite(pump, HIGH);
    delay(10000);
}
else {
    digitalWrite(pump, LOW);
 }
}

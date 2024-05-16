#define BLYNK_TEMPLATE_ID "TMPL3DvZqA_Kq"
#define BLYNK_TEMPLATE_NAME "control led"
#define BLYNK_AUTH_TOKEN "7ytUB2nHZwGkfRzHNWj_nvuuStvyVUfa"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>  
#include <BlynkSimpleEsp8266.h>
 

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Balaji PG 1nd floor _5G";  // Enter your Wifi Username
char pass[] = "Balaji@750";  // Enter your Wifi password

int ledpin = D4;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  Blynk.run(); 
}

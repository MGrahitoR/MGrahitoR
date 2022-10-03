#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial BT(8, 9); // pin RX | TX
int LED=10;
int data;
void setup() {
  pinMode(LED,HIGH);
  digitalWrite(LED,LOW);
    BT.begin(9600); //Baudrateb module bluetooth
    BT.println("LED START");
  // put your setup code here, to run once:
}

void loop() {
  if(BT.available() > 0)  
  {
    data = BT.read();BT.print(data);    //Pembacaan dan ditampilkan data yang masuk   
    BT.print("\n"); 
    //Data yang masuk      
    if(data == '1'){
    digitalWrite(LED, HIGH);//diberikan waktu tunda 1 detik
    }
    else if(data == '0'){     
    digitalWrite(LED, LOW);  
  }                           
  // put your main code here, to run repeatedly:
}}
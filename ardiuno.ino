#include <SoftwareSerial.h>

SoftwareSerial blue(2,3); // bluetooth module connected here 

int Vresistor = A0; 
int Vdata = 0; 

void setup(){ 
  
   pinMode(Vresistor, INPUT); 
   Serial.begin(9600); 
   blue.begin(9600); 
   
} 
void loop(){ 
   // read the value at analog input 
   Vdata = analogRead(Vresistor); 

blue.print("Variable Resistor: "); 
blue.println(Vdata);
blue.println("Electronic Clinic"); 
blue.println("________________");

delay(1000); 
}

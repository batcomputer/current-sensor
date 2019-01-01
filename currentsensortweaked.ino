
const int analogPin = A0;
int mVperAmp = 740; // use 100 for 20A Module and 66 for 30A Module
int RawValue= 0;
int ACSoffset = 2500; 
double Voltage = 0;
double Amps = 0;

void setup(){ 
 Serial.begin(9600);
}

void loop(){
 
 RawValue = analogRead(analogPin);
 Voltage = (RawValue / 1024.0) * 5000; 
 Amps = ((Voltage - ACSoffset) / mVperAmp);
 
 
 Serial.print("Raw Value = " ); 
 Serial.print(RawValue); 

 Serial.print("\t Amps = "); 
 Serial.println(Amps,3);  
 delay(2500); 
 
}

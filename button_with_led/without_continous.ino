#define pin 7
void setup() {
 
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(pin,INPUT);  //PIN NO 7

}

void loop() {
  if(digitalRead(pin)==HIGH){
     digitalWrite(LED_BUILTIN,HIGH);
 
  }
  else{
  digitalWrite(LED_BUILTIN,LOW);}
  
  // put your main code here, to run repeatedly:

}

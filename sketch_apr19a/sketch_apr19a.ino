char inputByte;
void setup() {
 Serial.begin(9600);
 pinMode(LED_BUILTIN,OUTPUT);

}

void loop() {
while(Serial.available()>0){
  inputByte= Serial.read();
  Serial.println(inputByte);
  if (inputByte=='Z'){
  digitalWrite(LED_BUILTIN,HIGH);
  }
  else if (inputByte=='z'){
  digitalWrite(LED_BUILTIN,LOW);
  } 
  }
}

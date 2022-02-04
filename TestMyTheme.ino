//A comment
/* Another comment */

#define pi 3.141592  //constant

int  led = 0x0d; //hexadecimal
unsigned long  Now = 0; //decimal
float i = 1.0; //decimal
char c = 'd'; //char
String s = "Hello, World!"; //string
boolean b = true; //boolean

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

  if(b == true){
    Serial.println(s);
  }
}

void loop() {
  if(((millis() - Now) > 1000)){
    Now = millis();
    Serial.println(millis() / 1000);
    digitalWrite(led, !digitalRead(led));   
  }
}

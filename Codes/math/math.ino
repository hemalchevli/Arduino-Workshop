int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
float f = 0;
void setup() {
 Serial.begin(9600);
 a=5;
 b=10;
 c = a+b;
 d = a-b;
 e = a*b;
 f = (float)a/(float)b;
 Serial.println(a);
 Serial.println(b);
 Serial.println(c);
 Serial.println(d);
 Serial.println(e);
 Serial.println(f);
 

}

void loop() {
  // put your main code here, to run repeatedly: 
  
}

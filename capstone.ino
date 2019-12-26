int pin1=2;
int pin2=3;
int pin3=4;
int pin4=5;
int en1=9;     // motor 1
int en2=10;    // motor 2
// variables decleration 
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  
  //Start Serial Monitor
  
  Serial.begin(9600);

}
void on ()
{
  analogWrite(en1,200);
  analogWrite(en2,200);
  digitalWrite(pin1,0);
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(1000); // rotating arm works at maximum speed for 5 minutes 
  analogWrite(en1,150);
  analogWrite(en2,150);
  digitalWrite(pin1,0);
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(1000); // rotating arm works at averge speed for 5 minutes 
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(pin1,0);
  digitalWrite(pin2,1);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(1000);// rotating arm works at lowest speed for 5 minutes 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin3,1);
  digitalWrite(pin4,0);
  delay(3000);// the water pump works 
  digitalWrite(pin3,1);
  digitalWrite(pin4,0);
  analogWrite(en1,200);
  analogWrite(en2,200);
  delay(3000);// the water pump stops 
   digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,0);
  analogWrite(en2,0);
  delay(3000);
  digitalWrite(pin3,1);
  digitalWrite(pin4,0);
  analogWrite(en1,200);
  analogWrite(en2,200);
  delay(3000);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,0);
  analogWrite(en2,0);
  delay(3000);
  digitalWrite(pin3,1);
  digitalWrite(pin4,0);
  analogWrite(en1,200);
  analogWrite(en2,200);
  delay(3000);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,0);
  analogWrite(en2,0);
  delay(3000);
  }
  void off (){
    analogWrite(en1,200);
  analogWrite(en2,200);
  digitalWrite(pin1,0);
  digitalWrite(pin2,0);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(1000); // rotating arm works at maximum speed for 5 minutes 
  analogWrite(en1,150);
  analogWrite(en2,150);
  digitalWrite(pin1,0);
  digitalWrite(pin2,0);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(1000); // rotating arm works at averge speed for 5 minutes 
  analogWrite(en1,100);
  analogWrite(en2,100);
  digitalWrite(pin1,0);
  digitalWrite(pin2,0);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(1000);// rotating arm works at lowest speed for 5 minutes 
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  delay(3000);// the water pump works 
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,200);
  analogWrite(en2,200);
  delay(3000);// the water pump stops 
   digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,0);
  analogWrite(en2,0);
  delay(3000);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,200);
  analogWrite(en2,200);
  delay(3000);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,0);
  analogWrite(en2,0);
  delay(3000);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,200);
  analogWrite(en2,200);
  delay(3000);
  digitalWrite(pin3,0);
  digitalWrite(pin4,0);
  analogWrite(en1,0);
  analogWrite(en2,0);
  delay(3000);
    }
void loop(){
  
  if(Serial.available()>0)
   {      
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'F': {on();} 
        case 'B': {off();} 
       
      
      Serial.println(data);
   }
   delay(50);
  
  }
}

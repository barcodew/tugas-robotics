int N1 =12;
int N2 =11;
int N3 =10;
int N4 =9;
int ENA =13;
int ENB =8;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);

}

void loop() {
  Maju(255);
  delay(5000);
  Mundur(255);
  delay(5000);
  Stop(255);
  delay(5000);
  belokKiri(255);
  delay(5000);
  belokKanan(255);
  delay(5000);
  putarKanan(255);
  delay(5000);
  putarKiri(255);
  delay(5000);

}

void Maju(int speed){
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void Mundur(int speed){
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}
void Stop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}

void belokKiri(){
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}
void belokKanan(int speed){
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}
void putarKanan(int speed){
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);  
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}
void putarKiri(int speed){
  analogWrite(ENA,speed);
  analogWrite(ENB,speed);  
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}


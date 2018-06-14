int sensorPin = A1;
int state = 0;

void setup() {
  // put yor setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin,INPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  state = analogRead(sensorPin);
  Serial.println(state);
  
 if (state>400) {
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    delay(1000);
  } else {
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
  }
    delay(100);
}

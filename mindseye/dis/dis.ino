const int trigPin = 5;

const int echoPin = 4;

const int buzzer = 2;

long duration;

int distance;

int safetyDistance;

void setup() {

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(buzzer, OUTPUT); Serial.begin(9600);

} void loop() {

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;

safetyDistance = distance; if (safetyDistance <= 5){

digitalWrite(buzzer, HIGH);

}

else{

digitalWrite(buzzer, LOW);

;}

Serial.print("Distance: ");

Serial.println(distance);

}

const int redPin = 2;   
const int yellowPin = 3; 
const int greenPin = 4;  

void setup() {
  
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);


  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, LOW);


  Serial.begin(9600);
}

void loop() {
  
  
  Serial.println("Stop");
  delay(15000);

  
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH);
  Serial.println("Wait");
  delay(15000); 

  // Green Light
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH);
  Serial.println("Go");
  delay(15000); 

  // Yellow Light (
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  Serial.println("Wait");
  delay(15000); 
}

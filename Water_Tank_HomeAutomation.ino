
int upLow = D0;
int upHigh = D1;
int downLow = D2;
int downHigh = D3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(D1, INPUT_PULLUP);
  Serial.println("Start");
}

void loop() {
  int data = digitalRead(D1);  
  Serial.println(data);
  delay(1000);
}

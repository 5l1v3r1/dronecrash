
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  uint16_t val = analogRead(0);
  Serial.println(val,DEC);
  val = map(val, 0, 2013, 0, 255);
  analogWrite(3, val);
  analogWrite(5, val);
}

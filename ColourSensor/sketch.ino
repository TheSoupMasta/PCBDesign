void setup() {
  pinMode(A7, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int counts = 0;
  for (int i=0; i<100; i++) {
    counts += analogRead(A7);
  }
  Serial.println(counts/100);
}

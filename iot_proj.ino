
AdafruitIO_Feed *counter = io.feed("counter");
#define ledPin D7 
#define pirPin D1 
int pirValue; 
int motionDetected = 0;

void setup() {

  Serial.begin(115200);

  while(! Serial);

  Serial.print("link");


  io.connect();

 
  while(io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  digitalWrite(ledPin, LOW);

  // we are connected
  Serial.println();
  Serial.println(io.statusText());

}

void loop() {


  io.run();

 
  getPirValue();
  Serial.print("sending -> ");
  if(getPirValue())
    counter->save("T==> Motion detected");

  delay(3000);

}

int getPirValue(void)
{
  pirValue = digitalRead(pirPin);
  
  digitalWrite(ledPin, pirValue);
  return pirValue;
}

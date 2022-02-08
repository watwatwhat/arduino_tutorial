int car_led[] = {11, 9, 7};
//G:11
//Y:9
//R:7
int ped_led[] = {5, 3};
//G:5
//R:3

void setup() {
  // put your setup code here, to run once:
  for(auto i : car_led){
    pinMode(i,OUTPUT);
  }
  for(auto i : ped_led){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(car_led[0],HIGH);
  digitalWrite(ped_led[1],HIGH);
  delay(5000);
  digitalWrite(car_led[0],LOW);
  
  digitalWrite(car_led[1],HIGH);
  delay(1000);
  digitalWrite(car_led[1],LOW);
  
  digitalWrite(car_led[2],HIGH);
  digitalWrite(ped_led[1],LOW);
  digitalWrite(ped_led[0],HIGH);
  delay(3000);
  for(int i=0;i<10;i++){
    digitalWrite(ped_led[0],LOW);
    delay(100);
    digitalWrite(ped_led[0],HIGH);
    delay(100);
  }
  digitalWrite(ped_led[0],LOW);
  digitalWrite(car_led[2],LOW);
}

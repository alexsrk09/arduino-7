void setup() {
  pinMode(2,INPUT);        //      right
  pinMode(5,INPUT);        //      left
  
  pinMode(6,OUTPUT);       //             up
  pinMode(13,OUTPUT);       //     up/left
  pinMode(12,OUTPUT);       //left
  pinMode(11,OUTPUT);       //    down/left
  pinMode(10,OUTPUT);      //            down
  pinMode(7,OUTPUT);      //                 down/right
  pinMode(8,OUTPUT);      //                         right
  pinMode(9,OUTPUT);      //                   up/right
}
int a=6;
void loop() {
  for(int i=6;a<=13;i++)digitalWrite(i,0);
  if(digitalRead(2)==1){
    if(a==13)a==6;
    else a++;
  }
  if(digitalRead(5)==1){
    if(a==6)a==13;
    else a--;
  }
  digitalWrite(a,1);
}

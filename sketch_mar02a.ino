int a[10][7] {{1,1,1,1,1,1,0},
                {0,1,1,0,0,0,0},
                {1,1,0,1,1,0,1},
                {1,1,1,1,0,0,1},
                {0,1,1,0,0,1,1},
                {1,0,1,1,0,1,1},
                {0,0,1,1,1,1,1},
                {1,1,1,0,0,1,0},
                {1,1,1,1,1,1,1},
                {1,1,1,1,0,1,1}};     
   void setup() {
  // put your setup code here, to run once:
           
  for(int i=2; i<12; i++)
    pinMode (i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);
  for(int j=0;j<10;j++)
  {for(int i=2;i<9;i++)
    digitalWrite(i,a[j][i-2]);
    delay(1000);}
}

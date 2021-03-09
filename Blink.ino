int a[10][7]   {{1,1,1,1,1,1,0},
                {0,1,1,0,0,0,0},
                {1,1,0,1,1,0,1},
                {1,1,1,1,0,0,1},
                {0,1,1,0,0,1,1},
                {1,0,1,1,0,1,1},
                {0,0,1,1,1,1,1},
                {1,1,1,0,0,1,0},
                {1,1,1,1,1,1,1},
                {1,1,1,1,0,1,1}};    

float c;

int b[4][4]={{1,0,0,0},
             {0,1,0,0},
             {0,0,1,0},
             {0,0,0,1}};

int d[4]={4,6,9,8};
   void setup() {
  // put your setup code here, to run once:
           
  for(int i=2; i<13; i++)
    pinMode (i,OUTPUT);
  c = millis();
  Serial.begin(9600);
}

void loop() {
  digitalWrite(9, HIGH);
  for(int j=0;j<4;j++)
  {
    for(int k=9;k<13;k++)
      digitalWrite(k,b[j][k-9]);
    
    for(int i=2;i<9;i++)
      digitalWrite(i,a[d[j]][i-2]);
    delay(5);
 }
}

工作一<br>
功能:讓七段顯示器顯示0~9 間隔一秒<br>
輸出腳:2(a),3(b),4(c),5(d),6(e),7(f),8(g),9(com1),10(com2),11(com3),12(com4)<br>
數值:<br>

``` c++
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
```

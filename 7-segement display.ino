#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
#define g 6
int read;
//{a,b,c,d,e,f,g}
int nums [10][7]={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1},
};
void setup()
{
  for(int i=2;i<=8;i++){
  pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    read=Serial.read()-48;
    digitalWrite(2,nums[read][a]);
    digitalWrite(3,nums[read][b]);
    digitalWrite(4,nums[read][c]);
    digitalWrite(5,nums[read][d]);
    digitalWrite(6,nums[read][e]);
    digitalWrite(7,nums[read][f]);
    digitalWrite(8,nums[read][g]);
    
  }
  }

#define WAIT_TIME           (20) // [ms]
int g_count = 0;
char txt[255];
int num = 0;
void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(115200);
}

int FizzBuzz(int num){
  char txt[255];
  if(num%15==0){
    sprintf(txt,"%d:",num);
    Serial.print(txt);
    Serial.print("Fizz Buzz\n");
    }
  else if(num%5 == 0){
    sprintf(txt,"%d:",num);
    Serial.print(txt);
    Serial.print("Fizz\n");
    }
  else if(num%3==0){
    sprintf(txt,"%d:",num);
    Serial.print(txt);
    Serial.print("Buzz\n");
    }
  else{
    sprintf(txt,"%d:\n");
    Serial.print(txt);
    }
  }

void loop() {

  if(g_count > 50){
    g_count = 0;
    num++;
    FizzBuzz(num);
    }

  g_count++;
  delay(WAIT_TIME);

}

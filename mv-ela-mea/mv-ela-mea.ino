/*
* MV ELA Arduino
* Autor.: Ezaul Zillmer
* Nome Arquivo: mv-ela-mea
* Data do Projeto 15/12/2016.
* 
* Utilizei um Arduino Pro Micro ATmega32U4 5V para ler a porta, você precisara usar o resistor INPUT_PULLUP interno e conectar cada porta a uma entrada digital.
* Optei por utilizar uma fita de LED ws2812b que trabalha em 5v, neste modelo de fita LED. Cada LED possui um chip que voce pode programar para ligar, desligar e mudar as cores com uma
* simples linha de dados que passa por cada led. 
* Então fiz 4 tiras de 11 Leds em cada caixa para isso basta ligar: 
* 
* 0-11  = Letreiro 1 
* 11-22 = Letreiro 2
* 22-33 = Letreiro 3
* 33-44 = Letreiro 4
* 
* Arduino Pro Micro ATmega32U4 5V
* 
* Projeto utilizado como base
* https://wiki.neogeodev.org/index.php?title=MV-ELA
* 
*/

#include <Adafruit_NeoPixel.h>
 #define PIN            8
 #define NUMPIXELS      44
 Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int clk = 18;
int ledd0 = 19;
int ledd1 = 20;
int ledd2 = 21;
int bit0=0;
int bit1=0;
int bit2=0;
int x=0;
void setup() {       
pinMode(clk, INPUT_PULLUP);
pinMode(ledd0, INPUT_PULLUP);       
pinMode(ledd1, INPUT_PULLUP);
pinMode(ledd2, INPUT_PULLUP);  
pixels.begin();
}

void loop() {
  if (digitalRead(clk)){
  bit0=digitalRead(ledd0);
  bit1=digitalRead(ledd1);
  bit2=digitalRead(ledd2);        
  if (bit0==0 and bit1==0 and bit2==0){
    for (x=0;x<11;x++){
      pixels.setPixelColor(x, 255,255,255);
  }
    for (x=11;x<22;x++){
      pixels.setPixelColor(x, 0,0,0);
  }    
  for (x=22;x<33;x++){
    pixels.setPixelColor(x, 0,0,0);
  }      
  for (x=33;x<44;x++){
    pixels.setPixelColor(x, 0,0,0);
  }
      
  }
  if (bit0==1 and bit1==0 and bit2==0){
  for (x=0;x<11;x++){
    pixels.setPixelColor(x, 0,0,0);
  }
  for (x=11;x<22;x++){
    pixels.setPixelColor(x, 255,255,255);
  }    
  for (x=22;x<33;x++){
    pixels.setPixelColor(x, 0,0,0);
  }      
  for (x=33;x<44;x++){
    pixels.setPixelColor(x, 0,0,0);
  }
  }
  if (bit0==0 and bit1==1 and bit2==0){
  for (x=0;x<11;x++){
    pixels.setPixelColor(x, 0,0,0);
  }
  for (x=11;x<22;x++){
    pixels.setPixelColor(x, 0,0,0);
  }    
  for (x=22;x<33;x++){
    pixels.setPixelColor(x, 255,255,255);
  }      
  for (x=33;x<44;x++){
    pixels.setPixelColor(x, 0,0,0);
  } 
  }
  if (bit0==1 and bit1==1 and bit2==0){
   for (x=0;x<11;x++){  
    pixels.setPixelColor(x, 0,0,0);
  }
  for (x=11;x<22;x++){
    pixels.setPixelColor(x, 0,0,0);
  }    
  for (x=22;x<33;x++){
    pixels.setPixelColor(x, 0,0,0);
  }      
  for (x=33;x<44;x++){
    pixels.setPixelColor(x, 255,255,255);
  }  
  }

 pixels.show();

}    
}

#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>
#include <TimerOne.h> 
#include <SoftwareSerial.h>

SoftwareSerial HC06(11,10); //TX, RX
String messageRecu;


/*/ après verification le max bleu à 16
 max rouge 38
 max green 40
 */
#define bouton_changer_option 3
#define nbOption 3 

#define bouton_changer_led 2
#define nb_option_strip_led 5

// pin pour changer les couleurs joystick
#define pinXc A0
#define pinYc A1

/*#define nbled 111
#define pinled 7 */

#define pinledOrdi 5
#define pinledBureau 3
#define nbledBureau 60
#define nbledOrdi 111

#define pinmicro A5
//mesure frequence
#define pinjack A4

 float nombre_iteration = 500 ; //
 float temps_entre_deux_mesure = 0 ;//en millisecondes faire avec millis plutot
 float mesure_tension_delay;


//rgb led bureau
int redBU =0 ;
int greenBU=0;
int blueBU=0;
int additionneurredBU =1;
int additionneurgreenBU= 1;
int additionneurblueBU = 1;

// rgb led ordi
int redOR =0 ;
int greenOR=0;
int blueOR=0;
int additionneurgreenOR =1;
int additionneurblueOR =1;
int additionneurredOR = 1;

int ampliLum =3;
int maxred = 100;
int maxgreen = 100;
int maxblue = 100;



unsigned int compter_pour_option = 1;
unsigned int compter_pour_changer_leds = 0;

//option music
 float nombre_echantillonage = 5; ///temps echantillonage multiplié par 100 ms ou temps incrémentation
 int temps_incrementation = 100;//en millisecondes
 float redMU,greenMU, blueMU;
//int temps_setup ;

 Adafruit_NeoPixel ledBureau(nbledBureau,pinledBureau, NEO_GRB + NEO_KHZ800);//
Adafruit_NeoPixel ledOrdi(nbledOrdi,pinledOrdi, NEO_GRB + NEO_KHZ800);//

void setup() {
  Serial.begin(2000000);
   HC06.begin(2000000);
 randomSeed(analogRead(0));
   ledOrdi.begin();
  ledOrdi.clear();
  ledBureau.begin();
  ledBureau.clear();

 
  
//allumage de led initialisation
 int blocled =20; //nombre de led que l'on veut allumer dans un bloc 
  for(int u=0; u <= nbledOrdi; u++){
    for (int i = 0; i <= blocled; i++){ledOrdi.setPixelColor(i+u, ledOrdi.Color(100,0,100));}
   ledOrdi.show();
   ledOrdi.clear();
   ledOrdi.show();
       delay(10);
  }
for(int u=0; u <= nbledBureau; u++){
  for (int i = 0; i <= blocled; i++){ledBureau.setPixelColor(i+u, ledBureau.Color(100,0,100));}
   ledBureau.show();
   ledBureau.clear();
   ledBureau.show();
       delay(10);
  }
    
init_couleur_au_hasard();

 //attachInterrupt(digitalPinToInterrupt(bouton_changer_led), choix_led, RISING);
// attachInterrupt(digitalPinToInterrupt(bouton_changer_option), compter_option, FALLING);

 int a  = millis();
 int haut = 0;
 for( int i=0; i<=nombre_echantillonage; i++){
    if( a == FALLING){
      haut +=1;
      delay(100);
    }
    delay(100);
  }

int b = millis();
temps_incrementation = b-a; 
}

void loop() {

option2();
//calcul_freqjack();
/*float   a = digitalRead(bouton_changer_option);
float b =digitalRead(bouton_changer_led);
Serial.print(a);Serial.println(b);
changer_option();*/

  }

 

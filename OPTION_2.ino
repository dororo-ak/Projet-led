void option2(){// couleur qui change pour toute les leds progressivement au hasard
  //plus
for (int i = 0; i<= nbledOrdi; i++){ ledOrdi.setPixelColor(i, ledOrdi.Color(redOR,greenOR,blueOR)); } 
for (int i = 0; i<= nbledBureau; i++){ ledBureau.setPixelColor(i, ledBureau.Color(redBU,greenBU,blueBU));}
ledBureau.show();
ledOrdi.show();
delay(150); 
//moins 
for (int i = nbledOrdi; i>= 0; i--){ ledOrdi.setPixelColor(i, ledOrdi.Color(redOR,greenOR,blueOR)); } 
for (int i = nbledBureau; i<= 0 ; i--){ ledBureau.setPixelColor(i, ledBureau.Color(redBU,greenBU,blueBU));}
ledBureau.show();
ledOrdi.show();
variation_couleur();

delay(150);  
Serial.println("option2");

}

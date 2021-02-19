void option1(){//couleur qui change pour les leds 
  int blocled = 35;
for (int i = 0; i<= nbledOrdi; i++){
      for (int u =0 ; u <= blocled; u++){
       ledOrdi.setPixelColor(i+u, ledOrdi.Color(redOR,greenOR,blueOR));
       ledBureau.setPixelColor(i+u, ledBureau.Color(redBU,greenBU,blueBU));
} 
ledOrdi.show();
ledBureau.show();
variation_couleur(); 
delay(100);
Serial.println("option1");
Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);


}

}

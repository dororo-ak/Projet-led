void option_music2(){
couleur_long_onde();
 int blocled =20;
for(int u=0; u <= nbledBureau; u++){
  for (int i = 0; i <= blocled; i++){ledBureau.setPixelColor(i+u, ledBureau.Color(redMU,greenMU,blueMU));}
   ledBureau.show();
   ledBureau.clear();
   ledBureau.show();
       delay(5);
  }
 for(int u=0; u <= nbledOrdi; u++){
    for (int i = 0; i <= blocled; i++){ledOrdi.setPixelColor(i+u, ledOrdi.Color(redMU,greenMU,blueMU));}
   ledOrdi.show();
   ledOrdi.clear();
   ledOrdi.show();
       delay(5);
  }
couleur_long_onde();


}

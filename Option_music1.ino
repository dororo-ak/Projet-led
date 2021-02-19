void option_music1(){
couleur_long_onde();

for (int i = 0; i<= nbledOrdi; i++){ ledOrdi.setPixelColor(i, ledOrdi.Color(redMU,greenMU,blueMU)); } 
for (int i = 0; i<= nbledBureau; i++){ ledBureau.setPixelColor(i, ledBureau.Color(redMU,greenMU,blueMU)); }
ledBureau.show();
ledOrdi.show();
couleur_long_onde();
changer_option();

}

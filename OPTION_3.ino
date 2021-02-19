void option3(){// couleur uni qui ne change pas appuyer sur les bouton pour faire varier couleur.  faire un attachinterrupt


//definir les borne
int XNborneM = 380;
int XNborneP = 540;

int XPborneM = 610;
int XPborneP = 1023;

int XMborneM = 0;
int XMborneP = 200;

int YNborneM = 380;
int YNborneP = 540;

int YPborneM = 610;
int YPborneP = 1023;

int YMborneM = 0;
int YMborneP = 200;


int Vitesse_Changement = 5;
int X;
int Y; 

X= analogRead(pinXc);
Y = analogRead(pinYc);
/*Serial.println(X);
Serial.println(Y);*/
//fonction commence ici 

switch (compter_pour_changer_leds) {
  case 0://modifie led ordi seulement et allume seulement led ordi
                      ledOrdi.clear();
                      ledBureau.clear();
                      ledOrdi.show();
                      ledBureau.show();
                      Serial.println("Option 3 :n'allume rien");
                      changer_option();
    break;

                      
  case 1://modifie led ordi seulement et allume seulement led ordi

X= analogRead(pinXc);
Y = analogRead(pinYc);
/*Serial.println(X);
Serial.println(Y);*/
          if ( redOR > 80 ){
                            redOR = 80;
                            delay(50);}
            if ( greenOR > 80 ){
                              greenOR = 80;
                              delay(50);}
              if ( blueOR > 80 ){
                              blueOR = 80;
                              delay(50);}
                if ( redOR < 1 ){
                                redOR = 0;
                                delay(50);}
              if ( blueOR < 1 ){
                              blueOR = 0;
                              delay(50);}
                if ( greenOR < 1 ){
                                greenOR = 0;
                                delay(50);}
              
            if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XMborneM and X<= XMborneP ) ){  //Y+ et X-
              redOR +=Vitesse_Changement;
            delay(50);}
            
            else if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XNborneM and X <= XNborneP)){   //Y+ et Xneutre
              blueOR += Vitesse_Changement;
            delay(50);}
            
            else if ((Y >= YPborneM and Y <= YPborneP) and (X >= XPborneM and X<= XPborneP )){// Y+ et X+
              greenOR += Vitesse_Changement;
            delay(50);}
            
            
            if (( Y >= YMborneM and Y <= YMborneP) and (X >= XMborneM and X<= XMborneP )){//Y- X-
              redOR -=Vitesse_Changement;
              delay(50);}
            
            else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XNborneM and X <= XNborneP) ){ //Y- et Xneutre
              blueOR -= Vitesse_Changement;
              delay(50);}
            
            else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XPborneM and X<= XPborneP )){// Y- et X+
              greenOR -= Vitesse_Changement;
              delay(50);}
              
            for (int i = 0; i<= nbledOrdi; i++){ ledOrdi.setPixelColor(i, ledOrdi.Color(redOR,greenOR,blueOR)); }
              ledOrdi.show();
                  Serial.print(" Option 3 led 1 ");Serial.print("redORdi :  " );Serial.print(redOR);Serial.print("  blueordi:  ");Serial.print(blueOR);Serial.print("  greenORdi:  ");Serial.println(greenOR);
           break;
          // changer_option();

    
  case 2://modifie led bureau et allume seulement led bureau
X= analogRead(pinXc);
Y = analogRead(pinYc);
/*Serial.println(X);
Serial.println(Y);*/
            if ( redBU > 80 ){
              redBU = 80;
            delay(50);}
          if ( greenBU > 80 ){
              greenBU = 80;
            delay(50);}
            if ( blueBU > 80 ){
              blueBU = 80;
            delay(50);}
              if ( redBU < 1 ){
              redBU = 0;
            delay(50);}
            if ( blueBU < 1 ){
              blueBU = 0;
            delay(50);}
              if ( greenBU < 1 ){
              greenBU = 0;
            delay(50);}
            
          if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XMborneM and X<= XMborneP ) ){  //Y+ et X-
            redBU +=Vitesse_Changement;
          delay(50);}
          
          else if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XNborneM and X <= XNborneP)){   //Y+ et Xneutre
            blueBU += Vitesse_Changement;
          delay(50);}
          
          else if ((Y >= YPborneM and Y <= YPborneP) and (X >= XPborneM and X<= XPborneP )){// Y+ et X+
            greenBU += Vitesse_Changement;
          delay(50);}
          
          
          
          if (( Y >= YMborneM and Y <= YMborneP) and (X >= XMborneM and X<= XMborneP )){//Y- X-
            redBU -=Vitesse_Changement;
            delay(50);}
          
          else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XNborneM and X <= XNborneP) ){ //Y- et Xneutre
            blueBU -= Vitesse_Changement;
            delay(50);}
          
          else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XPborneM and X<= XPborneP )){// Y- et X+
            greenBU -= Vitesse_Changement;
            delay(50);}
            
          
           for (int i = 0; i<= nbledBureau; i++){ ledBureau.setPixelColor(i, ledBureau.Color(redBU,greenBU,blueBU)); }
            ledBureau.show(); 
              Serial.print(" Option 3 led2 ");Serial.print("redBUreau :  " );Serial.print(redBU);Serial.print("  bluebureau:  ");Serial.print(blueBU);Serial.print("  greenBUreau:  ");Serial.println(greenBU);
  //changer_option();

      break;
  
    

  case 3:// modifie led bureau et allume les deux
  X= analogRead(pinXc);
Y = analogRead(pinYc);
/*Serial.println(X);
Serial.println(Y);*/
if ( redBU > 80 ){
                      redBU = 80;
                    delay(50);}
                  if ( greenBU > 80 ){
                      greenBU = 80;
                    delay(50);}
                    if ( blueBU > 80 ){
                      blueBU = 80;
                    delay(50);}
                      if ( redBU < 1 ){
                      redBU = 0;
                    delay(50);}
                    if ( blueBU < 1 ){
                      blueBU = 0;
                    delay(50);}
                      if ( greenBU < 1 ){
                      greenBU = 0;
                    delay(50);}
                    
                  if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XMborneM and X<= XMborneP ) ){  //Y+ et X-
                    redBU +=Vitesse_Changement;
                  delay(50);}
                  
                  else if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XNborneM and X <= XNborneP)){   //Y+ et Xneutre
                    blueBU += Vitesse_Changement;
                  delay(50);}
                  
                  else if ((Y >= YPborneM and Y <= YPborneP) and (X >= XPborneM and X<= XPborneP )){// Y+ et X+
                    greenBU += Vitesse_Changement;
                  delay(50);}
                  
                  
                  
                  if (( Y >= YMborneM and Y <= YMborneP) and (X >= XMborneM and X<= XMborneP )){//Y- X-
                    redBU -=Vitesse_Changement;
                    delay(50);}
                  
                  else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XNborneM and X <= XNborneP) ){ //Y- et Xneutre
                    blueBU -= Vitesse_Changement;
                    delay(50);}
                  
                  else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XPborneM and X<= XPborneP )){// Y- et X+
                    greenBU -= Vitesse_Changement;
                    delay(50);}
                    
                  
                   for (int i = 0; i<= nbledBureau; i++){ ledBureau.setPixelColor(i, ledBureau.Color(redBU,greenBU,blueBU)); }
                    ledBureau.show(); 
                      Serial.print(" Option 3 led4 ");Serial.print("redBUreau :  " );Serial.print(redBU);Serial.print("  bluebureau:  ");Serial.print(blueBU);Serial.print("  greenBUreau:  ");Serial.println(greenBU);
                          
  //changer_option();
    break;


  case 4://allume les deux et modifie led ordi
  X= analogRead(pinXc);
Y = analogRead(pinYc);
/*Serial.println(X);
Serial.println(Y);*/
  if ( redOR > 80 ){
                                      redOR = 80;
                                      delay(50);}
                      if ( greenOR > 80 ){
                                        greenOR = 80;
                                        delay(50);}
                        if ( blueOR > 80 ){
                                        blueOR = 80;
                                        delay(50);}
                          if ( redOR < 1 ){
                                          redOR = 0;
                                          delay(50);}
                        if ( blueOR < 1 ){
                                        blueOR = 0;
                                        delay(50);}
                          if ( greenOR < 1 ){
                                          greenOR = 0;
                                          delay(50);}
                        
                      if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XMborneM and X<= XMborneP ) ){  //Y+ et X-
                        redOR +=Vitesse_Changement;
                      delay(50);}
                      
                      else if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XNborneM and X <= XNborneP)){   //Y+ et Xneutre
                        blueOR += Vitesse_Changement;
                      delay(50);}
                      
                      else if ((Y >= YPborneM and Y <= YPborneP) and (X >= XPborneM and X<= XPborneP )){// Y+ et X+
                        greenOR += Vitesse_Changement;
                      delay(50);}
                      
                      
                      if (( Y >= YMborneM and Y <= YMborneP) and (X >= XMborneM and X<= XMborneP )){//Y- X-
                        redOR -=Vitesse_Changement;
                        delay(50);}
                      
                      else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XNborneM and X <= XNborneP) ){ //Y- et Xneutre
                        blueOR -= Vitesse_Changement;
                        delay(50);}
                      
                      else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XPborneM and X<= XPborneP )){// Y- et X+
                        greenOR -= Vitesse_Changement;
                        delay(50);}
                        
                      for (int i = 0; i<= nbledOrdi; i++){ ledOrdi.setPixelColor(i, ledOrdi.Color(redOR,greenOR,blueOR)); }
                        ledOrdi.show();
                    Serial.print(" Option 3 led3 ");Serial.print("redORdi :  " );Serial.print(redOR);Serial.print("  blueordi:  ");Serial.print(blueOR);Serial.print("  greenORdi:  ");Serial.println(greenOR);
                   // changer_option();
    break;

  
  case 5://allume les deux et modifie les deux
X= analogRead(pinXc);
Y = analogRead(pinYc);
/*Serial.println(X);
Serial.println(Y);*/
                     if ( redOR > 80 ){
                                      redOR = 80;
                                      delay(50);}
                      if ( greenOR > 80 ){
                                        greenOR = 80;
                                        delay(50);}
                        if ( blueOR > 80 ){
                                        blueOR = 80;
                                        delay(50);}
                          if ( redOR < 1 ){
                                          redOR = 0;
                                          delay(50);}
                        if ( blueOR < 1 ){
                                        blueOR = 0;
                                        delay(50);}
                          if ( greenOR < 1 ){
                                          greenOR = 0;
                                          delay(50);}
                        
                      if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XMborneM and X<= XMborneP ) ){  //Y+ et X-
                        redOR +=Vitesse_Changement;
                      delay(50);}
                      
                      else if ( (Y >= YPborneM and Y <= YPborneP) and (X >= XNborneM and X <= XNborneP)){   //Y+ et Xneutre
                        blueOR += Vitesse_Changement;
                      delay(50);}
                      
                      else if ((Y >= YPborneM and Y <= YPborneP) and (X >= XPborneM and X<= XPborneP )){// Y+ et X+
                        greenOR += Vitesse_Changement;
                      delay(50);}
                      
                      
                      if (( Y >= YMborneM and Y <= YMborneP) and (X >= XMborneM and X<= XMborneP )){//Y- X-
                        redOR -=Vitesse_Changement;
                        delay(50);}
                      
                      else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XNborneM and X <= XNborneP) ){ //Y- et Xneutre
                        blueOR -= Vitesse_Changement;
                        delay(50);}
                      
                      else if (( Y >= YMborneM and Y <= YMborneP) and (X >= XPborneM and X<= XPborneP )){// Y- et X+
                        greenOR -= Vitesse_Changement;
                        delay(50);}
                        
                        redBU = redOR;
                        greenBU = greenOR;
                        blueBU = blueOR;
                      for (int i = 0; i<= nbledOrdi; i++){ ledOrdi.setPixelColor(i, ledOrdi.Color(redOR,greenOR,blueOR)); }
                      for (int i = 0; i<= nbledBureau; i++){ ledBureau.setPixelColor(i, ledBureau.Color(redBU,greenBU,blueBU)); }
                        ledOrdi.show();                   
                        ledBureau.show(); 
                        Serial.print(" Option 3 led4 ");Serial.print("redORdi :  " );Serial.print(redOR);Serial.print("  blueordi:  ");Serial.print(blueOR);Serial.print("  greenORdi:  ");Serial.println(greenOR);
  //changer_option();
    break;

  
}
//changer_option();

}

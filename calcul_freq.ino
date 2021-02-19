
float calcul_freqjack(){// pour le micro rajouté un bouron qui quand est allumé c'est le pin micro quand etaint c'est le pin jack et entrer ca dans un if
      float mesure_tension = analogRead(pinjack)*5/1023;
      Serial.print("tension: ");Serial.print(mesure_tension,2);
      float front =0;
      float frequence;
      float chargeurtime =millis();
      float nombre_iteration = 500 ; //
      float temps_entre_deux_mesure = 0 ;//en 
     
      for( int i=0; i<=nombre_iteration; i++){
        //mesure du front descendant 
        mesure_tension =analogRead(pinjack)*5/1023;//tension avant le delay 
        mesure_tension_delay = analogRead(pinjack)*5/1023;//tension apres avoir attendu le delay 
      //Serial.print("previous tension: ");Serial.print(mesure_tension,2);
       delayMicroseconds(temps_entre_deux_mesure);
       //Serial.print("after tension: ");Serial.println(mesure_tension_delay,2);

          
        if(  mesure_tension_delay != mesure_tension  ){//La tension est normalement au niveau 1, j'ai mis 0.9 pour vaoir de la marge.
          front +=1;
        }}

      float temps_mesure =  (millis()- chargeurtime);//
      Serial.print(" temps mesure : ");Serial.print(temps_mesure);
      Serial.print(" nb front montant: ");Serial.print(front);
      frequence = 1000*(front/temps_mesure); //* 1000 car en ms
      Serial.print(" frequence: ");Serial.println(frequence);

      return frequence;
      
    }

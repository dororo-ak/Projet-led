   float couleur_long_onde(){

    float frequence = calcul_freqjack();
//pour rouge
if (frequence <= 40){
redMU =0;}

    if(frequence <= 100){
      redMU = maxred;
    }
    else if (frequence >=100 and frequence <=200){
          redMU = map(frequence,100,200,maxred,5);
    }
    else if (frequence>200 and frequence<500){
      redMU =map(frequence,200,500,5,10);
    }
    else if (frequence>500 and frequence<1000){
      redMU =map(frequence,500,1000,5,maxred);
      blueMU = map(frequence,500,100,5,maxblue);
      greenMU =5;
    }
    else if (frequence>300 and frequence<500){
      greenMU =map(frequence,300,500,0,maxgreen/1.5);
      blueMU = map(frequence,300,500,maxblue/2,0);
      redMU=5;
    }
    else if (frequence>500){
      greenMU =5;
    }  
    else if (frequence>1000){
      greenMU =map(frequence,1000,5000,10,maxgreen);
      redMU =map(frequence,1000,5000,10,maxred);
      blueMU =map(frequence,1000,5000,10,maxblue);
    }
   }
    

void variation_couleur(){
  //cette fonction permet de faire varier la couleur des led progressivement

greenOR += additionneurgreenOR;
redOR += additionneurredOR;
blueOR += additionneurblueOR;
if (greenOR == 0){ additionneurgreenOR = 1;}
else if (greenOR == maxgreen) {additionneurgreenOR = -1;}
if (blueOR== 0){ additionneurblueOR= 1;}
else if (blueOR== maxblue){additionneurblueOR= -1;}
if (redOR == 0){ additionneurredOR = 1;}
else if (redOR == maxred){ additionneurredOR = -1;}
greenOR += additionneurgreenOR;
redOR += additionneurredOR;
blueOR+= additionneurblueOR;
  
greenBU += additionneurgreenBU;
redBU += additionneurredBU;
blueBU += additionneurblueBU;
if (greenBU == 0){ additionneurgreenBU = 1;}
else if (greenBU == maxgreen) {additionneurgreenBU = -1;}
if (blueBU== 0){ additionneurblueBU= 1;}
else if (blueBU== maxblue){additionneurblueBU= -1;}
if (redBU == 0){ additionneurredBU = 1;}
else if (redBU == maxred){ additionneurredBU = -1;}
greenBU += additionneurgreenBU;
redBU += additionneurredBU;
blueBU+= additionneurblueBU;

}

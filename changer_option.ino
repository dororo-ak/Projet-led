void changer_option(){
  Serial.print("compter_pour_changer_option: ");Serial.println(compter_pour_option);
switch (compter_pour_option) {
  case 1:
    Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);
    option1();
    break;
  case 2:
    Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);
    option2();
    break;
    case 3:
    Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);
    option3();
    break;

    case 4:
    Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);
    option3();
        break;

    case 5:
    Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);
    option_music1();
        break;

        case 6:
    Serial.print("compter_pour_option: ");Serial.println(compter_pour_option);
    option_music2();  
        break;
 
     
    default:
    ledBureau.clear();
    ledOrdi.clear();
    ledBureau.show();
    ledOrdi.show();
        break;

}
} 

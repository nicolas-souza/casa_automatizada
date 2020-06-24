//Tipo de sensor usado 
const bool return_sensor = HIGH;

//Acionamento por rele
const bool LIGAR = LOW;

//Limite de luminosidade
const int LIMITE_LUZ = 700;

//classe para funcionamento de comodos de uma casa
class Comodo {

 int pino_sensor, pino_lampada;

    int ler_digital(){
        if (digitalRead(pino_sensor)==return_sensor){
            return HIGH;
        }else {
            return LOW;
        }
    }
    int ler_analog(){   
        if(analogRead(pino_sensor)>LIMITE_LUZ){
            return HIGH;
        }else{
            return LOW;
        }
    }
    void ligar (){
        digitalWrite(pino_lampada,LIGAR);
    }
    void desligar(){
        digitalWrite(pino_lampada,!LIGAR);
    }

  public:

  Comodo(int pino_entrada, int pino_saida){
     pino_sensor = pino_entrada;
     pino_lampada = pino_saida;
    pinMode(pino_sensor,INPUT);
    pinMode(pino_lampada,OUTPUT);
  }

    void update_digital(){
        if(ler_digital()){
            ligar();
        }else {
            desligar();
        }
    }
    void update_analog(){
        if(ler_analog()){
            ligar();
        }else {
            desligar();
        }
    }
};
//criação de uma sala interna e uma area externa
Comodo sala_um = Comodo(7,13);
Comodo sala_externa = Comodo(A0,12);

void setup(){

}
void loop (){

    sala_um.update_digital();
    
    sala_externa.update_analog();

}

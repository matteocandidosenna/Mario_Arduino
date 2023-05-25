#define NOTA_B0  31
#define NOTA_C1  33
#define NOTA_CS1 35
#define NOTA_D1  37
#define NOTA_DS1 39
#define NOTA_E1  41
#define NOTA_F1  44
#define NOTA_FS1 46
#define NOTA_G1  49
#define NOTA_GS1 52
#define NOTA_A1  55
#define NOTA_AS1 58
#define NOTA_B1  62
#define NOTA_C2  65
#define NOTA_CS2 69
#define NOTA_D2  73
#define NOTA_DS2 78
#define NOTA_E2  82
#define NOTA_F2  87
#define NOTA_FS2 93
#define NOTA_G2  98
#define NOTA_GS2 104
#define NOTA_A2  110
#define NOTA_AS2 117
#define NOTA_B2  123
#define NOTA_C3  131
#define NOTA_CS3 139
#define NOTA_D3  147
#define NOTA_DS3 156
#define NOTA_E3  165
#define NOTA_F3  175
#define NOTA_FS3 185
#define NOTA_G3  196
#define NOTA_GS3 208
#define NOTA_A3  220
#define NOTA_AS3 233
#define NOTA_B3  247
#define NOTA_C4  262
#define NOTA_CS4 277
#define NOTA_D4  294
#define NOTA_DS4 311
#define NOTA_E4  330
#define NOTA_F4  349
#define NOTA_FS4 370
#define NOTA_G4  392
#define NOTA_GS4 415
#define NOTA_A4  440
#define NOTA_AS4 466
#define NOTA_B4  494
#define NOTA_C5  523
#define NOTA_CS5 554
#define NOTA_D5  587
#define NOTA_DS5 622
#define NOTA_E5  659
#define NOTA_F5  698
#define NOTA_FS5 740
#define NOTA_G5  784
#define NOTA_GS5 831
#define NOTA_A5  880
#define NOTA_AS5 932
#define NOTA_B5  988
#define NOTA_C6  1047
#define NOTA_CS6 1109
#define NOTA_D6  1175
#define NOTA_DS6 1245
#define NOTA_E6  1319
#define NOTA_F6  1397
#define NOTA_FS6 1480
#define NOTA_G6  1568
#define NOTA_GS6 1661
#define NOTA_A6  1760
#define NOTA_AS6 1865
#define NOTA_B6  1976
#define NOTA_C7  2093
#define NOTA_CS7 2217
#define NOTA_D7  2349
#define NOTA_DS7 2489
#define NOTA_E7  2637
#define NOTA_F7  2794
#define NOTA_FS7 2960
#define NOTA_G7  3136
#define NOTA_GS7 3322
#define NOTA_A7  3520
#define NOTA_AS7 3729
#define NOTA_B7  3951
#define NOTA_C8  4186
#define NOTA_CS8 4435
#define NOTA_D8  4699
#define NOTA_DS8 4978
#define PAUSA      0


// Para deixar a melodia mais rápiada ou lenta
int tempo = 200;

// para a entrada que quiseres usar
int buzzer = 11;


// notas da melodia seguidas pelas suas respectivas durações.
// a 4 means a quarter NOTA, 8 an eighteenth , 16 sixteenth, so on
// so -4 means a dotted quarter NOTA, that is, a quarter plus an eighteenth!!
int melodia[] = {

  // Super Mario Bros - Tema
  
  
  NOTA_E5,8, NOTA_E5,8, PAUSA,8,  NOTA_E5,8, PAUSA,8, NOTA_C5,8, NOTA_E5,8, // bis 1
  NOTA_G5,4, PAUSA,4, NOTA_G4,8, PAUSA,4, 
  NOTA_C5,-4, NOTA_G4,8, PAUSA,4, NOTA_E4,-4, // bis 3
  NOTA_A4,4, NOTA_B4,4, NOTA_AS4,8, NOTA_A4,4,
  NOTA_G4,-8, NOTA_E5,-8, NOTA_G5,-8, NOTA_A5,4, NOTA_F5,8, NOTA_G5,8,
  PAUSA,8, NOTA_E5,4,NOTA_C5,8, NOTA_D5,8, NOTA_B4,-4,
  NOTA_C5,-4, NOTA_G4,8, PAUSA,4, NOTA_E4,-4, // bis 3
  NOTA_A4,4, NOTA_B4,4, NOTA_AS4,8, NOTA_A4,4,
  NOTA_G4,-8, NOTA_E5,-8, NOTA_G5,-8, NOTA_A5,4, NOTA_F5,8, NOTA_G5,8,
  PAUSA,8, NOTA_E5,4,NOTA_C5,8, NOTA_D5,8, NOTA_B4,-4,

  
  PAUSA,4, NOTA_G5,8, NOTA_FS5,8, NOTA_F5,8, NOTA_DS5,4, NOTA_E5,8,// bis 7
  PAUSA,8, NOTA_GS4,8, NOTA_A4,8, NOTA_C4,8, PAUSA,8, NOTA_A4,8, NOTA_C5,8, NOTA_D5,8,
  PAUSA,4, NOTA_DS5,4, PAUSA,8, NOTA_D5,-4,
  NOTA_C5,2, PAUSA,2,

  PAUSA,4, NOTA_G5,8, NOTA_FS5,8, NOTA_F5,8, NOTA_DS5,4, NOTA_E5,8,//bis  7
  PAUSA,8, NOTA_GS4,8, NOTA_A4,8, NOTA_C4,8, PAUSA,8, NOTA_A4,8, NOTA_C5,8, NOTA_D5,8,
  PAUSA,4, NOTA_DS5,4, PAUSA,8, NOTA_D5,-4,
  NOTA_C5,2, PAUSA,2,

  NOTA_C5,8, NOTA_C5,4, NOTA_C5,8, PAUSA,8, NOTA_C5,8, NOTA_D5,4,// bis 11
  NOTA_E5,8, NOTA_C5,4, NOTA_A4,8, NOTA_G4,2,

  NOTA_C5,8, NOTA_C5,4, NOTA_C5,8, PAUSA,8, NOTA_C5,8, NOTA_D5,8, NOTA_E5,8,//bis 13 
  PAUSA,1, 
  NOTA_C5,8, NOTA_C5,4, NOTA_C5,8, PAUSA,8, NOTA_C5,8, NOTA_D5,4,
  NOTA_E5,8, NOTA_C5,4, NOTA_A4,8, NOTA_G4,2,
  NOTA_E5,8, NOTA_E5,8, PAUSA,8, NOTA_E5,8, PAUSA,8, NOTA_C5,8, NOTA_E5,4,
  NOTA_G5,4, PAUSA,4, NOTA_G4,4, PAUSA,4, 
  NOTA_C5,-4, NOTA_G4,8, PAUSA,4, NOTA_E4,-4, // bis 19
  
  NOTA_A4,4, NOTA_B4,4, NOTA_AS4,8, NOTA_A4,4,
  NOTA_G4,-8, NOTA_E5,-8, NOTA_G5,-8, NOTA_A5,4, NOTA_F5,8, NOTA_G5,8,
  PAUSA,8, NOTA_E5,4, NOTA_C5,8, NOTA_D5,8, NOTA_B4,-4,

  NOTA_C5,-4, NOTA_G4,8, PAUSA,4, NOTA_E4,-4,
  NOTA_A4,4, NOTA_B4,4, NOTA_AS4,8, NOTA_A4,4,
  NOTA_G4,-8, NOTA_E5,-8, NOTA_G5,-8, NOTA_A5,4, NOTA_F5,8, NOTA_G5,8,
  PAUSA,8, NOTA_E5,4, NOTA_C5,8, NOTA_D5,8, NOTA_B4,-4,

  NOTA_E5,8, NOTA_C5,4, NOTA_G4,8, PAUSA,4, NOTA_GS4,4,
  NOTA_A4,8, NOTA_F5,4, NOTA_F5,8, NOTA_A4,2,
  NOTA_D5,-8, NOTA_A5,-8, NOTA_A5,-8, NOTA_A5,-8, NOTA_G5,-8, NOTA_F5,-8,
  
  NOTA_E5,8, NOTA_C5,4, NOTA_A4,8, NOTA_G4,2, // bis 26
  NOTA_E5,8, NOTA_C5,4, NOTA_G4,8, PAUSA,4, NOTA_GS4,4,
  NOTA_A4,8, NOTA_F5,4, NOTA_F5,8, NOTA_A4,2,
  NOTA_B4,8, NOTA_F5,4, NOTA_F5,8, NOTA_F5,-8, NOTA_E5,-8, NOTA_D5,-8,
  NOTA_C5,8, NOTA_E4,4, NOTA_E4,8, NOTA_C4,2,

  NOTA_E5,8, NOTA_C5,4, NOTA_G4,8, PAUSA,4, NOTA_GS4,4,//bis 23
  NOTA_A4,8, NOTA_F5,4, NOTA_F5,8, NOTA_A4,2,
  NOTA_D5,-8, NOTA_A5,-8, NOTA_A5,-8, NOTA_A5,-8, NOTA_G5,-8, NOTA_F5,-8,
  
  NOTA_E5,8, NOTA_C5,4, NOTA_A4,8, NOTA_G4,2, //26
  NOTA_E5,8, NOTA_C5,4, NOTA_G4,8, PAUSA,4, NOTA_GS4,4,
  NOTA_A4,8, NOTA_F5,4, NOTA_F5,8, NOTA_A4,2,
  NOTA_B4,8, NOTA_F5,4, NOTA_F5,8, NOTA_F5,-8, NOTA_E5,-8, NOTA_D5,-8,
  NOTA_C5,8, NOTA_E4,4, NOTA_E4,8, NOTA_C4,2,
  NOTA_C5,8, NOTA_C5,4, NOTA_C5,8, PAUSA,8, NOTA_C5,8, NOTA_D5,8, NOTA_E5,8,
  PAUSA,1,

  NOTA_C5,8, NOTA_C5,4, NOTA_C5,8, PAUSA,8, NOTA_C5,8, NOTA_D5,4, //33
  NOTA_E5,8, NOTA_C5,4, NOTA_A4,8, NOTA_G4,2,
  NOTA_E5,8, NOTA_E5,8, PAUSA,8, NOTA_E5,8, PAUSA,8, NOTA_C5,8, NOTA_E5,4,
  NOTA_G5,4, PAUSA,4, NOTA_G4,4, PAUSA,4, 
  NOTA_E5,8, NOTA_C5,4, NOTA_G4,8, PAUSA,4, NOTA_GS4,4,
  NOTA_A4,8, NOTA_F5,4, NOTA_F5,8, NOTA_A4,2,
  NOTA_D5,-8, NOTA_A5,-8, NOTA_A5,-8, NOTA_A5,-8, NOTA_G5,-8, NOTA_F5,-8,
  
  NOTA_E5,8, NOTA_C5,4, NOTA_A4,8, NOTA_G4,2, //40
  NOTA_E5,8, NOTA_C5,4, NOTA_G4,8, PAUSA,4, NOTA_GS4,4,
  NOTA_A4,8, NOTA_F5,4, NOTA_F5,8, NOTA_A4,2,
  NOTA_B4,8, NOTA_F5,4, NOTA_F5,8, NOTA_F5,-8, NOTA_E5,-8, NOTA_D5,-8,
  NOTA_C5,8, NOTA_E4,4, NOTA_E4,8, NOTA_C4,2,
  
  //Som de Game Over
  NOTA_C5,-4, NOTA_G4,-4, NOTA_E4,4, //45
  NOTA_A4,-8, NOTA_B4,-8, NOTA_A4,-8, NOTA_GS4,-8, NOTA_AS4,-8, NOTA_GS4,-8,
  NOTA_G4,8, NOTA_D4,8, NOTA_E4,-2,  

};

// Sizeof dá o número de bytes
// Existem dois valores por nota (frequência e duração), então para cada nota há 4 bytes
int NOTAs = sizeof(melodia) / sizeof(melodia[0]) / 2;

// Calcula a duração da nota em milisegundos
in NOTAinteira = (60000 * 4) / tempo;

int divider = 0, duracao = 0;

void setup() {
  // Lembre-se, o vetor é duas vezes o número de notas (notas + durações)
  for (int talNOTA = 0; talNOTA < NOTAs * 2; talNOTA = talNOTA + 2) {

    // Calcula a duração de cada nota
    divider = melodia[talNOTA + 1];
    if (divider > 0) {
      // Nota regular, somente continua
      duracao = (NOTAinteira) / divider;
    } else if (divider < 0) {
      // Notas dotadas são representadas com valores negativos = 1/4!!
      duracao = (NOTAinteira) / abs(divider);
      duracao *= 1.5; // aumenta a duração em metade das notas dotadas
    }

    // Nós só tocamos 90% do tempo de duração da nota, 10% é descanso
    tone(buzzer, melodia[talNOTA], duracao * 0.9);

    // Esperar por breve intervao antes de tocar a próxima nota
    delay(duracao);

    // Para a onda quando há o toque da próxima nota
    noTone(buzzer);
  }
}

void loop() {
  // não é necessário repetir a melodia
}
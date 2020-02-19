const int segmenti = 7;
const int character = 14;
int vett[segmenti] = {13, 12, 11, 10, 9, 8, 7};

// char lettere[character] = {'A', 'B', 'C', 'D', 'E', 'F', 'H', 'I', 'J', 'L', 'O', 'P', 'S', 'U'};

void setup() {
  for(int i=0 ; i<segmenti ; i++) {
     pinMode(vett[i], OUTPUT);
  }
}

void displayNumber(int numero) {

  byte light;

  switch (numero) {
    case 0: light = 0b0111111; break; // Starting from G then 0b
    case 1: light = 0b0000110; break;
    case 2: light = 0b1011011; break;
    case 3: light = 0b1001111; break;
    case 4: light = 0b1100110; break;
    case 5: light = 0b1101101; break;
    case 6: light = 0b1111101; break;
    case 7: light = 0b0000111; break;
    case 8: light = 0b1111111; break;
    case 9: light = 0b1101111; break;
  }

    for (int i = 0; i < 7; i ++) {
      digitalWrite(vett[i], bitRead(light, i));
    }

}

void displayChar(char carattere) {
  
  byte light;

  switch (carattere) {
    case 'A': light = 0b1110111; break; //Starting from G then 0b
    case 'B': light = 0b1111111; break;
    case 'C': light = 0b0111001; break;
    case 'D': light = 0b0111111; break;
    case 'E': light = 0b1111001; break;
    case 'F': light = 0b1110001; break;
    case 'H': light = 0b1110110; break;
    case 'I': light = 0b0000110; break;
    case 'J': light = 0b0011110; break;
    case 'L': light = 0b0111000; break;
    case 'O': light = 0b0111111; break;
    case 'P': light = 0b1110011; break;
    case 'S': light = 0b1101101; break;
    case 'U': light = 0b0111110; break;
  }

   for(int i=0 ; i<segmenti ; i++) {
     digitalWrite(vett[i], bitRead(light, i));
   } 
}

void loop() {
    for (int i = 0; i < character; i++) {
      displayNumber(i);
      delay(1000);
    }
    /*
     for (int i = 0; i < character; i++) {
      displayChar(lettere[i]);
      delay(1000);
    }
    */
}
 

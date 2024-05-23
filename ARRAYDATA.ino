#include <Arduino.h>

// Define the UART pins
#define TXD_PIN 17
#define RXD_PIN 16

uint8_t speed = 14;
uint8_t limiter1 = 160;
uint8_t limiter2 = 60;
uint8_t limiter3 = 100;
uint8_t dataSendArray;
// static const int TX_BUF_SIZE = 2;
// void sendDataArray( uint8_t kecepatan, uint8_t limiterpertama, uint8_t limiterkedua, uint8_t limiterketiga);
// char speedBuffer [5];
// char limiter1Buffer [5];
// char limiter2Buffer [5];
// char limiter3Buffer [5];


// Define the UART object
// HardwareSerial Serialuint8_t dataToSend[4] = {speed, limiter1, limiter2, limiter3};2(1);

// Define the buffer size for sending data
// static const int TX_BUF_SIZE = 2;

/**
  * @brief  Initialize the UART
  * 
  */
  void sendDataArray( uint8_t kecepatan, uint8_t limiterpertama, uint8_t limiterkedua, uint8_t limiterketiga)
  {

    
  uint8_t kirim[4] = {kecepatan, limiterpertama, limiterkedua, limiterketiga};
  char dataSendArray[12];
  snprintf(dataSendArray, sizeof(dataSendArray), "%02x %02x %02x %02x", kirim[0], kirim[1], kirim[2], kirim[3]);
  // Serial2.write((uint8_t *)&dataSendArray, sizeof(dataSendArray));
  Serial2.print("data heksa: ");
  Serial2.write(dataSendArray, strlen(dataSendArray));
  Serial2.println();
  }

void uart_init(void) {
    Serial2.begin(115200, SERIAL_8N1, RXD_PIN, TXD_PIN);
    Serial.begin(115200);
}


void setup() {
    // Initialize UART
    uart_init();
    sendDataArray( speed, limiter1, limiter2, limiter3);
    // delay(5000);
}

void loop() {


  //DATA COBA COBA
    sendDataArray(speed, limiter1, limiter2, limiter3);
    delay(5000);

  //DATA COBA COBA AKHIR
  //DATA BENAR COOK=============================================>

  // uint8_t kirim[4] = {speed, limiter1, limiter2, limiter3};
  // char dataToSend[12];
  // sprintf(dataToSend,  "%02X %02X %02X %02X", kirim[0], kirim[1], kirim[2], kirim[3]);
  //   //  Serial2.print("data ini sebesar: ");
  //    Serial2.write( dataToSend, strlen(dataToSend));
  //    delay(5000);

  //SAMPE DATA BENAR COOK========================================>
  // char dataToSend[9] = {speed, limiter1, limiter2, limiter3};
  //  char dataToSend[2];
  //  uint8_t dataToHex =  (dataToSend[4],HEX);
    // char hexString[9];  // Buffer untuk menampung string heksadesimal, 8 karakter + null terminator

    // Konversi setiap variabel ke string heksadesimal

    // Kirim string heksadesimal melalui UART
    
    // erial2.write(dataToSend, sizeof(dataToSend));
   
  //  uint8_t dataToSendHex = (dataToSend(),HEX);
    
    //  Serial2.print(dataToSend[0xff,0xff,0xff,0xff],HEX);
// Serial2.print::write(dataToSend(),sizeof(dataToSend),HEX);
    //  Serial2.print("Sent data: ");
     
  // for (int speed = 0; speed < 100; i++) {
  //   Serial2.print(dataToSend[i],HEX);
  //   delay(5000);
  // // //   // if (i < 3) Serial.print(", ");
  // }
  // // Serial2.println();
    // Serial2.print(dataToSend ,HEX);
    // delay(5000);
    // uint8_t dataArray;
    // // static_cast<char>(dataArray);
    // char dataAri = static_cast<char> (dataArray);

    // char dataAri [9] = {0,1,2,3};
}

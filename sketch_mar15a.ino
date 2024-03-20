void setup() {
  ADMUX |= B00000100; //A4 pin connected to ADC
  ADMUX |= B11000000; //internal ref selected
  DDRB |= B00000100;
  //PINB = 
  Serial.begin(9600);
}

void loop() {

  //ADCSRA |= B11000000;
  //PORTB |= B00000100;
  int value = (PINB >> 2 & B00000100 >> 2);
  if(value) Serial.println("HIGH");
  else Serial.println("LOW");
  /*while(bit_is_set(ADCSRA,ADSC));
  int val = ADCL | (ADCH << 8);
  Serial.println(val); */
}

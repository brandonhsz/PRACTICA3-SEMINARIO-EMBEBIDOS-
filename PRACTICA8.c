#define HIGH 1
#define LOW 0
#define TIME colocaTiempo

sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;


void configMicro();

void main() {

  configMicro();
  Lcd_init();
  delay_ms(100);

  while(HIGH){
     Lcd_out(1,1,"Guadalajara ");
    //  Lcd_out_CP("Jalisco");
     Lcd_chr(2,1, "");
     Lcd_out_CP("Jalisco");
  }
}

void configMicro() {
  ANSEL = LOW;
  ANSELH = LOW;
  C1ON_BIT = LOW;
  C2ON_BIT = LOW;
  TRISA = LOW;
  TRISB = LOW;
  TRISC = LOW;
  TRISD = LOW;
  TRISE = LOW;
  PORTA = LOW;
  PORTB = 0x00;
  PORTC = LOW;
  PORTD = LOW;
  PORTE = LOW;

  TRISC.F4 = HIGH;
}
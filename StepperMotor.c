/*#include <xc.h>
#pragma config BOREN = OFF, CPD = OFF, WRT = OFF, FOSC = HS, WDTE = OFF, CP = OFF, LVP = OFF, PWRTE = OFF 


#define _XTAL_FREQ 20000000
#define TMR0_VAL 100 


#define STEP0   0b00111100
#define STEP1   0b00101110
#define STEP2   0b00101011
#define STEP3   0b00100111
#define STEP4   0b00110101
#define STEP5   0b00010111
#define STEP6   0b00011011
#define STEP7   0b00011110

signed char currentStep = 0;

void setup (void){
    TRISC = 0x00;
    PORTC = 0x00;
    

}

void move (char steps){
    switch (currentStep){
        case 0: 
            PORTC = STEP0;
            currentStep++;
            break;
        case 1: 
            PORTC = STEP1;
            currentStep++;
            break;
        case 2: 
            PORTC = STEP2;
            currentStep++;
            break;
        case 3: 
            PORTC = STEP3;
            currentStep++;
            break;
        case 4: 
            PORTC = STEP4;
            currentStep++;
            break;
        case 5: 
            PORTC = STEP5;
            currentStep++;
            break;
        case 6: 
            PORTC = STEP6;
            currentStep++;
            break;
        case 7: 
            PORTC = STEP7;
            currentStep++;
            break; 
        default:
            PORTC = 0x00;
            break;
    }
}

void main (void) {
    setup ();
    while(1){
        
        for(steps = 0, 7, steps++){
            move(steps);
        }            
    }
}
*/
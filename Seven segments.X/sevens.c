/*
 * File:   sevens.c
 * Author: uwimana
 *
 * Created on July 30, 2021, 3:51 AM
 */


#define _XTAL_FREQ 800000000

#include <xc.h>

void main(void) {
    
        char seg_code[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
        
        TRISC=0x00;
        
        while(1){
            for(int k=0; k<=9;k++){
                PORTC=seg_code[k];
                __delay_ms(10);
            }
        }
}
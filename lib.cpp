#include "lib.h"

char uno(char b){
    bool r;
    char d;
    if((65<=b && b<=90)||(97<=b && b<=122)){
       r=true;
        if((65<=b) && (b<=90)){
            d=b+32;
        }else if((97<=b)&&(b<=122)){
            d=b-32;
        }
    }else{
        r=false;
        d=1;
    }
    return d;
}

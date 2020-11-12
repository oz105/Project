#include "myMath.h"
#define EXP 2.71828182846

double Exp(int x) {
    if(x==0) return 1 ;
    double res = 1.0 ;
    if(x > 0){
    	for (int i = 0; i < x; i++) {
        res = res * EXP ;
    	}
    	return res ;
    }
    else {
    	for (int i = 0; i > x; i--) {
        res = res * EXP ;
   	 }
    	return 1/res ; // if x < 0 
    }
    
}

double Pow(double x , int y) {
    if(y==0) return 1 ;
    if(x==0) return 0 ; 
    double res = 1.0 ;
    if(y > 0){
    	for (int i = 0; i < y; i++) {
        	res = res * x ;
    	}
    	return res ;
    }
    else {
    	for (int i = 0; i > y; i--) {
    		res = res * x ;
   	}
   	return 1/res ; // if x < 0 
    }
}

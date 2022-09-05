#include "fundamentals_1.hpp"

int addToArrayAsc(float sortedArray[], int numElements, float newValue) {
    // TODO

    int arraySize=numElements;
    //sortedArray[numElements]=newValue;
    //apparently this doesnt work because it wants us to sort things which is lame
    
    float qValue=newValue;//the local variable for holding the current comparing value
    float cValue=sortedArray[0];//the current value in the array
   // float sValue=0;;//the temp storage value for when we need to swap the places
    
    //get the value from the array and compare it to new value
    //if new value bigger than current array value go on to the next one
    //if it isn't bigger, then you have to insert the new value here
    
    for (int i=0;i<arraySize;i++){
        
     cValue=sortedArray[i];   
     
        if(qValue<cValue){
        
         sortedArray[i]=qValue;
         qValue=cValue;
         
     }
        
    }
    
    
    arraySize++;
    return arraySize;
}


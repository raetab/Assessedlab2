#include <stdio.h>
#include <stdlib.h> 
#include <limits.h>



int main() { 
    float image[5][5][3];
    int x, y;
    float r, g, b; //the individual colour intensity
    float rgb; // the mean to produce the greyscale image
 srand(0);
for(y = 0; y < 5; y++) {
    for(x = 0; x < 5; x++) { 
        image[x][y][0] = (float)rand()/(float)INT_MAX; //r
        image[x][y][1] = (float)rand()/(float)INT_MAX; //g
        image[x][y][2] = (float)rand()/(float)INT_MAX; //b
        
    } 
  } 


for(y=0; y < 5; y++){
   for (x=0; x<5; x++){
        r = image[x][y][0];
        g = image[x][y][1];
        b = image[x][y][2];
        
        rgb = (r+b+g)/3.0
        r = rgb; 
        g = rgb;
        b = rgb;
        printf("%d, %d, %f, %f, %f\n" x, y, r, g, b)
                    
}
    
}


return 0;
}

//
//  main.c
//  cards
//
//  Created by Krishna Picart on 6/13/15.
//  Copyright (c) 2015 Krishna Picart. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ex[20];
    puts ("Enter boyfriendsname:");
    scanf ("%79s",ex);
    printf("Dear %s\n\n\n\t Your history,",ex);
 
    
    
    {
        
        char card_name[3];
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        
        int val = 0;
        
        if (card_name[0]=='K') {
            val = 10;
        }else if (card_name[0] == 'Q') {
            val = 10;
        }else if(card_name[0] == 'J') {
            val =  10;
        } else if(card_name[0] == 'A'){
            val = 10;
        } else {
            val = atoi(card_name);
        }
        printf("The card value is: %i\n",val);
        
    }
    
        return 0;
}

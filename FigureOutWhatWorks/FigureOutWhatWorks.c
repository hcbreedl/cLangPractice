//
//  FigureOutWhatWorks.c
//  
//
//  Created by Houston Breedlove on 5/16/17.
//
//

#include <stdio.h>

//This outputs "Small card" but isn't working correctly because the else is attached
//to the wrong if statement
//
//int main ()
//{
//    int card = 1;
//    if (card > 1)
//        card = card - 1;
//        if (card < 7)
//            puts("Small card");
//    else {
//        puts("Ace!");
//    }
//    return 0;
//}

//Compiles successfully but doesn't output anything
//because the else is matched to the wrong if statement
//
//int main()
//{
//    int card = 1;
//    if (card > 1) {
//        card = card - 1;
//        if (card < 7)
//            puts("Small card");
//    else {
//        puts("Ace!");
//    }
//        return 0;
//    }
//}

//Compiles and working correctly
//
int main() {
    int card = 1;
    if (card > 1) {
        card = card - 1;
        if (card < 7)
            puts ("Small card");
    } else
        puts ("Ace!");
    
    return 0;
}

//Code won't compile because braces aren't matched
//
//int main()
//{
//    int card = 1;
//    if (card > 1) {
//        card = card - 1;
//        if (card < 7)
//            puts("Small card");
//    else
//        puts("Ace!");
//        
//    return 0;
//}

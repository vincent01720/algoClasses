/******** ADD YOUR OWN HEADER COMMENT *********/

/*************************************************************** 
 * I BELIEVE YOU'LL NEED TO INCLUDE ALL OF THESE HEADER FILES; *
 *   FEEL FREE TO MODIFY THIS LIST AS NEEDED                   *
 ***************************************************************/
#include "Queue.h"
#include "QItem.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

   /****************************************************************
    * VARIABLE DECLARATIONS SHOULD INCLUDE (BUT NOT BE LIMITED TO):
    *   - VARIABLES TO READ FROM THE FILE (INPUT STREAM, STRING FOR NAME,
    *       ETC.)
    *   - TWO QUEUES REPRESENTING THE TWO LANES YOU'RE MODELING
    *   - AT LEAST ONE TEMPORARY QItem VARIABLE TO STORE USER INPUT
    *       BEFORE ADDING IT TO EACH "LANE"
    *       (YOU MAY WANT A SECOND TEMP VARIABLE SO YOU CAN USE THE
    *        TEMP VARIABLES TO REPRESENT THE CUSTOMERS YOU'RE 
    *        SERVING, AND HAVE THE QUEUES JUST HOLD WAITING CUSTOMERS)
    *   - A VARIABLE TO COUNT TIME
    *   - SOMETHING TO TRACK (1) WHETHER YOU'RE SERVING A CUSTOMER FROM
    *        EACH QUEUE AND (2) HOW LONG THAT CUSTOMER HAS LEFT
    * ***************************************************************/

   /*****************************************************************
    * START WITH FILE HANDLING AS DESCRIBED IN THE SPEC
    *   (THE TEST CASES ARE DESIGNED SO YOU CAN TEST THE FILE HANDLING
    *    WITHOUT IMPLEMENTING ANYTHING ELSE IN THE REST OF THE PROGRAM!)
    * ***************************************************************/
    
   /*****************************************************************
    * THEN, ADD THE LOOP THAT TRACKS TIME AND HANDLES CUSTOMER SERVICE
    * ***************************************************************/
    ifstream in1;      // Input file stream
    char inval;              // Input value
    int myInt1;
    int myInt2;
    string filename;
    //cout << "Enter input file name: ";
    //cin >> filename;
    int n = 1;

    in1.open("file1.txt");
    while (in1 >> inval >> myInt1 >> myInt2) {
        // do something to process input
        // cout << "-------*****---------" << endl;
        /* cout << inval;
        cout << myInt1;
        cout << myInt2;
        cout << endl; */
        cout << "Customer " << n << " to ";
        if(inval=='E'){
            cout << "express lane ";
        }
        else if(inval == 'N')
        {
            cout << "normal lane ";
        }
        else
        {
            cout << "Wrong input!";
            break;
        }
        n += 1;
        printf("(A = %i, S  = %i)", myInt1, myInt2);
        cout << endl;


        // Start the queue
    }
    in1.close();
    return 0;
}
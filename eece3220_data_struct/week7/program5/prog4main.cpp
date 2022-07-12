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
    int myInt1; // Arrival Time
    int myInt2; // Service Time
    string filename;
    cout << "Enter input file name: ";
    cin >> filename;
    int n = 1;
    //filename = "file1.txt";
    in1.open(filename);
    printf("Reading %s... \n", filename.c_str());
    Queue <unsigned> normal_lane, express_lane;
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
            express_lane.enqueue(myInt1);
        }
        else if(inval == 'N')
        {
            cout << "normal lane ";
            normal_lane.enqueue(myInt1);
        }
        else
        {
            cout << "Wrong input!";
            break;
        }
        n += 1;
        printf("(A = %i, S  = %i)", myInt1, myInt2);
        cout << endl;
    }
    printf("Done reading %s \n", filename.c_str());
    in1.close();
    //QItem item1(1,1,1);
    //cout << "Arrival time: " <<item1.GetarrTime() << endl;
    //cout << "Current normal lane's front: " << normal_lane.getFront() << endl;
    //cout << "Current express lane's front: " << express_lane.getFront() << endl;
    
    int i = 1;
    // n is total number of customers
    int customer_number = 1;
    int arrival_time = 0;
    int service_time = 0;
    int time_to_next_normal = 0, time_to_next_exp = 0;
    int normal_diff = 0, exp_diff = 0;
    while(!normal_lane.empty() || !express_lane.empty()){

        QItem item1(customer_number, arrival_time, service_time);
            //Services the person in front, pops when finished
        if (normal_lane.getFront() != 0 && item1.GetsvcTime()==0)
        {
            normal_lane.dequeue();
            cout << "Normal Dequeue!" << endl;
        }
            
        if (express_lane.getFront() != 0)
        {
            express_lane.dequeue();
            cout << "Express Dequeue!" << endl;
        }
            
        
        //Updates times for the next iteration
        i++;
        time_to_next_exp--;
        time_to_next_normal--;
        if (normal_lane.getFront() != 0)
            normal_lane.getFront();
        if (express_lane.getFront() != 0)
            express_lane.getFront();

        //Updates service time
    }
    cout << "Done serving all the customers" << endl;

    return 0;
}
    #include <iostream>
    using namespace std;

    int main () {

        int start;

        int goal;

    while(cin >> start >> goal) {

        int cycle_length = 1;
        int max_cycle_length = 1;

        int lower;
        int upper;

        if (goal < start) {
            upper = start;
            lower = goal;
        } else {
            upper = goal;
            lower = start;
        }

        for(int number = lower; number <= upper; number++){

        int analyzed_number = number;

                //cout << endl << i << endl << "|" << endl;

        while(analyzed_number != 1) {

        if(analyzed_number % 2 == 0) {

                analyzed_number = analyzed_number / 2;

        }else{

                analyzed_number = 3 * analyzed_number + 1;


        }

                    //  cout << i << " ";

                cycle_length++;

        }

        if (cycle_length > max_cycle_length) {

            max_cycle_length = cycle_length;
        }

               // cout <<  "(" << x << ")" << endl;

        cycle_length = 1;

        }

            //cout << endl << "(" << maxn << ")" << endl;

            cout << start << " " << goal << " " << max_cycle_length << endl;

        }

            return 0;
        }

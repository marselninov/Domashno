#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int day;
	 
	cout << "Day:";
	cin >> day;
	
	
 switch ( day ) {  
    case 1:
		cout << "Monday";
		break;  
	case 2:  
		cout << "Tuesday";
		break; 
    case 3:
		cout << "Wendnesday";
    	break;  
    case 4:  
		cout << "Thursday";
    	break;
    case 5:
		cout << "Friday";
    	break;  
    case 6:  
		cout << "Saturday";
    	break;
    case 7:
		cout << "Sunday";
    	break;  
 
        default:  
    cout << "Invalid Number"; return -1;  
      }  

return 0;
}

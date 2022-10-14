#include <iostream>
using namespace std;

void towersOfHanoi(int n, char source, char dest){	
	if(n==0)
		return ;		
							
    char temp = ('A'+'B'+'C') - source - dest;
    
    //Move N-1 disks from source to temp
    towersOfHanoi(n-1, source, temp);
    
    //Move Nth disk from source to dest
    cout << "Moving ring "<<n<<" from "<<source<<" to "<<dest << endl;
    
    //Move N-1 disks from temp to dest
    towersOfHanoi(n- 1, temp, dest);
}
int main() {
    int n;
    cin>>n;
    towersOfHanoi(n, 'A', 'B');					//move n disks from A to B
    return 0;
}
/* Actual function to cal 2^n1 + 2^n2 + 2^n3 */

int Power2(int n){

	int j = 1;//call a integer j to cal
	while(n > 0){//the n decided how many times should the 2 being multiplied
			j *= 2;
			n--;
		}
		return j;//return the value to main function
	}
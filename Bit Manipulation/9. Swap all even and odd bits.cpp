class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	// Your code here
    	unsigned int e=n&0xAAAAAAAA;        //get all even bits
    		unsigned int o=n&0x55555555;    //get all odd bits
    		e>>=1;                   //right shift
    		o<<=1;                  //left shift
    		return e|o;
    	
    }

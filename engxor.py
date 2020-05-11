import atexit
import io
import sys
_INPUT_LINES = sys.stdin.read().splitlines()
raw_input = iter(_INPUT_LINES).next
_OUTPUT_BUFFER = io.BytesIO()
sys.stdout = _OUTPUT_BUFFER
 
@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())
    
def takla():
    
    # cook your dish here
# from sys import stdin, stdout
    def stonks(n): 
      
        # base case 
        if (n == 0): 
            return 0
        else: 
            return 1 + stonks(n & (n - 1)) 
                  
    t = int(raw_input())
    while t :
        t-=1
        n , q = map(int,raw_input().split())
        noice = [int(o) for o in raw_input().split()]
        bazinga = 0 
        for chicken in noice :
            if stonks(chicken)%2==0 :
                bazinga+=1
        for _ in range(q) :
            mutton = int(raw_input())
            if stonks(mutton)%2==0 :
                print(str(bazinga)+" "+str(n-bazinga))
            else :
                print(str(n-bazinga)+" "+str(bazinga)) 
    
if __name__ == "__main__":
	takla()
// method 1
class Solution {
    public int getSecondLargest(int[] arr) {

         int n = arr.length;
        int first = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;
        
        for(int num : arr){
            if(num>first){
                second = first;
                first = num;
                
            }else if( num>second && num != first){
                second = num;
            }
           
        }
        if (second != Integer.MIN_VALUE){
            return second;
        }
        else{
        return -1;
        }
        
        
    }
}



// method 2 easy 

class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
         // Sort the array in non-decreasing order
         int n = arr.length;
        Arrays.sort(arr);
        
        for(int i = n-2; i >=0; i--){
            
            if(arr[i]!=arr[n-1]){
                return arr[i];
            }
            
        }
        return -1;
        
        
    }
}
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        
        int result = Integer.MAX_VALUE;
       
         int start=0;
        int s=0;
        
        
        for(int i=0;i<nums.length;i++)
        {
            s +=num[i];
            
            while (val_sum >=s)
            {
                return = Math.min(result,i+1 =left);
                va_sum =nums[left];
                left++;
                
            }
        }
      return (result != Integer.MAX_VALUE) ? result :0;
    }
    
    
    }
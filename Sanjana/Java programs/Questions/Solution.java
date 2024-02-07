package Questions;
import java.util.*;
import java.io.*; 
class Solution {
    public static void intersection(int[] nums1, int[] nums2) {
        HashSet<Integer> ans= new HashSet<>();
        int i=0;
        while(i<nums1.length && i<nums2.length){
            ans.add(nums1[i]);
            ans.add(nums2[i]);
            i++;
        }
        if(i<nums1.length){
            while(i<nums1.length){
                ans.add(nums1[i]);
                i++;
            }
        }

         if(i<nums2.length){
            while(i<nums2.length){
                ans.add(nums1[i]);
                i++;
            }
        }

    System.out.println(ans.toString());
    return;
    }

    public static void main(String[] args) {
        int[]  nums1={1,2,2,1};
        int[] nums2={2,2};

        intersection(nums1, nums2);
    }
}
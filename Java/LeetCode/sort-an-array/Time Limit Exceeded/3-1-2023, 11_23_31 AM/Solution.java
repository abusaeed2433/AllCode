// https://leetcode.com/problems/sort-an-array

class Solution {
    private int[] arr;
    public int[] sortArray(int[] nums) {
        arr = nums;
        quickSort(0,nums.length-1);
        return nums;
    }
 
    void swap(int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
 
    int partition(int low, int high)
    {
 
        int pivot = arr[high];
        int i = (low - 1);
 
        for (int j = low; j < high; j++) {
 
            if (arr[j] < pivot) {
                i++;
                swap(i, j);
            }
        }
        swap(i + 1, high);
        return (i + 1);
    }
 
    void quickSort(int low, int high)
    {
        if (low < high) {
            int pi = partition(low, high);
            quickSort(low, pi - 1);
            quickSort(pi + 1, high);
        }
    }
}
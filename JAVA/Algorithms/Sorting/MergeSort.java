class Solution {
  public int[] sortArray(int[] nums) {
    mergeSort(nums, 0, nums.length - 1);
    return nums;
  }
  public static void mergeSort(int[] nums, int s, int e) {
    //Return when the start and end is on the same element.
    if (s == e) return;
    //Finding the middle index.
    int m = (s + e) / 2;
    //Dividing the array by half and recursively calling for each half.
    mergeSort(nums, s, m);
    mergeSort(nums, m + 1, e);
    merge(nums, s, e);
  }
  public static void merge(int[] nums, int s, int e) {
    int m = (s + e) / 2;
    int i = s, n = m + 1, k = 0;
    //New array is  created to merge the two halves by sorting.
    int[] arr = new int[e - s + 1];
    while (s <= m && n <= e) {
      if (nums[s] < nums[n]) {
        arr[k++] = nums[s++];
      } else {
        arr[k++] = nums[n++];
      }
    }
    //Adding the leftover elements of an half.
    while (s <= m) arr[k++] = nums[s++];
    while (n <= e) arr[k++] = nums[n++];
    //Modifying the original array by adding the merged part back.
    for (int p: arr) nums[i++] = p;
  }
}

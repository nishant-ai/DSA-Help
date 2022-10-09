# Minimum swaps and K together
##  Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>arr</strong> of <strong>n</strong> positive integers and a number&nbsp;<strong>k</strong>. One can apply a swap operation on the array any number of times, i.e choose any two index i and j&nbsp;(i &lt; j) and swap arr[i] , arr[j] . Find the&nbsp;<strong>minimum</strong>&nbsp;number of swaps required to bring all the numbers less than or equal to&nbsp;<strong>k</strong>&nbsp;together, i.e. make them a contiguous&nbsp;subarray.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> 
arr[ ] = {2, 1, 5, 6, 3} 
K = 3
<strong>Output :</strong> 
1
<strong>Explanation:</strong>
To bring elements 2, 1, 3 together,
swap index 2 with 4 (0-based indexing),
i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be- 
arr[] = {2, 1, 3, 6, 5}
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> 
arr[ ] = {2, 7, 9, 5, 8, 7, 4} 
K = 6 <strong>
Output :</strong>  
2 
<strong>Explanation:</strong> 
To bring elements 2, 5, 4 together, 
swap index 0 with 2 (0-based indexing)
and index 4 with 6 (0-based indexing)
such that final array will be- 
arr[] = {9, 7, 2, 5, 4, 7, 8}</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>minSwap()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, an integer <strong>K,</strong>&nbsp;and return the minimum swaps required. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ Arr<sub>i</sub>, K&nbsp;≤10<sup>7</sup></span></p>

<div id="gtx-trans" style="position: absolute; left: 128px; top: 279px;">
<div class="gtx-trans-icon">&nbsp;</div>
</div>
 <p></p>
            </div>
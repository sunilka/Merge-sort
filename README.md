# Merge-sort
Merge sort algorithm for sorting the two arrays


MergeSort(arr[], l,  r)<br/>
<br/>
If r > l
<br/>
     <li>1. Find the middle point to divide the array into two halves:  </li>
             <br/>middle m = (l+r)/2
     <li>2. Call mergeSort for first half:   </li>
             <br/>Call mergeSort(arr, l, m)
     <li>3. Call mergeSort for second half:  </li>
             <br/>Call mergeSort(arr, m+1, r)
     <li>4. Merge the two halves sorted in step 2 and 3: </li>
             <br/>Call merge(arr, l, m, r)
</ul>

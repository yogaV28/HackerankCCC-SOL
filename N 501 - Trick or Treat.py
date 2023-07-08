//python3
def iterativeBinarySearch(array, start_index, end_index, element):
   while start_index <= end_index:
      middle = start_index + (end_index - start_index) // 2
      if array[middle] == element:
         return middle
      if array[middle] < element:
         start_index = middle + 1
      else:
         end_index = middle - 1
   return -1

def merge(arr, l, m, r):
   n1 = m - l + 1
   n2 = r - m
   L = arr[l : l + n1]
   R = arr[m + 1 : m + 1 + n2]
   i = 0
   j = 0
   k = l
   while i < n1 and j < n2:
      if L[i] <= R[j]:
         arr[k] = L[i]
         i += 1
      else:
         arr[k] = R[j]
         j += 1
      k += 1
   while i < n1:
      arr[k] = L[i]
      i += 1
      k += 1
   while j < n2:
      arr[k] = R[j]
      j += 1
      k += 1

def mergeSort(arr, l, r):
   if l < r:
      m = l + (r - l) // 2
      mergeSort(arr, l, m)
      mergeSort(arr, m + 1, r)
      merge(arr, l, m, r)

a = int(input())
arr = [int(input()) for _ in range(a)]
mergeSort(arr, 0, a - 1)

b = int(input())
brr = [int(input()) for _ in range(b)]

for i in range(b):
   flag = 0
   if iterativeBinarySearch(arr, 0, a - 1, brr[i]) != -1:
      flag = 1
   if flag == 1:
      print("Happy Halloween!")

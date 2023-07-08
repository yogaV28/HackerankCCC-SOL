//python3
import sys
import bisect

def main():
    # Enter your code here. Read input from STDIN. Print output to STDOUT
    a = int(input())
    arr = list(map(int, input().split()))
    tar = int(input())
    count = 0
    arr.sort()
    i = 0
    while i < a:
        k = tar - arr[i]
        if bisect.bisect_left(arr, k) != bisect.bisect_right(arr, k):
            count += 1
        i += 1
    print(count)

if __name__ == "__main__":
    main()

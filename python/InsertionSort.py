# 問題1: Insertion Sort を使って、整数配列 [12, 11, 13, 5, 6] をソートしてください。


def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# テスト
arr = [9, 5, 1, 4, 3]
print("ソート前:", arr)
print("ソート後:", insertion_sort(arr))

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))

    unique = list(set(arr))
    unique.sort()

    print(unique[-2])

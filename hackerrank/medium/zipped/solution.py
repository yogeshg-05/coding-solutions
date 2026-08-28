N, X = map(int, input().split())

marks = []

for _ in range(X):
    marks.append(list(map(float, input().split())))

for student in zip(*marks):
    print(sum(student) / X)

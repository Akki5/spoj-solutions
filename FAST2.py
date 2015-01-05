arr = [0] * 501; arr[0] = 1
DIV = 1298074214633706835075030044377087

for i in range(1, 501):
    arr[i] = (arr[i-1] + 2 ** i) % DIV

for turn in range(input()):
    print arr[input()]

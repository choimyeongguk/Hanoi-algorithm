def move(N, start, to):
  print("%d번째 원반을 %c에서 %c로 이동"%(N, start, to))

def hanoi(N, start, to, via):
  if(N==1):
    move(N, start, to)
  else:
    hanoi(N-1, start, via, to)
    move(N, start, to)
    hanoi(N-1, via, to, start)

num = int(input("원반의 개수를 입력하세요: "))
print("\n")
hanoi(num, 'A', 'B', 'C')

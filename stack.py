class Stack:
  def __init__(self, size):
    self.size = size
    self.arr = [None] * self.size #size 크기로 리스트 만들기
    self.top = -1

  def isEmpty(self):
    return self.top==-1

  def isFull(self):
    return self.size-1 == self.top

  def push(self, data):
    if not self.isFull():
      self.top += 1
      self.arr[self.top] = data
    else:
      print('오버플로우')

  def pop(self):
    if not self.isEmpty():
      t = self.arr[self.top]
      self.arr[self.top] = None
      self.top -= 1
      return t
    else:
      print("스택이 비어 있습니다.")

  def display(self):
    print(self.arr)
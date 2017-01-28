int sumOfSq(int N) {
  int sum = 0;
  for (size_t i = 1; i <= N; i++) {
    sum += i*i;
  }
  return sum;
}

int sqOfSum(int N) {
  int sum = 0;
  for (size_t i = 1; i <= N; i++) {
    sum += i;
  }
  return sum*sum;
}

int diffs(int N) {
  return sqOfSum(N)-sumOfSq(N);
}

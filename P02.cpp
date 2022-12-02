int main() {
  string s1, s2;
  int i1, i2, own, sum = 0, score1[3] = {1,2,3};

  while(cin >> s1 >> s2) {
    i1 = s1[0]-'A';
    i2 = s2[0]-'X';

    switch(i2) {
    case 0: // Lose
      sum += 0;
      own = (i1+2)%3;
      break;
    case 1: // Draw
      sum += 3;
      own = i1;
      break;
    case 2: // Win
      sum += 6;
      own = (i1+1)%3;
      break;
    }
    sum += score1[own];

    /*
      // Task 1: Use this code instead for updating sum:
      if(i1 == i2) {
        sum += 3; // Draw
      }
      else if(i1 == (i2+2)%3) {
        sum += 6; // Win
      }
      sum += score1[i2];
     */
  }
  cout << sum << endl;
} // int main
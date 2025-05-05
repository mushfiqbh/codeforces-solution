int remainder = N % 3;

int result;
if (remainder == 0) {
    result = N;
} else if (abs(remainder) == 1) {
    result = N - remainder;
} else { // abs(remainder) == 2
    if (N > 0) result = N + 1;
    else result = N - 1;
}

cout << result << endl;
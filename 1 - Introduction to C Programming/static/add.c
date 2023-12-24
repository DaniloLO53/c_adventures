int other; // it is initialized with 1

int increment() {
  int var = 3;
  int garb; // it is initialized with garbage
  static int count; // only avaliable to this file and
  // initialized with 0 due to static
  // static int count2 = var; // ERROR - it must be initialized with
  // a contant value
  count += 1;
  return count;
}
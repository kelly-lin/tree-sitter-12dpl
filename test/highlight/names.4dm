Integer main(Real a, Text b) {
  // <- type
  //    ^ function
  //          ^ type
  //              ^ parameter
  //                  ^ type
  //                      ^ parameter

  return foo + bar();
  // ^ keyword

error:
  // <- label
  return 0;
}

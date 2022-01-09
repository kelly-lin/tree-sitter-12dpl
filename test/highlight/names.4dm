Integer main(Real a) {
  // <- type
  //    ^ function
  //          ^ type
  //              ^ variable

  return foo + bar();
  // ^ keyword
  //     ^ variable
  //             ^ function

error:
  // <- label
  return 0;
}

/*
* 1. Implement an algorithm to determine if a string has all unique characters.
* 2. What if you can not use additional data structures
*/

import 'dart:io';

void main(List<String> args) {
  print(partOne(args[0]));
  print(partTwo(args[0]));
}

// Uses a hashmap to store chars
bool partOne(String str) {
  var dupMap = {};
  for(int i=0; i < str.length; i++) {
    if(dupMap.containsKey(str[i])) {
      return false;
    } else {
      dupMap[str[i]] = 0;
    }
  }
  return true;
}

bool partTwo(String str) {
  // Converting string to a list of chars.
  // C++ is probably a better language for this problem
  List<String> chars = str.split('');
  chars.sort();
  String prev = chars[0];
  for(int i=1; i < chars.length; i++) {
    if(prev == chars[i]) {
      return false;
    }
    prev = chars[i];
  }
  return true;
}
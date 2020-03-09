#!/usr/bin/env python3

"""
You're working with an intern that keeps coming to you with JavaScript code 
that won't run because the braces, brackets, and parentheses are off. To save 
you both some time, you decide to write a braces/brackets/parentheses validator.

Let's say:

'(', '{', '[' are called "openers."
')', '}', ']' are called "closers."
Write an efficient function that tells us whether or not an input string's 
openers and closers are properly nested.

Examples:

"{ [ ] ( ) }" should return True
"{ [ ( ] ) }" should return False
"{ [ }" should return False
"""

def checkBrackets(str):
    m = {
        ')': '(',
        '}': '{',
        ']': '['
    }
    stack = []
    for c in str:
        if c in ('(', '{', '['):
            stack.append(c)
        elif c in (')', '}', ']'):
            if stack.pop() != m[c]:
                return False

    if len(stack) == 0:
        return True
    else:
        return False


print(checkBrackets('{[()()]}{}{}'))


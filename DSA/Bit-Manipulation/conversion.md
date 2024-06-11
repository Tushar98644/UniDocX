# Introduction

The fundamental unit of data storage in computers is the bit, which can hold either a 0 or a 1.
Bits are grouped into `bytes` (8 bits), and these bytes can be organized into higher-level data structures like integers, floating-point numbers, strings, and more complex data types depending on the programming language and the application's requirements.

# Storing Strings in Binary

Strings are sequences of characters, and each character can be represented in binary using a character encoding scheme. The most common encoding schemes are `ASCII` and `Unicode` (UTF-8, UTF-16, UTF-32).

# Example: Storing the String "Hello"
Let's see how the string "Hello" would be stored in a computer using ASCII encoding:

H -> 01001000\
e -> 01100101\
l -> 01101100 (repeated twice for 'll')\
o -> 01101111\
So, "Hello" would be stored as `01001000 01100101 01101100 01101100 01101111`

# Storing Strings in Binary

Integers are typically stored in fixed-size formats, such as 8-bit (byte), 16-bit (short), 32-bit (integer), or 64-bit (long) sizes, depending on the architecture and programming language specifications.

# Example: Storing the Integer 42
Let's convert the integer 42 into binary:

Divide the number by 2 and record the remainder.
Continue dividing the quotient by 2 until the quotient is 0.
Read the remainders in reverse order to get the binary representation.
For 42:

42 / 2 = 21 remainder 0\
21 / 2 = 10 remainder 1\
10 / 2 = 5 remainder 0\
5 / 2 = 2 remainder 1\
2 / 2 = 1 remainder 0\
1 / 2 = 0 remainder 1\
Reading the remainders in reverse order gives `101010`, which is the binary representation of 42.

Fixed-Size Representation
In practice, integers are often stored in a fixed number of bits. For example, in a 32-bit integer format, the number 42 would be padded with zeros to fill the 32 bits:

```
00000000 00000000 00000000 00101010
```

# Conversion from Binary to Decimal ans vice versa 

```c++
#include <iostream>
#include <algorithm>

using namespace std;

class convert
{
private:
    string s;

public:
    int convertToDecimal(string s)
    {
        int ans = 0;
        int multiplier = 1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                ans += multiplier;
                multiplier = multiplier * 2;
            }
            else if (s[i] == '0')
            {
                continue;
            }
            else
            {
                cout << "The string is not valid";
                return -1;
            }
        }
        return ans;
    }

    string convertToBinary(int n)
    {
        string res = "";

        if (n == 0)
            return "0";
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                res += '1';
            }
            else
            {
                res += '0';
            }
            n = n / 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    int x;
    string s;

    cout << "Enter the number" << endl;
    cin >> x;

    cout << "Enter the string" << endl;
    cin >> s;

    convert conversion;
    string binary = conversion.convertToBinary(x);
    int decimal = conversion.convertToDecimal(s);
    cout << "The converted binary string is " << binary << endl;
    cout << "The converted Decimal number is " << decimal << endl;
}
```

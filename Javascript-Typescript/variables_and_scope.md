## Scope
There are three kinds of scope in javascript : `Functional` , `global` and `block`

| var      | let | const |
| :---        |    :----:   |          ---: |
| functional or global scope      | block scope       | block scope   |
| redeclareable      | not redeclareable       | not redeclareable   |
| can be declared without initialization      | can       | must be initialized at the time of declaration   |
| can be updated      |  can be updated      | cnnot be updated   |

#### Eg -

var a = 5 -> `we can access this a anywhere`

function adder()
{
    let b = 7
    console.log(a + b)
 }
 
console.log(adder())

console.log(b)   -> `Error as b is not accessible outside the function`

{
const c = 10
console.log(c) 
}

console.log(c) -> `Error as c is not accessible outside the block`

## Equality and strict Equality operator
`==` checks only for the value whereas `===` checks for the value + type

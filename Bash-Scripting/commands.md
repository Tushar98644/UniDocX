## grep 

_grep stands for "Global Regular Expression Print." It is primarily used for searching text using regular expressions_

Eg- 

```bash
 grep -n "name" package.json
// command

2:  "name": "project_hub",
// output
```
## awk 

_awk is a versatile programming language designed for text processing and data extraction. It's often used for processing structured text files._

```bash
grep -n "name" package.json | awk '{print $3}'
// command

"project_hub",
// output
```
## cut 

_The cut command is a Unix and Linux command-line utility used to extract sections from each line of a file or input data. It is particularly useful for working with text data that is delimited by a specific character._

```bash
grep -n "name" package.json | cut -d ' ' -f 4
// command

"project_hub",
// output
```
`Note` - _Use all commands together to achieve a desired result_

```bash
grep -n "name" package.json | awk '{print $3}' | cut -d ',' -f 1
// command

"projectHub"
// output
```

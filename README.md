# \_printf

## Synopsis

The **\_printf** function prints an output according to the format. This function write its output to the stdout.
It returns the count of printed characters when the function is successful and -1 when the function fails.

<div class="mxgraph" style="max-width:100%;border:1px solid transparent;" data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2021-11-10T03:06:35.723Z\&quot; agent=\&quot;5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.69 Safari/537.36\&quot; etag=\&quot;n0OHUQlEV8kWLpPajpRj\&quot; version=\&quot;15.7.1\&quot; type=\&quot;google\&quot;&gt;&lt;diagram id=\&quot;F6WVjcr6T2NX17tLffBY\&quot; name=\&quot;Page-1\&quot;&gt;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&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}"></div>
<script type="text/javascript" src="https://viewer.diagrams.net/js/viewer-static.min.js"></script>

## Usage

- All the files are to be compiled on Ubuntu 14.04 LTS.
- You must download all the files contained in this repository in order for this function to work.
- To use the \_printf function, create a file .c and you can use the following example to try:
<p> <b> _printf("This is a test"); </b> </p>
- Include the "main.h" header file on the functions using the \_printf.
- Compile your code with 'gcc -Wall -Werror -Wextra -pedantic \*.c'.

## Format

The **\_printf** function produces an output according to a format.

The available convertion specifiers are:

- %c: Prints a single character.
- %s: Prints a string of characters.
- %d: Prints base 10.
- %i: Prints integers.
- %%: Prints a single %.

## Example

    #include "main.h"
    #include <stdio.h>

    /**

- main- Prints anything
-
- Return: The number of arguments printed.
  \*/

  int main(void)
  {
  int a, b, c;
  char \*string;

  a = 10;
  b = 20;
  c = -50;
  string = "Hello world!";

  \_printf("This is my string: %s\n", string);
  \_printf("This is a [%d], and this is b [%d]\n", a, b);
  \_printf("This is c %d, and c is negative\n", c);
  \_printf("This is a single Character:[%c]\n", 'J');

  return(0);
  }

## Output

    This is my string: Hello world!
    This is a [10], and this is b [20]
    This is c -50, and c is negative
    This is a single Character:[J]

You can see more information consulting the **man_printf**, using this command:
**man ./man_printf**

### Authors 👨‍💻✒

- **<a href="https://www.linkedin.com/in/felipe-rivas-833863178/" target="_blank">Felipe Rivas</a>**

- **<a href="https://www.linkedin.com/in/ana-rocha-b98174216/" target="_blank">Ana Maria Rocha</a>**

#### This project was made for: <a href="https://www.holbertonschool.com/" target="_blank">Holberton School </a>

<a href="https://www.holbertonschool.com/">
<img src="https://thumbs.bfldr.com/at/x9m6pnbbn3cnnbr7kk4pr7mk/v/29396102?expiry=1637084372&fit=bounds&height=800&sig=OGMxNzBjYTgzMzE0YTNhY2YzNzIyYjgxMWJlNmQ5NjIxZjg2ZWI2Nw%3D%3D&width=1100" width=150" height="150" alt="Holberton School"  /></a>

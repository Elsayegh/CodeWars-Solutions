/*
Background
My TV remote control has arrow buttons and an OK button.

I can use these to move a "cursor" on a logical screen keyboard to type words...

The screen "keyboard" layout looks like this

a	b	c	d	e	1	2	3
f	g	h	i	j	4	5	6
k	l	m	n	o	7	8	9
p	q	r	s	t	.	@	0
u	v	w	x	y	z	_	/
Kata task
How many button presses on my remote are required to type a given word?

Notes
The cursor always starts on the letter a (top left)

Remember to also press OK to "accept" each letter.

Take a direct route from one letter to the next

The cursor does not wrap (e.g. you cannot leave one edge and reappear on the opposite edge)

Example
word = codewars

c => a-b-c-OK = 3
o => c-d-e-j-o-OK = 5
d => o-j-e-d-OK = 4
e => d-e-OK = 2
w => e-j-o-t-y-x-w-OK = 7
a => w-r-m-h-c-b-a-OK = 7
r => a-f-k-p-q-r-OK = 6
s => r-s-OK = 2
Answer = 3 + 5 + 4 + 2 + 7 + 7 + 6 + 2 = 36


*/

//Solution

#include <cmath>

using namespace std;

struct Point {int x,y;};

const std::string m_keyboard = "abcde123fghij456klmno789pqrst.@0uvwxyz_/";
const int keyboardWidth = 8;

Point indexOf(char c)
{
  std::size_t idx = m_keyboard.find(c);
  int x = idx % keyboardWidth;
  int y = ((idx-x) / keyboardWidth);
  return {x, y};
}

int tv_remote(const string &word)
{
    Point idx{0,0};
    int progress = 0;
    for(char c: word) {
      Point pos = indexOf(c);
      progress += std::abs(idx.x - pos.x) + std::abs(idx.y - pos.y) + 1;
      idx = pos;
    }
    
    return progress;
}

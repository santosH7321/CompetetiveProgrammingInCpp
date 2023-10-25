# Operator Concept

## Some types of operator is given:- 

1. Arithematic Operator

2. Relational Operator

3. Assignment Operator

4. Bitwise Operator

5. Logical Operator

6. Comma Operator 

7. Pre Post Operator

8. Unary Operator

9. sizeof Operator

10. Conditional / Ternery Operator

11. Dot / Aero Operator


## 1.  Arithematic Operator

#### They are used in mathematical expressions in a program. They function in the same way as they do in algebra.

` + ` , ` - ` , `* `, `/ `

#### Example : 

``` 
#include<iostream>
using namespace std;
int main() {
 int x = 5;
 int y = 10;
 int sum = x+y; // using additinsl operator 
 int diff = x-y; // using subtraction operator
 int div = y/x; // using division operator
 int product = x*y;
 cout << sum << endl;
 cout << diff << endl;
 cout << product << endl;
 cout << div << endl;
}

```

## 2.  Relational Operator
 
#### They are used to find mathematical relation among them

`== `, `< `,`> `, `<= `, `>= `, `!= `

#### Table : 
| Operator   | Description   | Example   |
| ---------  | ------------- | --------- |
| ==         | Is Equal To   | 4==5  returns false
| !=         | Not Equal TO  | 1!=5 returns true
| >          | Greater Than  | 1>5 returns false
| <          | Less Than     | 2<5 returns true
| >=         | Greater Than Or Equal To | 4>=5 returns false 
| <=         | Less Thank Or Equal To | 1<=5 returns false


## 3.  Assignment Operator 

#### It assigns the value of its right hand operator to a variable or property given by its left hand operator

`= `, `+= `, `-= `, `*= `, `/= `, `%= `

#### Exmple : 

| Operator | Example | Equivalent to |
| -------- | --------| -------------| 
| =       |  p = q  | p = q|
| += |  p+=q | p = p+q |
| -= | p -=q | p = p-q|
|*=|p *= q |p = p * q|
|/=| p /= q| p = p/q|
|%= | p %= q | p = p%q|
---

## 4. Logical Operator 

####  Logical operators are used for decision making. This class of operators is used to check whether an expression is true or false. Some of the commonly used logical operators are mentioned in the table below.

#### Exmple : 

| Operator | Example | Meaning |
| -------  | --------| --------|
| && (Logical AND)   | expression1 && expression2|true only if both expression1 and expression2 are true |
| (Logical OR) | expression1 && expression2 |true if either expression1 or expression2 is true |
| ! (Logical NOT) | !expression | true if expression is false and 
vice versa|
----


## 5. Bitwise Operator 

#### Example :

|Operator | Description |
| ------| ------ |
| ~ | Bitwise Complement |
| << | Left Shift |
| >> | Right Shift |
| >>> | Unsigned Right Shift |
| & | Bitwise AND |
| ^ | Bitwise Exclusive OR |
----


## Miscellaneous Operator 



| S.NO | Operator & Discription |
| ----| ---------| 
| 1. | `sizeof `This operator is used to compute the size of a variable. For example, sizeof(p) , where ‘p’ is integer, and will return 4. |
| 2. | `Condition ? Expression1 : Expession2 `Conditional operator Condition is true then it returns the value of Expression1 otherwise it returns the value of Expression2.|
| 3. | `,` Comma operator is a binary operator. The value of the entire comma expression is actually the value of the last expression of the comma-separated list.|
| 4. | `. (dot) ` and `-> (arrow) `Member operators are for reference individual members of classes, structures, and unions. The dot operator is used for the actual object. The arrow operator is used with a pointer to an object.|
| 5. | `& `Address-of operator & returns the memory address of a variable. For example &p; will give the actual memory address of the variable p.|
----

##  Operator Precedence and Associativity

#### 1. Operator precedence determines the order/sequence of evaluation of operators in an expression (analogous to BODMAS concept in math).

#### 2. Associativity specifies the order in which operators are evaluated by the compiler, which can be left to right or right to left.

#### Table :
| Category | Operator | Associativity |
|-----| -----| -----| 
| Postfix | `++ , --` | Left to right|
|Unary | `+ , -, ! , ~ , ++, -- `| Right to left |
|Multiplicative | `* , / , % `| Left to right |
|Additive | `+ , - `| Left to right|
|Shift | `<< , >> `| Left to right|
|Relational | `< , <= ,=> , > `| Left to right|
|Equality | `!= , == `| Left to right|
|Bitwise AND| `& `| Left to right |
|Bitwise OR | `OR ` | Left to right|
|Bitwise XOR | `^ ` | Left to right|
|Logical AND | `&& `| Left to right |
|Logical OR | `OR ` |Left to right |
|Conditional | `? : `| Right to left|
|Assingnment | `+= , -=, *= , /=, ^= `| Right to left|



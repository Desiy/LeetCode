# Problem  

> Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.  

    push(x) -- Push element x onto stack.
    pop() -- Removes the element on top of the stack.
    top() -- Get the top element.
    getMin() -- Retrieve the minimum element in the stack.

# Solution  

1.According to the requirement,we construct a stack to do operation that is similar between MinStack and stack.

2.For operating in constant time,construct a stack to record the minimum value as its top element.  

3.So when we push,pop,we considered whether we should do the same opreation in the other stack.  

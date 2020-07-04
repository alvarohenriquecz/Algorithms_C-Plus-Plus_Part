/**
 * 
 *@gaurav yadav
 
	 Maintain a stack
	a. If stack is empty  heights[stack.top()] <= heights[i])
		push this i into stack.
 	b. Else keep popooing from stack till value at i at top of stack is 
		less than value at current index.
	c. While popping calculate area
		if stack is empty 
			 area = i * heights[top];
			it means that till this point value just removed has to be smallest element
  		if stack is not empty 
			area = heights[top] * (i - stack.top() - 1);
			
 * Finally return maxArea
 * Time complexity is O(n)
 * Space complexity is O(n)
 */
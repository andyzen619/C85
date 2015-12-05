double averageX(ai){
	// initialize variables
	double xTemp, xTemp1, xTemp2, xSum;
	int count, divisor;
	count = 10;
	divisor = 10;

	xSum = abs(ai->st.ball->cx - ai->st.self->cx);

	while (count > 0) {
		xTemp1 = abs(ai->st.ball->cx - ai->st.self->cx);
		xTemp2 = abs(ai->st.ball->cx - ai->st.self->cx);
		xTemp = (xTemp1 + xTemp2)/2;
		xSum += xTemp;
		if (abs(xSum - xTemp) > 10) {
			count +=1
			divisor +=1
		} else {
			count -=1
		}
	}

	return xSum / divisor;
}


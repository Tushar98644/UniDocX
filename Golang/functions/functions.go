package functions

import (
	"errors"
)
func Opertion(operator1 int,operator2 int) (int,int,error){
	var err error;
	if (operator2 == 0){
		err = errors.New("cannot divide by zero");
		return 0,0,err;
	}
    var division int = operator1/operator2;
	var multiplication = operator1 * operator2;
	return division,multiplication,err;
}
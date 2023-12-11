step 1:start
step 2:read num1,num2,op
step 3:select case op of
      '+':result=num1+num2
      '-':result=num1-num2
      '*':result=num1* num2
      '/':if(num2!=0)
           result=num1/num2
          else go to step
      '%':if(num2!=0)
           result=num1%num2
          else go to step 4
    otherwise
          go to step 4
step 4:print "error"
step 5:print result
step 6:read choice
step 7:if (choice=='0')
         go to step 8
        else go to step 2
step 8:stop

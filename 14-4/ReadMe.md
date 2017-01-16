printf("%d  %s,%s %c%c - %d\n", n+1, member->one.fname, member->one.lname, (strlen(member->one.mname) == 0) ? ' ' : member->one.mname[0], (strlen(member->one.mname) == 0) ?' ':'.', member->sscnumber);


#大胆使用 ?:  运算符。一个现在看起来很高端的printf

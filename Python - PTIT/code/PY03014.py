for t in range(int(input())):
    s=input()
    st=[]
    res=[]
    pos=1

    for i in s:
        if( i=='('):
            st.append((i,))
            res.append()
        elif not st and st[-1] =='('and i ==')':
            lst[i]=lst[st[-1]]
            st.remove(-1)
        pos+=1


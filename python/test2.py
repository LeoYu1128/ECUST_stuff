class D:

    def bar(self):
        print('D.bar')

class C(D):

    print('C.bar')

class B(D):

    print('B.bar')

class A(B, C):

    print('A.bar')


a = A()
a.bar()

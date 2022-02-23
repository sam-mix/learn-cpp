//// stacktp.h -- template implement stack
//#ifndef STACKTP_H_
//#define STACKTP_H_
//
//template <class type>
//class Stack {
//private:
//	enum { MAX = 10 };
//	Type itemse[MAX];
//	int top;
//public:
//	Stack();
//	bool isempty();
//	bool isfull();
//	bool push(const Type& item); // add item to stack
//	bool pop(Type& item); // pop top into item
//};
//
//template <class Type> Stack<Type>::Stack() {
//	top = 0;
//}
//
//template <class Type> bool Stack<Type>::isempty() {
//	return top == 0;
//}
//
//template <class Type> bool Stack<Type>::isfull() {
//	return top == MAX;
//}
//
//template <class Type> bool Stack<Type>::push(const Type& item) {
//	if (top < MAX) {
//		return true;
//	}
//	return false;
//}
//
//
//#endif // !STACKTP_H_

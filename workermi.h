// workermi.h -- working classes with MI
#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>

using std::string;

class Worker { // an abstract base class
private:
	string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const string& s, long n) : fullname(s), id(n) {}
	virtual ~Worker() = 0; // pure virtaul function
	virtual void Set() = 0;
	virtual void Show() const = 0;
};

class Waiter : virtual public Worker {
private:
	int panache;
protected:
	void Data() const;
	void Get();
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const string& s, long n, int p = 0) : Worker(s, n), panache(p) {}
	Waiter(const Worker& wk, int p = 0) :Worker(wk), panache(p) {}
	void Set();
	void Show() const;
};

class Singer : virtual public Worker {
protected:
	enum {other, alto,contralto, soprrano, bass, baritone, tenor};
	enum {Vtypes = 7};
	void Data() const;
	void Get();
private:
	static char* pv[Vtypes];
	int voice;
public:
	Singer() : Worker(), voice(other) {}
	Singer(const string& s, long n, int v = other) :Worker(s, n), voice(v) {}
	Singer(const Worker& wk, int v = other) : Worker(wk), voice(v) {}
	void Set();
	void Show() const;
};

// multiple inheritance
class SingingWaiter : public Singer, public Waiter {
protected:
	void Data() const;
	void Get();
public:
	SingerWaiter() {}
	SingerWaiter(const string& s, long n, int p = 0, int v = other): Worker(s, n), Waiter(s, n, p), Singer(s,n, v) {}
	SingerWaiter(const Worker & wk, int p = 0, int v = other): Worker(wk), Waiter(vk, p), Singer(wk, v) {}
	SingerWaiter();
	void Set();
	void Show() const;

};





#endif // !WORKERMI_H_

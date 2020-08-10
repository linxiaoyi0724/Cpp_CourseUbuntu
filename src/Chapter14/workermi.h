#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>
class WokrerMi
{
private:
    std::string fullname;
    long id;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    WokrerMi() : fullname("no one"), id(0L) {}
    WokrerMi(const std::string &s, long n) : fullname(s), id(n) {}
    virtual ~WokrerMi() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class WaiterMi : virtual public WokrerMi
{
private:
    int panache;

protected:
    void Data() const;
    void Get();

public:
    WaiterMi() : WokrerMi(), panache(0) {}
    WaiterMi(const std::string &s, long n, int p = 0) : WokrerMi(s, n), panache(0) {}
    WaiterMi(const WokrerMi &wk, int p = 0) : WokrerMi(wk), panache(p) {}
    void Set();
    void Show() const;
};

class SignerMi : virtual public WokrerMi
{
protected:
    enum
    {
        other,
        alto,
        contralto,
        soperano,
        bass,
        baritone,
        tenor
    };
    enum
    {
        Vtypes = 7
    };
    void Data() const;
    void Get();

private:
    static char *pv[Vtypes];
    int voice;

public:
    SignerMi() : WokrerMi(), voice(other) {}
    SignerMi(const std::string &s, long n, int v = other) : WokrerMi(s, n), voice(v) {}
    SignerMi(const WokrerMi &wk, int v = other) : WokrerMi(wk), voice(v) {}
    void Set();
    void Show() const;
};

class SignerWaiter : public SignerMi, public WaiterMi
{
protected:
    void Data() const;
    void Get();

public:
    SignerWaiter() {}
    SignerWaiter(const std::string &s, long n, int p = 0, int v = other) : WokrerMi(s, n), WaiterMi(s, n, p), SignerMi(s, n, c) {}
    SignerWaiter(const WokrerMi& wk, int p = 0, int v = other):WokrerMi(wk),WaiterMi(wk,p),SignerMi(wk,v){}
    SignerWaiter(const WaiterMi& wt,int v = other):WokrerMi(wt),WaiterMi(wt),SignerMi(wt,v){}
    SignerWaiter(const SignerMi& wt, int p = 0):WokrerMi(wt),WaiterMi(wt),SignerMi(wt,p){}

    void Set();
    void Show()const;
};
#endif
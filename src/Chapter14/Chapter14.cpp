1.
    1). 公有派生
    2). 私有派生
    3). 公有派生
    4). 私有派生
    5). 私有派生

2.
    Gloam::Gloam(int g = 0, const char* s = "C++"):glip(g),fb(s){}
    Gloam::Gloam(int g, const Frabjous& f):glip(g),fb(s){}
    void Gloam::tell()
    {
        cout << glip;
        fb.tell();
    }

3.
    Gloam::Gloam(int g = 0; const char* s = "C++"):Frabjous(s),glip(g){}
    Gloam::Gloam(int g, const Frabjous& f):Frabjous(f),glip(g){}
    void Gloam::tell()
    {
        cout << glip;
        Frabjous::tell();
    }
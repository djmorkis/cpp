
template<class c> auto try_out(c x) -> decltype(cerr << x, 0);
char try_out(...);

struct err_log {
    
    template<class c> typename enable_if<sizeof(try_out(declval<c>())) != 1, err_log&>::type operator << (c x) {
        cerr << boolalpha << x;
        return * this;
    }

    template<class c> typename enable_if<sizeof(try_out(declval<c>())) == 1, err_log&>::type operator << (c x) {
        *this << "{";
        for (auto it = x.begin(); it != x.end(); ++it)
            *this << ", " + 2 * (it == x.begin()) << *it;
        return * this << "}";
    }

    template<class c, class d> err_log& operator << (pair<c,d> x) {
        return * this << "(" << x.first << ", " << x.second << ")";
    }

    template<class c> err_log& operator << (queue<c> x) {
        *this << "{";
        bool first = true;
        while (!x.empty()) {
            *this << ", " + 2 * first << x.front();
            x.pop();
            first = false;
        }
        return * this << "}";
    }

    template<class c> err_log& operator << (stack<c> x) {
        *this << "{";
        bool first = true;
        while (!x.empty()) {
            *this << ", " + 2 * first << x.top();
            x.pop();
            first = false;
        }
        return * this << "}";
    }

};

#define debug(x) err_log() << "[ " << #x << " : " << x << " ]\n"




#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL_DEF
    #include <debug> 
#else
    #define debug(x) 42
#endif


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, K;
    cin >> n >> K;
    string s;
    cin >> s;
    set<string> S;
    S.insert(s);
    int ans = 0;
    map<int,vector<set<int>>> x;
    for (int i = 0; i < n; ++i) {
        x[1].push_back({i});
    }
    for (int i = 0; i < n; ++i) 
        for (int j = i + 1; j < n; ++j) 
            x[2].push_back({i, j});
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; k++) {
                x[3].push_back({i, j, k});
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int x3 = j + 1; x3 < n; ++x3) {
                for (int q = x3 + q; q < n; ++q) {
                    x[4].push_back({i, j, x3, q});
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int ak = j + 1; ak < n; ++ak) {
                for (int q = ak + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        x[5].push_back({i, j, ak, q, w});
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int ak = j + 1; ak < n; ++ak) {
                for (int q = ak + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            x[6].push_back({i, j, ak, q, w, e});
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int ak = j + 1; ak < n; ++ak) {
                for (int q = ak + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                x[7].push_back({i, j, ak, q, w, e, r});
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int ak = j + 1; ak < n; ++ak) {
                for (int q = ak + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                for (int t = r + 1; t < n; ++t) {
                                    x[8].push_back({i, j, ak, q, w, e, r, t});
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int q = k + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                for (int t = r + 1; t < n; ++t) {
                                    for (int y = t + 1; y < n; ++y) {
                                        x[9].push_back({i, j, k, q, w, e, r, t, y});
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int q = k + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                for (int t = r + 1; t < n; ++t) {
                                    for (int y = t + 1; y < n; ++y) {
                                        for (int u = y + 1; y < n; ++y) {
                                            x[10].push_back({i, j, k, q, w, e, r, t, y, u});
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int q = k + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                for (int t = r + 1; t < n; ++t) {
                                    for (int y = t + 1; y < n; ++y) {
                                        for (int u = y + 1; y < n; ++y) {
                                            for (int o = u + 1; o < n; ++o) {
                                                x[11].push_back({i, j, k, q, w, e, r, t, y, u, o});
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int q = k + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                for (int t = r + 1; t < n; ++t) {
                                    for (int y = t + 1; y < n; ++y) {
                                        for (int u = y + 1; y < n; ++y) {
                                            for (int o = u + 1; o < n; ++o) {
                                                for (int p = o + 1; p < n; ++p) {
                                                    x[12].push_back({i, j, k, q, w, e, r, t, y, u, o, p});
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                for (int q = k + 1; q < n; ++q) {
                    for (int w = q + 1; w < n; ++w) {
                        for (int e = w + 1;  e < n; ++e) {
                            for (int r = e + 1; r < n; ++r) {
                                for (int t = r + 1; t < n; ++t) {
                                    for (int y = t + 1; y < n; ++y) {
                                        for (int u = y + 1; y < n; ++y) {
                                            for (int o = u + 1; o < n; ++o) {
                                                for (int p = o + 1; p < n; ++p) {
                                                    for (int x1 = p + 1; x1 < n; ++x1) {
                                                        x[13].push_back({i, j, k, q, w, e, r, t, y, u, o, p, x1});
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    for (int i = 1; i < 14; ++i) {
        for (int j = 0; j < (int) x[i].size(); ++j) {
            if ((int)S.size() == K) break;
            string cur = "";
            for (int k = 0; k < n; ++k) {
                if (x[i][j].count(k)) {
                    continue;
                }
                cur += s[k];
            }
            S.insert(cur);
        }
    }
    debug(S);
    if ((int) S.size() >= K) {
        for (string el : S) {
            ans += n - (int) el.size();
        }
        cout << ans << "\n";
    } else {
        cout << "-1\n";
    }
}

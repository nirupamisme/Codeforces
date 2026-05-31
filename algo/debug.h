#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <tuple>
#include <utility>

// Forward declaration of string conversion engines
template <typename A, typename B> std::string to_string(std::pair<A, B> p);
template <typename A, typename B, typename C> std::string to_string(std::tuple<A, B, C> p);
template <typename A, typename B, typename C, typename D> std::string to_string(std::tuple<A, B, C, D> p);

// Overloads for base types
inline std::string to_string(const std::string& s) { return '"' + s + '"'; }
inline std::string to_string(const char* s) { return to_string((std::string) s); }
inline std::string to_string(bool b) { return (b ? "true" : "false"); }

// Overloads for primitive numerical types to prevent generic template clashes
inline std::string to_string(int x) { return std::to_string(x); }
inline std::string to_string(long long x) { return std::to_string(x); }
inline std::string to_string(unsigned int x) { return std::to_string(x); }
inline std::string to_string(unsigned long long x) { return std::to_string(x); }
inline std::string to_string(float x) { return std::to_string(x); }
inline std::string to_string(double x) { return std::to_string(x); }

// Overload for boolean arrays/vectors
inline std::string to_string(std::vector<bool> v) {
    bool first = true;
    std::string res = "{";
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        if (!first) res += ", ";
        first = false;
        res += to_string(v[i]);
    }
    res += "}";
    return res;
}

// Overload for any generic iterable container (vector, set, map)
template <typename A>
std::string to_string(A v) {
    bool first = true;
    std::string res = "{";
    for (const auto &x : v) {
        if (!first) res += ", ";
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

// Definition for Pair unpacking
template <typename A, typename B>
std::string to_string(std::pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

// Definition for 3-tuple unpacking
template <typename A, typename B, typename C>
std::string to_string(std::tuple<A, B, C> p) {
    return "(" + to_string(std::get<0>(p)) + ", " + to_string(std::get<1>(p)) + ", " + to_string(std::get<2>(p)) + ")";
}

// Definition for 4-tuple unpacking
template <typename A, typename B, typename C, typename D>
std::string to_string(std::tuple<A, B, C, D> p) {
    return "(" + to_string(std::get<0>(p)) + ", " + to_string(std::get<1>(p)) + ", " + to_string(std::get<2>(p)) + ", " + to_string(std::get<3>(p)) + ")";
}

// Base case for variadic macro expansion termination
inline void debug_out() { std::cerr << std::endl; }

// Variadic template parsing engine
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    std::cerr << " " << to_string(H);
    debug_out(T...);
}

// The core substitution macro that handles stringification and execution safely
#define debug(...) std::cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

#endif // DEBUG_H

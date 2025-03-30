#include "StringStatic.h"

// Implementation of the String class
String::String() : text("") {}

String::String(const std::string& str) : text(str) {}

String::String(const String& other) : text(other.text) {}

size_t String::length() const {
    return text.length();
}

std::string String::getText() const {
    return text;
}

String::~String() {}

// Implementation of the LetterString class
LetterString::LetterString() : String() {}

LetterString::LetterString(const std::string& str) : String(str) {}

LetterString::LetterString(const LetterString& other) : String(other) {}

void LetterString::shiftRight() {
    if (!text.empty()) {
        char last = text.back();
        text.pop_back();
        text.insert(text.begin(), last);
    }
}

LetterString::~LetterString() {}

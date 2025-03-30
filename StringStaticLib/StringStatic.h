#ifndef STRINGSTATIC_H
#define STRINGSTATIC_H

#include <iostream>
#include <string>

class String {
protected:
    std::string text; // Protected member so the derived class can access it
public:
    // Constructors
    String();
    String(const std::string& str);
    String(const String& other);

    // Method to get the string length
    size_t length() const;

    // Method to get the string value
    std::string getText() const;

    // Virtual destructor
    virtual ~String();
};

class LetterString : public String {
public:
    // Explicitly calling the base class constructor
    LetterString();
    LetterString(const std::string& str);
    LetterString(const LetterString& other);

    // Method to shift the string to the right by one character
    void shiftRight();

    // Destructor
    ~LetterString();
};

#endif // STRINGLIBRARY_H


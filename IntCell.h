#ifndef IntCell_H
#define IntCell_H

class IntCell
{
    public:
        explicit IntCell(int initailValue = 0);
        int read() const;
        void write(int x);

    private:
        int storedValue;
};

#endif

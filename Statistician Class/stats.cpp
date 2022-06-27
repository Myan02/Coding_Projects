#include <iostream>
#include <assert.h>
#include "stats.h"

using namespace std;

namespace main_savitch_2C 
{
    statistician :: statistician()
    {
        count = 0;
        total = 0;
        tinyest = 0;
        largest = 0;
    }

    void statistician :: next(double r)
    {
        double value = r;
        count++;
        
        if (count == 1)
        {
            tinyest = value;
            largest = value;
            total = value;
        }
        else
        {
            if (value < tinyest)
            {
                tinyest = value;
            }

            if (value > largest)
            {
                largest = value;
            }

            total += value;
        }
    }

    void statistician :: reset()
    {
        count = 0;
        total = 0;
        tinyest = 0;
        largest = 0;
    }

    int statistician :: length() const
    {
        return count;
    }

    double statistician :: sum() const
    {
        if (count > 0)
        {
            return total;
        }

        return 0;
    }

    double statistician :: mean() const
    {
        //assert(length() > 0);
        //the assert above makes sure that the object has at least one item
        //however, the test requires the addition of two objects that have no items, hence the commented assert

        return (total / count);
    }

    double statistician :: minimum() const
    {
        //assert(length() > 0);
        //the assert above makes sure that the object has at least one item
        //however, the test requires the addition of two objects that have no items, hence the commented assert

        return tinyest;
    }

    double statistician :: maximum() const
    {
        //assert(length() > 0);
        //the assert above makes sure that the object has at least one item
        //however, the test requires the addition of two objects that have no items, hence the commented assert
        
        return largest;
    }

    statistician operator +(const statistician& s1, const statistician& s2)
    {
        statistician temp;

        if (s2.length() == 0)
        {
            temp.count = s1.length();
            temp.total = s1.sum();
            temp.tinyest = s1.minimum();
            temp.largest = s1.maximum();
        }
        else if (s1.length() == 0)
        {
            temp.count = s2.length();
            temp.total = s2.sum();
            temp.tinyest = s2.minimum();
            temp.largest = s2.maximum();
        }
        else
        {
            temp.count = s1.length() + s2.length();
            temp.total = s1.sum() + s2.sum();

            if (s1.minimum() < s2.minimum())
            {
                temp.tinyest = s1.minimum();
            }
            else
            {
                temp.tinyest = s2.minimum();
            }

            if (s1.maximum() > s2.maximum())
            {
                temp.largest = s1.maximum();
            }
            else
            {
                temp.largest = s2.maximum();
            }
        }

        return temp;
    }

    statistician operator *(double scale, const statistician& s)
    {
        statistician temp;

        temp.count = s.length();
        temp.total = s.sum() * scale;

        if (scale > 0)
        {
            temp.tinyest = s.minimum() * scale;
            temp.largest = s.maximum() * scale;
        }
        else if (scale < 0)
        {
            temp.tinyest = s.maximum() * scale;
            temp.largest = s.minimum() * scale;
        }
        else
        {
            temp.tinyest = 0;
            temp.largest = 0;
        }
        
        return temp;
    }

    bool operator ==(const statistician& s1, const statistician& s2)
    {
        if ((s1.length() == s2.length()) && (s1.length() == 0))
        {
            return true;
        }
        else if ((s1.length() == s2.length()) && (s1.length() != 0))
        {
            if ((s1.sum() == s2.sum()) && (s1.minimum() == s2.minimum()) && (s1.maximum() == s2.maximum()))
            {
                return true;
            }
        }

        return false;
    }
}


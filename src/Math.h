#include <cmath>

namespace Nash
{
    namespace Math
    {
        namespace Arithmetic
        {
            // Returns __num1 + __num2
            double Add(double __num1, double __num2)
            {
                return __num1 + __num2;
            }

            double Subtract(double __num1, double __num2)
            {
                return __num1 - __num2;
            }

            double Multiply(double __num1, double __num2)
            {
                return __num1 * __num2;
            }

            double Divide(double __num1, double __num2)
            {
                return __num1 / __num2;
            }
        }
        namespace Trigonometry
        {
            // Returns the sine of the number of radians entered
            double Sine(double __radians)
            {
                return sin(__radians);
            }
            // Returns the cosine of the number of radians entered
            double Cosine(double __radians)
            {
                return cos(__radians);
            }
            // Returns the tangent of the number of radians entered
            double Tangent(double __radians)
            {
                return tan(__radians);
            }
            // Returns the arc sine of the number of radians entered
            double ArcSine(double __radians)
            {
                return asin(__radians);
            }
            // Returns the arc cosine of the number of radians entered
            double ArcCosine(double __radians)
            {
                return acos(__radians);
            }
            // Returns the arc tangent of the number of radians entered
            double ArcTangent(double __radians)
            {
                return atan(__radians);
            }
            // Returns the arc tangent of the number of y/x
            double YXArcTangent(double __x, double __y)
            {
                return atan2(__y, __x);
            }
        }
        namespace BasicMath
        {
            // Return the square root of the number input
            double root(double __num)
            {
                return sqrt(__num);
            }

            // Return the cube root of the number input
            double cube_root(double __num)
            {
                return cbrt(__num);
            }

            // Return the input ^ n
            double to_power_of_n(double __num, double __n)
            {
                double result = __num * __num;
                for (int i = 0; i < __num - 1; i++)
                {
                    result = result * __num;   
                }
                return result;
            }

            // Returns the rounded version of the number input
            double round_num(double __num)
            {
                return round(__num);
            }
            // Returns natural logarithm of the number input (assumes that base is e if not supplied)
            double logarithm(double __num, double __base = NULL)
            {
                if (__base == NULL)    { return log(__num); }
                else                   { return (__num > __base - 1) ? 1 + logarithm(__num / __base, __base) : 0; }
            }
            // Returns absolute value of input (usage => value.absolute() )
            double absolute(double __num)
            {
                return abs(__num);
            }

        }
    }
}
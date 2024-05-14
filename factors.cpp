
// Finding Divisors in √n
vector<int> findDivisors(int n) {
    vector<int> divisors;

    // Iterate from 1 to sqrt(n)
    for (int i = 1; i*i <= n ; i++) {
        // If i is a divisor of n
        if (n % i == 0) {
            // If the divisors are the same, only add it once (for perfect squares)
            if (n / i == i) {
                divisors.push_back(i);
            } else {
                // Add both divisors
                divisors.push_back(i);
                divisors.push_back(n / i);
            }
        }
    }

    return divisors;
}

/*---------------------------------------------------------------------------------------------------------------*/

//Finding Divisors of n elements

const int MAXN = 100100;
vector<int> ans[MAXN];

// Precompute divisors up to 1000
void Divisors()
{
    for (int i = 1 ; i <= 1000 ; i++)
    {
        for (int j = i ; j <= 1000 ; j += i)
        {
            ans[j].push_back(i);
        }
    }
}


// Function to find divisors of elements using precomputed values
vector<int> findDivisorsOfElements(const vector<int> &elements)
{
    vector<int> result;

    for (int num : elements)
    {
        // Append precomputed divisors
        result.insert(result.end(), ans[num].begin(), ans[num].end());
    }

    return result;
}


/*-----------------------------------------------------------------------------------------------------*/


//Check if a number is prime

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2 ; i*i <= n ; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}
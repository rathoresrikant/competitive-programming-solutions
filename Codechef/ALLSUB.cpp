    #include <iostream>

    std::string S, R;

    std::string solve (void ) {

        // store sizes
        int S_size = S.size();
        int R_size = R.size();

        if (R_size < S_size) {
            /* because to have S as a substring in R,
            R must be larger than or the same size as S*/
            return "Impossible";
        } else {
            /* frequency to store the count
            of characters in S and R */
            int S_frequency[26];
            int R_frequency[26];

            // filling with 0 initially
            std::fill(S_frequency, S_frequency + 26, 0);
            std::fill(R_frequency, R_frequency + 26, 0);

            // filling in the frequencies
            for (int i = 0; i < S_size; ++i)
                ++S_frequency[int(S[i] - 'a')];
            for (int i = 0; i < R_size; ++i)
                ++R_frequency[int(R[i] - 'a')];

            /* To have all the substrings of S
            in the set of all substrings of R,
            it would be sufficient to have just
            S as a substring in R. */

            /* To find the lexicographically
            minimum of such permutations of R,
            we simply keep all the remaining
            characters of R sorted and inject
            string S into its appropriate position. */

            /* There is however one more thing we
            should be worried about. Where exactly do
            we inject S if there exists a cluster of
            characters( = S[0]) in R?
            Well, going by the definition of the
            lexicographical order, we find the first
            character in S that differs from S[0].
            If it is lesser that S[0], we place S
            in the beginning of the cluster.
            In the other case, we put it at the end.*/

            // removing the obvious characters of S from R
            for (int i = 0; i < 26; ++i) {
                R_frequency[i] -= S_frequency[i];
                if (R_frequency[i] < 0) {
                    /* R doesn't have as many
                    number of character
                    char('a' + i) as S. */
                    return "Impossible";
                }
            }

            /* temp_ch stores the first character
            in S that differs from S[0] */
            char temp_ch = S[0];
            for (int i = 0; i < S_size; ++i) {
                char ch = S[i];
                if (ch != temp_ch) {
                    temp_ch = ch;
                    break;
                }
            }

            /* res stores the result and is
            initialized with the empty string*/
            std::string res;

            /* We append all the characters < S[0]
            to res in a sorted order. */
            for (char ch = 'a'; ch < S[0]; ++ch) {
                int id = int(ch - 'a');
                while (R_frequency[id]--)
                    res = res + ch;
            }

            if (temp_ch < S[0]) {
                // S chould come before the cluster of S[0]'s

                // we first append S to the result
                res += S;

                // then we append the cluster of S[0]'s
                int temp_id = int(S[0] - 'a');
                while (R_frequency[temp_id]--)
                    res = res + S[0];
            } else {
                // the cluster of S[0]'s should come before S

                // we first append the cluster of S[0]'s
                int temp_id = int(S[0] - 'a');
                while (R_frequency[temp_id]--)
                    res = res + S[0];
                
                // then we append S to the result
                res += S;
            }

            /* We append all the remaining
            characters < S[0] to res again
            in a sorted order. */
            for (char ch = char(1 + S[0]); ch <= 'z'; ++ch) {
                int id = int(ch - 'a');
                while (R_frequency[id]--)
                    res = res + ch;
            }
            return res;
        }
    }

    int main (void ) {

        int N;
        std::cin >> N;
        while (N--) {
            std::cin >> S >> R;
            std::cout << solve() << std::endl;
        }

        return 0;
    }
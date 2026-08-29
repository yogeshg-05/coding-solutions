# Magic Spells

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

While playing a video game, you are battling a powerful dark wizard. He casts his spells from a distance, giving you only a few seconds to react and conjure your counterspells. For a counterspell to be effective, you must first identify what kind of spell you are dealing with.

The wizard uses scrolls to conjure his spells, and sometimes he uses some of his generic spells that restore his stamina. In that case, you will be able to extract the name of the scroll from the spell. Then you need to find out how similar this new spell is to the spell formulas written in your spell journal.

Spend some time reviewing the locked code in your editor, and complete the body of the *counterspell* function.

Check [Dynamic cast](http://en.cppreference.com/w/cpp/language/dynamic_cast) to get an idea of how to solve this challenge.

**Input Format**

The wizard will read $t$ scrolls, which are hidden from you.  
Every time he casts a spell, it's passed as an argument to your *counterspell* function.

**Constraints**

- $1 \le t \le 100$  
- $1 \le |s| \le 1000$, where $s$ is a scroll name.
- Each scroll name, $s$, consists of uppercase and lowercase letters.

**Output Format**

After identifying the given spell, print its name and power.  
If it is a generic spell, find a subsequence of letters that are contained in both the spell name and your spell journal. 
Among all such subsequences, find and print the length of the longest one on a new line.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T14:53:08.408Z  

```cpp


  if (Fireball *fb = dynamic_cast<Fireball*>(spell))
{
    fb->revealFirepower();
}
else if (Frostbite *fb = dynamic_cast<Frostbite*>(spell))
{
    fb->revealFrostpower();
}
else if (Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell))
{
    ts->revealThunderpower();
}
else if (Waterbolt *wb = dynamic_cast<Waterbolt*>(spell))
{
    wb->revealWaterpower();
}
else
{
    string s1 = spell->revealScrollName();
    string s2 = SpellJournal::read();

    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[n][m] << endl;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/magic-spells/problem)
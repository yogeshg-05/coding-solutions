

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

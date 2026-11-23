
class Matrix {
    public:
        vector<vector<int>> a;

        Matrix operator+(const Matrix& other) const {
            Matrix res;
            for (size_t i = 0; i < a.size(); i++) {
                vector<int> row;
                for (size_t j = 0; j < a[i].size(); j++) {
                    row.push_back(a[i][j] + other.a[i][j]);
                }
                res.a.push_back(row);
            }
            return res;
        }
};

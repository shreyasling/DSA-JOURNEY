vector<int> getSecondOrderElements(int n, vector<int> a) {
    int max = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    
    int secondMax = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > secondMax && a[i] != max) {
            secondMax = a[i];
        }
    }
    int min = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    
    int secondMin = max;
    for(int i = 0; i < n; i++) {
        if(a[i] < secondMin && a[i] != min) {
            secondMin = a[i];
        }
    }
    
    vector<int> result;
    result.push_back(secondMax);
    result.push_back(secondMin);
    return result;
}


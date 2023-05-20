vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for(int i=0; i<grades.size(); i++)
    { 
        if(grades[i]%5>2 && grades[i]>=38)   res.push_back(grades[i]+5-grades[i]%5);
        else res.push_back(grades[i]);
    }
    return res;
}

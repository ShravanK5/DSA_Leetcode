class Solution {
private:
private:
    int dayOfYear(string date) {

        int days[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};

        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int result = day;
        for (int i = 0; i < month - 1; i++) {

            result += days[i];
        }
        return result;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1 = dayOfYear(arriveAlice);
        int a2 = dayOfYear(leaveAlice);
        int b1 = dayOfYear(arriveBob);
        int b2 = dayOfYear(leaveBob);    

        int start = max(a1, b1);

        int end = min(a2, b2);

        if (start > end) {
            return 0;
        }

        return end - start + 1;

    
    }
};
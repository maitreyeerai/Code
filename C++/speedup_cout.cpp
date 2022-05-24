//The static start_up function speeds up cout and #define changes endl to '\n', that prevents flushing buffer for each line.

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

//This helped in class template problem time-out

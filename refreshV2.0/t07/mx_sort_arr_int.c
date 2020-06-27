void mx_sort_arr_int(int *arr, int size) {
    int n = size;
    int tmp = 0;

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            if (arr[k] > arr[i]) {
                tmp = arr[i];
                arr[i] = arr[k];
                arr[k] = tmp;
            }
        }
    }
}

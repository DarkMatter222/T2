void main()
{

    int x;
    while(1) {

        if (x<0) {
            x = -1 * x;
            x--;
        } else if (x>0) {
            x = -1 * x;
            x++;
        } else {
            return;
        }

        if (x<0) {
            int k; if (k>0) x = k;
            x = -1 * x;
            x--;
        } else if (x>0) {
            x = -1 * x;
            x++;
        } else {
            return;
        }


    }
}

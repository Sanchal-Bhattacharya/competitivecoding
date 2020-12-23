#include <iostream>

using namespace std;

int main()

{

    int N, Q;

    cin >> N >> Q;

    int arr[N];

    for(int i = 0; i < N; i++)

        cin >> arr[i];

    for(int i = 0; i < Q; i++)

    {

        char a;

        int b, c;

        cin >> a >> b >> c;

        if(a == '1')

            arr[b] = c;

        else

        {

            int sum = 0;

            for(int j = b; j <= c; j++)

                sum += arr[j];

            cout << sum << endl;

        }

    }

}

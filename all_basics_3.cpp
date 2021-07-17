#include<iostream>
using namespace std;
/* just basic array input and output
int main(){
    int n;
    cin >> n;

    cout << "######\n";

    int array[n]; // int arr[4] = {1,2,3,4};
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "######\n";
    
    // cout << array; // address of first element

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}
*/
/* min- max from an array
int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int max = arr[0];
    int min = arr[0];
    int j;
    for (j = 1; j < n; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        
    } cout << "Max: " << max << endl;

    for (j = 1; j < n; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
        
    } cout << "Min: " << min << endl;
    
    OR
    # include<climits>

    int max_num = INT_MAX;
    int min_num = INT_MIN;

    for(int i = 0; i < n; i++){
        max_num = max(max_num, arr[i]);
        min_num = min(min_num, arr[i]);
    } cout << max_num << min_num;
    return 0;
}
*/
/* Linear Search

int linearsearch(int arr[], int n, int key){
    
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == key)
        {
            return j;
        }
        
    }
    return -1;
}

int main(){
    int n, key;
    
    cout << "Key: ";
    cin >> key;
    cout << "\nsize of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << linearsearch(arr, n, key) << endl;

    return 0;
    
}

*/
/* Binary Search
int BinarySearch(int arr[], int n, int key){
    
    int beg = 0;
    int end = n;
    

    while (beg <= end)
    {   
        int mid = (beg + end)/2;
        
        if (arr[mid] == key)
        {
            return mid;
        }
        
        else if (key > arr[mid])
        {
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
    }

    return -1;
    
}


int main(){
    int n;
    cout << "Size: ";
    cin >> n;

    int key;
    cout << "Key: ";
    cin >> key;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << BinarySearch(arr, n, key) << endl;
    
    return 0;
}
*/
/* Selection Sort
int selectionSort(int arr[], int n){
    int temp;

    for(int j = 0; j < n-1; j++){
        int min = j;
        for (int i = j+1; i < n; i++)
        {
            if (arr[i] < arr[min])
            {
                min = i;
            }
            temp = arr[min];
            arr[min] = arr[j];
            arr[j] = temp;
        }
    }
    
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    
    return 0;
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    return 0;
}
*/

/* maximum chocolate problem
int main(){
    int t; // t = 15;
    int ch = 0; // chocolate
    int wr = 0; // wrapper
    cin >> t;

    for (int i = 1; i < t+1; i++)
    {
        ch++;
        wr++;
    }

    while (wr >= 3)
    {
        ch = ch + wr/3;
        wr = wr/3 + wr%3;
    }
    
    cout << ch << " " << wr;
    
    return 0;
}
*/

/* Bubble Sort
int bubbleSort(int arr[], int n){
    int temp, counter = 1;
    while(counter < n){
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            } 
        } counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    return 0;
}
*/
/* insertion sort
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 1; j < n; j++)
    {
        int key = arr[j];
        int i = j-1;

        while (i >= 0 && arr[i] > key)
        {
            arr[i+1] = arr[i];
            i = i-1;
        }
        arr[i+1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0; 
}
*/
/* reverse of a number
int main(){
    int n;
    cin >> n;

    int rev = 0;

    while (n > 0)
    {
        rev = rev*10 + n%10;
        n = n/10;
    }
    cout << rev;
}
*/

/* Amstrong Number
#include<math.h>

int amstrong(int count, int n){
    int sum = 0;
    for (int i = 0; i < count; i++)
    {   
        int rem = n % 10;
        sum += pow(rem, 3);
        n = n/10;  
    }

    return sum;
}
int main(){

    int n;
    cin >> n;
    int x = n;
    int count = 0;

    while (x >= 0)
    {
        x = x/10;
        count++;
        x--;
    }

    // cout << count;
    
    int sum1 = amstrong(count, n);

    if (sum1 == n)
    {
        cout << "Amstrong Number";
    }
    else{
        cout << "Not an Amstrong Number";
    }
    
    return 0;
}
*/
/* Fibonacci Series
int fibonacci(int f, int s, int t){
    int n;
    cin >> n;
    cout << f << " " << s << " ";
    for (int i = 0; i < n; i++)
    {
        t = f + s;
        f = s;
        s = t;
        cout << t << " ";
    }
    return 0;
    
}

int main(){
    int f = 0, s = 1, t;
    fibonacci(f,s,t);
    return 0;
}
*/

/* factorial of a number using normal function
int factorial(int n){
    
    int f = 1;
    for (int i = 1; i < n+1; i++)
    {
        f *= i;
    }
    cout << f;
    
    return 0;
}
int main(){
    int n;
    cin >> n;
    // int f = 1;

    factorial(n);
    return 0;
}
*/
/*factorial of a number using recursion function

int factorial(int n, int f){
    
    while (n > 0)
    {
        f *= n;
        n--;
        factorial(n, f);
        
    }
    return f;
}
int main(){
    int n;
    cin >> n;
    int f = 1;

    cout << factorial(n, f);
    return 0;
}
*/
/* Calculate Combination Value: nCr 
int factorial(int n){
    
    int f = 1;
    for (int i = 1; i < n+1; i++)
    {
        f *= i;
    }
    //cout << f;
    
    return f;
}
int main(){
    int n, r;
    cin >> n >> r;
    // int f = 1;
    int nCr;

    nCr = factorial(n)/(factorial(r) * factorial(n - r));
    cout << nCr << endl;
    return 0;
}
*/
/* Pascal's Triangle
    n = 5
    each row: binomial coefficients:
    0C0
    1C0 1C1
    2C0 2C1 2C2
    3C0 3C1 3C2 3C3
    4C0 4C1 4C2 4C3 4C4

    1
    11
    121
    1331
    14641
int factorial(int n){
    int f = 1;
    for (int i = 1; i < n+1; i++)
    {
        f *= i;
    }
    //cout << f;
    
    return f;
}

int main(){
    int n;
    cin >> n;
    
    // int nCr;
    // nCr = factorial(n)/(factorial(r) * factorial(n - r));
    // cout << nCr << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i)/(factorial(j) * factorial(i - j));
        }
        cout << endl;
        
    }
    
    return 0;
}
*/